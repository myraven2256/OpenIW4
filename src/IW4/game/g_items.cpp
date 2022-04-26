//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void Fill_Clip(struct playerState_s* ps, unsigned int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Add_Ammo(struct gentity_s* ent, unsigned int weaponIndex, unsigned char weaponModel, int count, int fillClip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CurrentPrimaryWeapon(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int G_ItemClipMask(const struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int WeaponPickup_AddWeapon(struct gentity_s* weaponEnt, struct gentity_s* playerEnt, int weapon, unsigned char weaponModel, struct gentity_s** pDroppedWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PrintPlayerPickupMessage(struct gentity_s* player, int weapIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool WeaponPickup_LeechFromWeaponEnt(struct gentity_s* weaponEnt, struct gentity_s* player, int haveExactWeapon, int* pickupEvent, bool suppressNotifies)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WeaponPickup_AddAmmoForNewWeapon(struct gentity_s* weaponEnt, struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WeaponPickup_Notifies(struct gentity_s* thisItem, struct gentity_s* newDroppedItem, struct gentity_s* player, struct WeaponDef* weapDef, bool pickedUp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int WeaponPickup_Grab(struct gentity_s* weaponEnt, struct gentity_s* player, int weapIdx, int* pickupEvent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int WeaponPickup_Touch(struct gentity_s* weaponEnt, struct gentity_s* player, int weapIdx, int* pickupEvent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int WeaponPickup(struct gentity_s* weaponEnt, struct gentity_s* player, int* pickupEvent, int touched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ScavengerBagPickup(struct gentity_s* weaponEnt, struct gentity_s* player, int* pickupEvent, int touched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Touch_Item_Auto(struct gentity_s* ent, struct gentity_s* other, int bTouched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Touch_Item(struct gentity_s* ent, struct gentity_s* other, int touched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetFreeDropCueIdx()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UpdateScavengerBagVisibility(struct gentity_s* bagEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Think_Item(struct gentity_s* pSelf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_GetItemClassname(int item, struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct gentity_s* LaunchItem(int item, int ownerNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Item_SetDefaultVelocity(const struct gentity_s* droppingEnt, struct gentity_s* droppedEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Item_SetDefaultState(const struct gentity_s* droppingEnt, struct gentity_s* droppedEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Item_GetStateFromTag(const struct gentity_s* droppingEnt, unsigned int tag, const struct gentity_s* droppedEnt, float* matrix[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Item_SetStateFromTag(const struct gentity_s* droppingEnt, unsigned int tag, struct gentity_s* droppedEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* Drop_Item(struct gentity_s* ent, int item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* Drop_ScavengerBag(struct gentity_s* ent, int weapIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetNonClipAmmoToTransferToWeaponEntity(struct gentity_s* player, int transferWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PlayerHasAnyAmmoToTransferToWeapon(struct gentity_s* player, int transferWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TransferPlayerAmmoToWeaponEntity(struct gentity_s* player, struct gentity_s* weaponEnt, int transferWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetRandomClipAmmo(int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int TransferRandomAmmoToWeaponEntity(struct gentity_s* weaponEnt, int transferWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* Drop_Weapon(struct gentity_s* ent, int weapIdx, unsigned char weaponModel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FinishSpawningItem(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SaveRegisteredWeapons()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SaveRegisteredItems()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RegisterWeaponRumbles(struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_RegisterWeapon(unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SpawnItem(struct gentity_s* ent, int item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_OrientItemToGround(struct gentity_s* ent, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_EntCreatePhysObj(struct gentity_s* ent, const float* origin, const float* rotationMatrix[0x3], const float* velocity, struct PhysCollmap* physCollmap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Item_EnablePhysicsDelayed(struct gentity_s* weapEnt, struct gentity_s* dropper, int dropTime, const float* prevMatrix[0x3], unsigned int tagName, struct PhysCollmap* physCollmap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_EntEnablePhysics(struct gentity_s* ent, struct PhysCollmap* physCollmap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Item_RunWeaponPhysics(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_RunItem(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__
