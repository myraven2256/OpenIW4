//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later

namespace ReflectivePE {
namespace Patches {

void XAssetPatch(const int type, const unsigned int size)
{
  using DB_GetXAssetSizeHandler_t = int(__cdecl*)();
  DB_GetXAssetSizeHandler_t* DB_GetXAssetSizeHandlers = reinterpret_cast<DB_GetXAssetSizeHandler_t*>(0x799488);
  void** DB_XAssetPool = reinterpret_cast<void**>(0x007998A8);
  unsigned int* g_poolSize = reinterpret_cast<unsigned*>(0x007995E8);
  DB_XAssetPool[type] = malloc(size * DB_GetXAssetSizeHandlers[type]());
  g_poolSize[type] = size;
}

void main()
{
  FreeConsole(); // Free the console allocated from NTA tempered 1.0.177
  XAssetPatch(0x1C, 2400); // Fix an incompatible allocation with steam for the asset type "weapon"
  memset(reinterpret_cast<void*>(0x60BB58), 0x90, 11); // Activate developer's console in Com_Init_Try_Block_Function
  std::filesystem::remove("zone/english/mp_playlists.ff"); // Remove an incompatible mp_playlists.ff
}

} // namespace Patches
} // namespace ReflectivePE
