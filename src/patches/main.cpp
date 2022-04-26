//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later

namespace ReflectivePE {
namespace Patches {

void main()
{
  MessageBoxA(nullptr, "Hello", "A", MB_OK);
}

} // namespace Patches
} // namespace ReflectivePE
