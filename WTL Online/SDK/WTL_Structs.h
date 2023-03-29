#pragma once

/**
 * Name: WTL
 * Version: 4.26.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum WTL.EWTLMailPackageState
	 */
	enum class EWTLMailPackageState : uint8_t
	{
		None          = 0,
		Traveling     = 1,
		ReadyToPickup = 2,
		Delivered     = 3,
		MAX           = 4
	};

	/**
	 * Enum WTL.EWTLArtefactType
	 */
	enum class EWTLArtefactType : uint8_t
	{
		None                = 0,
		Quest               = 1,
		Food                = 2,
		StimulatorContainer = 3,
		Artefact            = 4,
		Houseware           = 5,
		Instruments         = 6,
		Electronics         = 7,
		Junk                = 8,
		AmmoComponents      = 9,
		Document            = 10,
		SpareParts          = 11,
		ModificationParts   = 12,
		Money               = 13,
		FishingBait         = 14,
		Fish                = 15,
		Miscellaneous       = 16,
		MAX                 = 17
	};

	/**
	 * Enum WTL.EWTLResourceType
	 */
	enum class EWTLResourceType : uint8_t
	{
		Base    = 0,
		Complex = 1,
		MAX     = 2
	};

	/**
	 * Enum WTL.EWTLArmorClass
	 */
	enum class EWTLArmorClass : uint8_t
	{
		None   = 0,
		Light  = 1,
		Medium = 2,
		Heavy  = 3,
		MAX    = 4
	};

	/**
	 * Enum WTL.EWTLClothesType
	 */
	enum class EWTLClothesType : uint8_t
	{
		None              = 0,
		Boots             = 1,
		Trousers          = 2,
		Jacket            = 3,
		Helmet            = 4,
		ArmorPlate        = 5,
		CustomizationItem = 6,
		MAX               = 7
	};

	/**
	 * Enum WTL.EWTLItemType
	 */
	enum class EWTLItemType : uint8_t
	{
		None     = 0,
		Weapon   = 1,
		Ammo     = 2,
		Medicine = 3,
		Stuff    = 4,
		Clothes  = 5,
		Resource = 6,
		Artefact = 7,
		MAX      = 8
	};

	/**
	 * Enum WTL.EWTLStuffType
	 */
	enum class EWTLStuffType : uint8_t
	{
		None                   = 0,
		WeaponRepairKit        = 1,
		AmmoReloadingKit       = 2,
		UnlockingKit           = 3,
		FlashLight             = 4,
		Equipment              = 5,
		Detector               = 6,
		ResourceMiner          = 7,
		BuilderKit             = 8,
		WeaponAttachment       = 9,
		OpticDevice            = 10,
		Battery                = 11,
		Extractor              = 12,
		ArtefactContainerS     = 13,
		ArtefactContainerM     = 14,
		ArtefactContainerL     = 15,
		PDAModule              = 16,
		ClothesRepairKit       = 17,
		PlacementKit           = 18,
		WeaponSprayCan         = 19,
		ClothesSprayCan        = 20,
		WeaponModificationKit  = 21,
		ClothesModificationKit = 22,
		EngravingKit           = 23,
		FishingItem            = 24,
		RepairItem             = 25,
		HealingItem            = 26,
		UniversalScaner        = 27,
		EnergyEquipment        = 28,
		ProductionModule       = 29,
		TeleportationDevice    = 30,
		Vehicle                = 31,
		Fuel                   = 32,
		Drone                  = 33,
		ControlledDrone        = 34,
		RadioDevice            = 35,
		MAX                    = 36
	};

	/**
	 * Enum WTL.EWTLCharacterEffectType
	 */
	enum class EWTLCharacterEffectType : uint8_t
	{
		None                = 0,
		Radiation           = 1,
		Chemicals           = 2,
		Poison              = 3,
		Bleeding            = 4,
		Suffocation         = 5,
		Burn                = 6,
		Wounded             = 7,
		Immobilization      = 8,
		Consternation       = 9,
		Alcohol             = 10,
		RadiationProtection = 11,
		ChemicalsProtection = 12,
		PoisonProtection    = 13,
		BleedingProtection  = 14,
		Medicine            = 15,
		Stimulator          = 16,
		IntruderState       = 17,
		IntruderStateLethal = 18,
		Invulnerability     = 19,
		MAX                 = 20
	};

	/**
	 * Enum WTL.EWTLMedicineType
	 */
	enum class EWTLMedicineType : uint8_t
	{
		MedKit     = 0,
		Stimulator = 1,
		MAX        = 2
	};

	/**
	 * Enum WTL.EWTLCaliber
	 */
	enum class EWTLCaliber : uint8_t
	{
		None                   = 0,
		Caliber_22LR           = 1,
		Caliber_9x18PM         = 2,
		Caliber_9x19Parabellum = 3,
		Caliber_7_62x25TT      = 4,
		Caliber_38Special      = 5,
		Caliber_45ACP          = 6,
		Caliber                = 7,
		Caliber01              = 8,
		Caliber_5_45x39        = 9,
		Caliber_5_56x45NATO    = 10,
		Caliber_7_62x39        = 11,
		Caliber_308WIN         = 12,
		Caliber_7_62x54        = 13,
		Caliber_9x39           = 14,
		Caliber_7_62x38        = 15,
		Caliber_30_06          = 16,
		Caliber_338LM          = 17,
		Caliber_357Magnum      = 18,
		Caliber_5_7x28         = 19,
		Caliber_43mm           = 20,
		Caliber_44Magnum       = 21,
		Caliber_500SWMagnum    = 22,
		Caliber_40mm           = 23,
		Caliber_76mm           = 24,
		MAX                    = 25
	};

	/**
	 * Enum WTL.EWTLAmmoType
	 */
	enum class EWTLAmmoType : uint8_t
	{
		Ammo       = 0,
		Case       = 1,
		Projectile = 2,
		MAX        = 3
	};

	/**
	 * Enum WTL.EWTLWeaponType
	 */
	enum class EWTLWeaponType : uint8_t
	{
		None            = 0,
		Knife           = 1,
		Pistol          = 2,
		Shotgun         = 3,
		SubMachineGun   = 4,
		AssaultRifle    = 5,
		Rifle           = 6,
		Machinegun      = 7,
		GrenadeLauncher = 8,
		Missile         = 9,
		Explosive       = 10,
		MAX             = 11
	};

	/**
	 * Enum WTL.EWTLLocationStorageType
	 */
	enum class EWTLLocationStorageType : uint8_t
	{
		None         = 0,
		Stash        = 1,
		CraftObject  = 2,
		PremiumStash = 3,
		MAX          = 4
	};

	/**
	 * Enum WTL.EWTLStorageType
	 */
	enum class EWTLStorageType : uint8_t
	{
		None                = 0,
		Inventory           = 1,
		Commission          = 2,
		CraftObject         = 3,
		LocationStorage     = 4,
		PrivateStorage      = 5,
		ClanStorage         = 6,
		FortificationObject = 7,
		MailPackage         = 8,
		MAX                 = 9
	};

	/**
	 * Enum WTL.EWTLMailPackageDeliveryType
	 */
	enum class EWTLMailPackageDeliveryType : uint8_t
	{
		None    = 0,
		Regular = 1,
		Fast    = 2,
		MAX     = 3
	};

	/**
	 * Enum WTL.EWTLColliderType
	 */
	enum class EWTLColliderType : uint8_t
	{
		None = 0,
		Body = 1,
		Head = 2,
		Arm  = 3,
		Leg  = 4,
		Foot = 5,
		MAX  = 6
	};

	/**
	 * Enum WTL.EWTLCharacterClass
	 */
	enum class EWTLCharacterClass : uint8_t
	{
		None      = 0,
		Miner     = 1,
		Hunter    = 2,
		Mercenary = 3,
		Engineer  = 4,
		MAX       = 5
	};

	/**
	 * Enum WTL.EWTLFaction
	 */
	enum class EWTLFaction : uint8_t
	{
		None          = 0,
		Confederation = 1,
		BlackSunset   = 2,
		MAX           = 3
	};

	/**
	 * Enum WTL.EDBConnectionType
	 */
	enum class EDBConnectionType : uint8_t
	{
		TCP       = 0,
		NamedPipe = 1,
		MAX       = 2
	};

	/**
	 * Enum WTL.EDBDriverType
	 */
	enum class EDBDriverType : uint8_t
	{
		None        = 0,
		MySQL       = 1,
		MySQLDevart = 2,
		MariaDB     = 3,
		MAX         = 4
	};

	/**
	 * Enum WTL.EWTLActivatableAnomalyState
	 */
	enum class EWTLActivatableAnomalyState : uint8_t
	{
		Idle          = 0,
		BeginActivate = 1,
		Activated     = 2,
		MAX           = 3
	};

	/**
	 * Enum WTL.EWTLAIStateDeath
	 */
	enum class EWTLAIStateDeath : uint8_t
	{
		None    = 0,
		ToDeath = 1,
		Death   = 2,
		MAX     = 3
	};

	/**
	 * Enum WTL.EWTLAmbientSoundDayTimeType
	 */
	enum class EWTLAmbientSoundDayTimeType : uint8_t
	{
		AllDay = 0,
		Day    = 1,
		Night  = 2,
		MAX    = 3
	};

	/**
	 * Enum WTL.EWTLAmbientSoundLocationType
	 */
	enum class EWTLAmbientSoundLocationType : uint8_t
	{
		Foreground  = 0,
		Underground = 1,
		MAX         = 2
	};

	/**
	 * Enum WTL.EWTLReloadingNotifyType
	 */
	enum class EWTLReloadingNotifyType : uint8_t
	{
		ReloadStart = 0,
		ReloadEnd   = 1,
		MAX         = 2
	};

	/**
	 * Enum WTL.EWTLAnomalyCheckResult
	 */
	enum class EWTLAnomalyCheckResult : uint8_t
	{
		Result_False = 0,
		Result_True  = 1,
		Result_MAX   = 2
	};

	/**
	 * Enum WTL.EWTLAnomalyActionResult
	 */
	enum class EWTLAnomalyActionResult : uint8_t
	{
		Failed  = 0,
		Success = 1,
		MAX     = 2
	};

	/**
	 * Enum WTL.EWTLBPLogVerbosity
	 */
	enum class EWTLBPLogVerbosity : uint8_t
	{
		Information = 0,
		Warning     = 1,
		Error       = 2,
		Fatal       = 3,
		MAX         = 4
	};

	/**
	 * Enum WTL.EWTLBulletHellTraceResultType
	 */
	enum class EWTLBulletHellTraceResultType : uint8_t
	{
		None        = 0,
		Character   = 1,
		WorldStatic = 2,
		MAX         = 3
	};

	/**
	 * Enum WTL.EWTLBulletHellAngularType
	 */
	enum class EWTLBulletHellAngularType : uint8_t
	{
		Forward  = 0,
		Reverse  = 1,
		PingPong = 2,
		MAX      = 3
	};

	/**
	 * Enum WTL.EWTLDisplayInputType
	 */
	enum class EWTLDisplayInputType : uint8_t
	{
		None           = 0,
		InputUp        = 1,
		InputDown      = 2,
		InputRight     = 3,
		InputLeft      = 4,
		ButtonPressed1 = 5,
		ButtonPressed2 = 6,
		MAX            = 7
	};

	/**
	 * Enum WTL.EWTLCharacterAnimationInstanceMovementState
	 */
	enum class EWTLCharacterAnimationInstanceMovementState : uint8_t
	{
		None           = 0,
		Stand          = 1,
		StandWalking   = 2,
		StandSprinting = 3,
		Crouch         = 4,
		CrouchWalking  = 5,
		Prone          = 6,
		ProneWalking   = 7,
		MAX            = 8
	};

	/**
	 * Enum WTL.EWTLRootMotionControlLockingType
	 */
	enum class EWTLRootMotionControlLockingType : uint8_t
	{
		None          = 0,
		LockOnlyYaw   = 1,
		LockOnlyPitch = 2,
		LockAll       = 3,
		MAX           = 4
	};

	/**
	 * Enum WTL.EWTLSimplifiedIdentificationType
	 */
	enum class EWTLSimplifiedIdentificationType : uint8_t
	{
		None               = 0,
		OriginalSimplified = 1,
		HealthbarCombined  = 2,
		CharacterNameOnly  = 3,
		MAX                = 4
	};

	/**
	 * Enum WTL.EWTLLadderMontageType
	 */
	enum class EWTLLadderMontageType : uint8_t
	{
		None            = 0,
		LadderUpStart   = 1,
		LadderUpEnd     = 2,
		LadderDownStart = 3,
		LadderDownEnd   = 4,
		MAX             = 5
	};

	/**
	 * Enum WTL.EWTLCharacterPreviewType
	 */
	enum class EWTLCharacterPreviewType : uint8_t
	{
		None                    = 0,
		CustomizationOnly       = 1,
		Equipment               = 2,
		EquipmentWithUsableItem = 3,
		MAX                     = 4
	};

	/**
	 * Enum WTL.EWTLTurretState
	 */
	enum class EWTLTurretState : uint8_t
	{
		None     = 0,
		Prewarm  = 1,
		Firing   = 2,
		Cooldown = 3,
		MAX      = 4
	};

	/**
	 * Enum WTL.EWTLConfirmationType
	 */
	enum class EWTLConfirmationType : uint8_t
	{
		None                   = 0,
		DropItemFromInventory  = 1,
		DestroyItemInInventory = 2,
		RemoveStash            = 3,
		MAX                    = 4
	};

	/**
	 * Enum WTL.EWTLBackButtonActionType
	 */
	enum class EWTLBackButtonActionType : uint8_t
	{
		None             = 0,
		BackToStoreItems = 1,
		BackToViewItem   = 2,
		BackToCart       = 3,
		MAX              = 4
	};

	/**
	 * Enum WTL.EFontSize
	 */
	enum class EFontSize : uint8_t
	{
		None      = 0,
		Default   = 1,
		Increased = 2,
		MAX       = 3
	};

	/**
	 * Enum WTL.EWTLControlledPawnType
	 */
	enum class EWTLControlledPawnType : uint8_t
	{
		Monster = 0,
		Robot   = 1,
		MAX     = 2
	};

	/**
	 * Enum WTL.EWTLEnemyNPCExclamationType
	 */
	enum class EWTLEnemyNPCExclamationType : uint8_t
	{
		None           = 0,
		Attack         = 1,
		DamageDone     = 2,
		Grenade        = 3,
		Reload         = 4,
		Warning        = 5,
		TargetSighted  = 6,
		TargetListened = 7,
		TalkToTarget   = 8,
		MAX            = 9
	};

	/**
	 * Enum WTL.EWTLEnemyNPCSpawnType
	 */
	enum class EWTLEnemyNPCSpawnType : uint8_t
	{
		Wave              = 0,
		ReplanishTheRanks = 1,
		MAX               = 2
	};

	/**
	 * Enum WTL.EWTLCannotUseRangedWeaponOnClientSideReason
	 */
	enum class EWTLCannotUseRangedWeaponOnClientSideReason : uint8_t
	{
		None                                  = 0,
		AmmoIsFireworkAndLocationIsUndeground = 1,
		MAX                                   = 2
	};

	/**
	 * Enum WTL.EWTLDroneMovementMode
	 */
	enum class EWTLDroneMovementMode : uint8_t
	{
		None                     = 0,
		RotateAroundCharacter    = 1,
		FollowCharacterFromAbove = 2,
		MAX                      = 3
	};

	/**
	 * Enum WTL.EWTLWeaponModificationPartsType
	 */
	enum class EWTLWeaponModificationPartsType : uint8_t
	{
		None       = 0,
		Damage     = 1,
		Accuracy   = 2,
		Durability = 3,
		MAX        = 4
	};

	/**
	 * Enum WTL.EWTLCannotCraftRecipeInCraftObjectReason
	 */
	enum class EWTLCannotCraftRecipeInCraftObjectReason : uint8_t
	{
		None                             = 0,
		StorageIsFull                    = 1,
		NotEnoughAvailableSlotsInStorage = 2,
		MAX                              = 3
	};

	/**
	 * Enum WTL.EWTLDebugSuggestionType
	 */
	enum class EWTLDebugSuggestionType : uint8_t
	{
		None    = 0,
		Account = 1,
		Friend  = 2,
		MAX     = 3
	};

	/**
	 * Enum WTL.EWTLCannotBuyItemReason
	 */
	enum class EWTLCannotBuyItemReason : uint8_t
	{
		None                    = 0,
		ItemIsOutOfStock        = 1,
		ItemPriceHasBeenChanged = 2,
		MAX                     = 3
	};

	/**
	 * Enum WTL.EWTLPlayerPawnType
	 */
	enum class EWTLPlayerPawnType : uint8_t
	{
		NoneOrDead = 0,
		Character  = 1,
		Monster    = 2,
		Spectator  = 3,
		MAX        = 4
	};

	/**
	 * Enum WTL.EWTLAchievementRarity
	 */
	enum class EWTLAchievementRarity : uint8_t
	{
		Common         = 0,
		Rare           = 1,
		VeryRare       = 2,
		UltraRare      = 3,
		IncredibleRare = 4,
		Legendary      = 5,
		MAX            = 6
	};

	/**
	 * Enum WTL.EWTLCharacterStateInVehicle
	 */
	enum class EWTLCharacterStateInVehicle : uint8_t
	{
		None         = 0,
		Idle         = 1,
		Riding       = 2,
		Reverse      = 3,
		Jump         = 4,
		SlideRight   = 5,
		SlideLeft    = 6,
		Acceleration = 7,
		MAX          = 8
	};

	/**
	 * Enum WTL.EWTLVehicleState
	 */
	enum class EWTLVehicleState : uint8_t
	{
		None              = 0,
		CharacterLanded   = 1,
		CharacterUnlanded = 2,
		Idle              = 3,
		MAX               = 4
	};

	/**
	 * Enum WTL.EWTLCannotTeleportOnFortificationReason
	 */
	enum class EWTLCannotTeleportOnFortificationReason : uint8_t
	{
		None                                               = 0,
		NotEnoughTeleportationDeviceEnergy                 = 1,
		ControlFactionNotEqualCharacterFaction             = 2,
		CharacterReputationTooLow                          = 3,
		CommandCoreEnergyNotEnoughForSafeZoneFunctionality = 4,
		MAX                                                = 5
	};

	/**
	 * Enum WTL.EWTLCheckType
	 */
	enum class EWTLCheckType : uint8_t
	{
		MustHaveAll      = 0,
		MustHaveOneOf    = 1,
		MustNotHaveAll   = 2,
		MustNotHaveOneOf = 3,
		MAX              = 4
	};

	/**
	 * Enum WTL.EWTLCharacterStateIndicatorNatureType
	 */
	enum class EWTLCharacterStateIndicatorNatureType : uint8_t
	{
		Neutral          = 0,
		Positive         = 1,
		Negative_Average = 2,
		Negative_Severe  = 3,
		MAX              = 4
	};

	/**
	 * Enum WTL.EWTLCharacterEffectNatureType
	 */
	enum class EWTLCharacterEffectNatureType : uint8_t
	{
		Negative = 0,
		Positive = 1,
		MAX      = 2
	};

	/**
	 * Enum WTL.EWTLStoreItemType
	 */
	enum class EWTLStoreItemType : uint8_t
	{
		All             = 0,
		Weapons         = 1,
		Ammo            = 2,
		Medicine        = 3,
		Equipment       = 4,
		ClothesAndArmor = 5,
		Resources       = 6,
		Other           = 7,
		Tokens          = 8,
		Bundles         = 9,
		NewItems        = 10,
		MAX             = 11
	};

	/**
	 * Enum WTL.EWTLCountryRegion
	 */
	enum class EWTLCountryRegion : uint8_t
	{
		Unknown = 0,
		Asia    = 1,
		America = 2,
		Europe  = 3,
		CIS     = 4,
		Oceania = 5,
		MAX     = 6
	};

	/**
	 * Enum WTL.EWTLMicrotransactionType
	 */
	enum class EWTLMicrotransactionType : uint8_t
	{
		Credits = 0,
		Premium = 1,
		MAX     = 2
	};

	/**
	 * Enum WTL.EWTLCannotPutToAccountInventoryReason
	 */
	enum class EWTLCannotPutToAccountInventoryReason : uint8_t
	{
		None                   = 0,
		CannotPut              = 1,
		HaveNoPremium          = 2,
		LoadedWeapon           = 3,
		WeaponWithAttachments  = 4,
		ModifiedWeapon         = 5,
		AmmoLoadedInWeapon     = 6,
		VehicleCurrentInUse    = 7,
		ClothesWithArmorPlates = 8,
		MAX                    = 9
	};

	/**
	 * Enum WTL.EWTLCannotTakeFromAccountInventoryReason
	 */
	enum class EWTLCannotTakeFromAccountInventoryReason : uint8_t
	{
		None                               = 0,
		CannotTake                         = 1,
		LowCharacterLevel                  = 2,
		NotEnoughAvailableSlotsInInventory = 3,
		MAX                                = 4
	};

	/**
	 * Enum WTL.EWTLClanScoreType
	 */
	enum class EWTLClanScoreType : uint8_t
	{
		None       = 0,
		PVP        = 1,
		PVE        = 2,
		Craft      = 3,
		Technology = 4,
		MAX        = 5
	};

	/**
	 * Enum WTL.EWTLSlotMachineSymbolCheckType
	 */
	enum class EWTLSlotMachineSymbolCheckType : uint8_t
	{
		NotAny = 0,
		Any    = 1,
		MAX    = 2
	};

	/**
	 * Enum WTL.EWTLSlotMachineSymbol
	 */
	enum class EWTLSlotMachineSymbol : uint8_t
	{
		Blank     = 0,
		Cherry    = 1,
		Bar       = 2,
		DoubleBar = 3,
		TripleBar = 4,
		Seven     = 5,
		Jackpot   = 6,
		MAX       = 7
	};

	/**
	 * Enum WTL.EWTLComboBoxStringType
	 */
	enum class EWTLComboBoxStringType : uint8_t
	{
		None                 = 0,
		CommonComboBoxString = 1,
		StoreComboBoxString  = 2,
		HUDComboBoxString    = 3,
		PDAComboBoxString    = 4,
		MAX                  = 5
	};

	/**
	 * Enum WTL.EWTLCheckBoxType
	 */
	enum class EWTLCheckBoxType : uint8_t
	{
		None           = 0,
		CommonCheckBox = 1,
		HUDCheckBox    = 2,
		PDACheckBox    = 3,
		MAX            = 4
	};

	/**
	 * Enum WTL.EWTLSwitcherType
	 */
	enum class EWTLSwitcherType : uint8_t
	{
		None                       = 0,
		PageSwitcher               = 1,
		ParameterSwitcher          = 2,
		Common_Parameter_PointSpin = 3,
		HUD_Parameter_PointSpin    = 4,
		PDA_Parameter_PointSpin    = 5,
		MAX                        = 6
	};

	/**
	 * Enum WTL.EWTLCommonClickedItemType
	 */
	enum class EWTLCommonClickedItemType : uint8_t
	{
		None                = 0,
		CommonClickedItem   = 1,
		MainMenuClickedItem = 2,
		StoreClickedItem    = 3,
		HUDClickedItem      = 4,
		PDAClickedItem      = 5,
		MAX                 = 6
	};

	/**
	 * Enum WTL.EWTLCommonButtonType
	 */
	enum class EWTLCommonButtonType : uint8_t
	{
		None               = 0,
		CommonButton       = 1,
		CommonTabButton    = 2,
		CommonTypeButton   = 3,
		HUDButton          = 4,
		HUDTabButton       = 5,
		HUDPopupMenuButton = 6,
		PDAButton          = 7,
		ColorButton        = 8,
		StoreButton        = 9,
		ColorPresetButton  = 10,
		MAX                = 11
	};

	/**
	 * Enum WTL.EWTLFoodActionType
	 */
	enum class EWTLFoodActionType : uint8_t
	{
		None  = 0,
		Drink = 1,
		Eat   = 2,
		MAX   = 3
	};

	/**
	 * Enum WTL.EWTLMessageDialogText
	 */
	enum class EWTLMessageDialogText : uint8_t
	{
		HasNotPurchasedCustomizationItemsErrorText = 0,
		NotEnoughTokensToBuyWantToPopUpErrorText   = 1,
		MAX                                        = 2
	};

	/**
	 * Enum WTL.EWTLLootBoxType
	 */
	enum class EWTLLootBoxType : uint8_t
	{
		None     = 0,
		Beginner = 1,
		Regular  = 2,
		Advanced = 3,
		Special  = 4,
		Rare     = 5,
		MAX      = 6
	};

	/**
	 * Enum WTL.EWTLSocialNetworkType
	 */
	enum class EWTLSocialNetworkType : uint8_t
	{
		None     = 0,
		VK       = 1,
		Facebook = 2,
		Twitter  = 3,
		MAX      = 4
	};

	/**
	 * Enum WTL.EWTLArenaMatchState
	 */
	enum class EWTLArenaMatchState : uint8_t
	{
		None            = 0,
		WaitingForStart = 1,
		InProgress      = 2,
		Done            = 3,
		MAX             = 4
	};

	/**
	 * Enum WTL.EWTLButtonText
	 */
	enum class EWTLButtonText : uint8_t
	{
		None            = 0,
		OK              = 1,
		Cancel          = 2,
		Yes             = 3,
		No              = 4,
		Apply           = 5,
		Back            = 6,
		TopUp           = 7,
		Send            = 8,
		Take            = 9,
		TakeAll         = 10,
		Update          = 11,
		Log             = 12,
		Settings        = 13,
		Withdraw        = 14,
		Deposit         = 15,
		Details         = 16,
		Open            = 17,
		Close           = 18,
		Receive         = 19,
		Buy             = 20,
		Info            = 21,
		ThreeD          = 22,
		Play            = 23,
		Set             = 24,
		Add             = 25,
		Remove1         = 26,
		Remove2         = 27,
		RemoveAll1      = 28,
		RemoveAll2      = 29,
		Delete          = 30,
		DeleteAll       = 31,
		Edit            = 32,
		Convert         = 33,
		Unite           = 34,
		Read            = 35,
		Create          = 36,
		Rename          = 37,
		Execute         = 38,
		Save            = 39,
		InviteToGroup   = 40,
		Exchange        = 41,
		ClanApplication = 42,
		MAX             = 43
	};

	/**
	 * Enum WTL.EWTLTutorialMessageType
	 */
	enum class EWTLTutorialMessageType : uint8_t
	{
		None     = 0,
		Tutorial = 1,
		Warning  = 2,
		MAX      = 3
	};

	/**
	 * Enum WTL.EWTLTutorialMessage
	 */
	enum class EWTLTutorialMessage : uint8_t
	{
		None                              = 0,
		ShowPDA                           = 1,
		ShowMap                           = 2,
		ShowMapLegend                     = 3,
		EmotionsMenu                      = 4,
		FirstSkillPoint                   = 5,
		GasMaskStuffSlot                  = 6,
		HasSteamInventoryItems            = 7,
		PlaceStash                        = 8,
		AccountInventoryInStore           = 9,
		AccountInventoryInStoreFastAccess = 10,
		HungerAffects                     = 11,
		ThirstAffects                     = 12,
		Satiety                           = 13,
		Exhaustion                        = 14,
		DelayedDeathSanatoriumTutorial    = 15,
		WantToPlacePremiumStash           = 16,
		PlacedPremiumStash                = 17,
		MAX                               = 18
	};

	/**
	 * Enum WTL.EWTLRepairKitState
	 */
	enum class EWTLRepairKitState : uint8_t
	{
		None        = 0,
		StartRepair = 1,
		StopRepair  = 2,
		OutOfEnergy = 3,
		MAX         = 4
	};

	/**
	 * Enum WTL.EWTLFortificationNotificationState
	 */
	enum class EWTLFortificationNotificationState : uint8_t
	{
		None                = 0,
		StartLoosingPoint   = 1,
		StartCapturingPoint = 2,
		PointCaptured       = 3,
		PointSecured        = 4,
		PointLost           = 5,
		PointCaptureFailed  = 6,
		MAX                 = 7
	};

	/**
	 * Enum WTL.EWTLFortificationPointState
	 */
	enum class EWTLFortificationPointState : uint8_t
	{
		None           = 0,
		CaptureStarted = 1,
		Captured       = 2,
		Restored       = 3,
		MAX            = 4
	};

	/**
	 * Enum WTL.EWTLFortificationJammerState
	 */
	enum class EWTLFortificationJammerState : uint8_t
	{
		None                 = 0,
		Connected            = 1,
		ConnectedOutOfEnergy = 2,
		ConnectionRefused    = 3,
		UnableToConnect      = 4,
		MAX                  = 5
	};

	/**
	 * Enum WTL.EWTLEquipmentType
	 */
	enum class EWTLEquipmentType : uint8_t
	{
		None                  = 0,
		NightVision           = 1,
		NDPDetector           = 2,
		MetalDetector         = 3,
		RespiratoryProtection = 4,
		RadiationDetector     = 5,
		PersonalEnergyShield  = 6,
		MAX                   = 7
	};

	/**
	 * Enum WTL.EWTLAITeam
	 */
	enum class EWTLAITeam : uint8_t
	{
		None          = 0,
		Vagrants      = 1,
		Monsters      = 2,
		Confederation = 3,
		BlackSunset   = 4,
		Neutrals      = 5,
		MAX           = 6
	};

	/**
	 * Enum WTL.EWTLCharacterStunhitDirection
	 */
	enum class EWTLCharacterStunhitDirection : uint8_t
	{
		None            = 0,
		Right           = 1,
		Left            = 2,
		InPlace         = 3,
		Back            = 4,
		FallDown        = 5,
		SpikeInShoulder = 6,
		SpikeInStomach  = 7,
		SpikeInHip      = 8,
		MAX             = 9
	};

	/**
	 * Enum WTL.EWTLRenderTargetType
	 */
	enum class EWTLRenderTargetType : uint8_t
	{
		Square    = 0,
		Landscape = 1,
		MAX       = 2
	};

	/**
	 * Enum WTL.EWTLDialogMessageType
	 */
	enum class EWTLDialogMessageType : uint8_t
	{
		Information = 0,
		Warning     = 1,
		Error       = 2,
		MAX         = 3
	};

	/**
	 * Enum WTL.EWTLNPCType
	 */
	enum class EWTLNPCType : uint8_t
	{
		None              = 0,
		Doctor            = 1,
		Stockman          = 2,
		Gunsmith          = 3,
		Trader            = 4,
		Barman            = 5,
		BlackMarketDealer = 6,
		MAX               = 7
	};

	/**
	 * Enum WTL.EWTLReportFormResponseError
	 */
	enum class EWTLReportFormResponseError : uint8_t
	{
		None                  = 0,
		ServerDoesNotResponse = 1,
		ServerRequestError    = 2,
		MAX                   = 3
	};

	/**
	 * Enum WTL.EWTLReportFormState
	 */
	enum class EWTLReportFormState : uint8_t
	{
		FeedbackForm   = 0,
		RequestSending = 1,
		RequestSuccess = 2,
		RequestError   = 3,
		MAX            = 4
	};

	/**
	 * Enum WTL.EWTLUseMenuActionType
	 */
	enum class EWTLUseMenuActionType : uint8_t
	{
		None                           = 0,
		ShowInformationAboutCharacter  = 1,
		SendTextChatMessageToCharacter = 2,
		GiveTokensToCharacter          = 3,
		OfferBarterToCharacter         = 4,
		InviteCharacterToGroup         = 5,
		MuteCharacter                  = 6,
		UnmuteCharacter                = 7,
		TextChatMuteCharacter          = 8,
		TextChatUnmuteCharacter        = 9,
		ReportCharacter                = 10,
		CommendCharacter               = 11,
		Pickup                         = 12,
		Charge                         = 13,
		Use                            = 14,
		OpenAmmoBox                    = 15,
		MAX                            = 16
	};

	/**
	 * Enum WTL.EWTLTriggerObjectActionType
	 */
	enum class EWTLTriggerObjectActionType : uint8_t
	{
		None            = 0,
		Read            = 1,
		Inspect         = 2,
		InsertBatteries = 3,
		TakeAndRead     = 4,
		Take            = 5,
		MAX             = 6
	};

	/**
	 * Enum WTL.EWTLQTEType
	 */
	enum class EWTLQTEType : uint8_t
	{
		None                                    = 0,
		Repetative                              = 1,
		RepetativeWithDecreasing                = 2,
		MachingSequence                         = 3,
		RepetativeControlsEnabled               = 4,
		RepetativeWithDecreasingControlsEnabled = 5,
		MachingSequenceWithDecreasing           = 6,
		Fishing                                 = 7,
		MAX                                     = 8
	};

	/**
	 * Enum WTL.EWTLArmorPlateType
	 */
	enum class EWTLArmorPlateType : uint8_t
	{
		None       = 0,
		FrontPlate = 1,
		BackPlate  = 2,
		MAX        = 3
	};

	/**
	 * Enum WTL.EWTLHUDRequestWindowType
	 */
	enum class EWTLHUDRequestWindowType : uint8_t
	{
		None          = 0,
		GroupInvite   = 1,
		ClanInvite    = 2,
		BarterOffer   = 3,
		MarkerSharing = 4,
		MAX           = 5
	};

	/**
	 * Enum WTL.EWTLMoneyTransferWindowWidgetType
	 */
	enum class EWTLMoneyTransferWindowWidgetType : uint8_t
	{
		None                    = 0,
		WithdrawFromClanStorage = 1,
		DepositToClanStorage    = 2,
		MAX                     = 3
	};

	/**
	 * Enum WTL.EWTLCommissionAddUpdateWindowType
	 */
	enum class EWTLCommissionAddUpdateWindowType : uint8_t
	{
		None   = 0,
		Add    = 1,
		Update = 2,
		MAX    = 3
	};

	/**
	 * Enum WTL.EWTLCheatType
	 */
	enum class EWTLCheatType : uint8_t
	{
		None                    = 0,
		RX_Throttle             = 1,
		TX_Throttle             = 2,
		BadPing                 = 3,
		TimeDiscrepancy         = 4,
		Unrandomizer            = 5,
		ClientValuesHack        = 6,
		SpeedHack               = 7,
		FireMacrosUse           = 8,
		HitOutsideHitbox        = 9,
		FireNotInView           = 10,
		FireWithNoAmmo          = 11,
		FireWithHighRate        = 12,
		CheatSoftwareDetected   = 13,
		SuspiciousModule        = 14,
		AnticheatResponseFailed = 15,
		MAX                     = 16
	};

	/**
	 * Enum WTL.EWTLCountdownSliderWidgetFillingType
	 */
	enum class EWTLCountdownSliderWidgetFillingType : uint8_t
	{
		Increasing = 0,
		Decreasing = 1,
		MAX        = 2
	};

	/**
	 * Enum WTL.EWTLActionTimerWidgetType
	 */
	enum class EWTLActionTimerWidgetType : uint8_t
	{
		None                              = 0,
		AnomalyResearch                   = 1,
		SafeZoneLeaveInvulnerableCooldown = 2,
		ItemPlacement                     = 3,
		MAX                               = 4
	};

	/**
	 * Enum WTL.EWTLWarningTitleWidgetType
	 */
	enum class EWTLWarningTitleWidgetType : uint8_t
	{
		CannotPickupNotAnyAvailableSlotInInventory           = 0,
		CannotMoveInventoryOverload                          = 1,
		CannotSprintInventoryOverload                        = 2,
		CannotPickupInventoryOverload                        = 3,
		CannotUseNotCondition                                = 4,
		CannotUseNotEnergy                                   = 5,
		WeaponReloadAdvice                                   = 6,
		CannotUsePortal                                      = 7,
		CannotInviteToGroupAlreadyIn                         = 8,
		NotInClan                                            = 9,
		NotInFaction                                         = 10,
		CannotUsePlaceableStuff                              = 11,
		CannotCollectWaterInventoryOverload                  = 12,
		CannotCollectWaterInventoryWillBeOverloaded          = 13,
		CannotCollectWaterNotAnyAvailableSlotInInventory     = 14,
		GunOverheated                                        = 15,
		NoAmmoForShooting                                    = 16,
		NoNutsInInventoryToThrow                             = 17,
		EventJoined                                          = 18,
		EventLeaved                                          = 19,
		EventCompleted                                       = 20,
		EventFailed                                          = 21,
		FishingRodIsBroken                                   = 22,
		MustBeInAFishingZoneToUseFishingRod                  = 23,
		ToUseFishingRodAimAtTheWater                         = 24,
		TooCloseToUseFishingRod                              = 25,
		TooFarToUseFishingRod                                = 26,
		FishDontBite                                         = 27,
		HaveNotAnyBaitInInventory                            = 28,
		NotEnoughStaminaToSprint                             = 29,
		NotEnoughStaminaToJump                               = 30,
		CannotUseVehicleNotAllowedInLocation                 = 31,
		CannotUseVehicleIsInSafeZone                         = 32,
		CannotSpawnVehicleOnUnevenSurface                    = 33,
		ResourceWasDepletedInSource                          = 34,
		NoOrNotEnoughRequiredItemsToGatherResourceFromSource = 35,
		FireWithCurrentLoadedAmmoIsProhibitedInThisLocation  = 36,
		MAX                                                  = 37
	};

	/**
	 * Enum WTL.EWTLItemSlotActionPermission
	 */
	enum class EWTLItemSlotActionPermission : uint8_t
	{
		AddOnCustomization                = 0,
		AddForModification                = 1,
		AddWeaponPartToExchange           = 2,
		RemoveFromCustomization           = 3,
		RemoveFromModification            = 4,
		RemoveWeaponPartFromExchange      = 5,
		OpenExtractor                     = 6,
		CloseExtractor                    = 7,
		AddToStimulatorContainerSlot      = 8,
		RemoveFromStimulatorContainerSlot = 9,
		AddOnSale                         = 10,
		AddOnRepair                       = 11,
		AddToExtractor                    = 12,
		AddToBarter                       = 13,
		AddToSteamInventory               = 14,
		AddToMailBox                      = 15,
		AddToUtilization                  = 16,
		AddToCommission                   = 17,
		AddToExistingItemOnCommission     = 18,
		RemoveFromSale                    = 19,
		RemoveFromRepair                  = 20,
		RemoveFromExtractor               = 21,
		RemoveFromBarter                  = 22,
		RemoveFromSteamInventory          = 23,
		RemoveFromMailBox                 = 24,
		RemoveFromUtilization             = 25,
		PutInStorage                      = 26,
		TakeFromStorage                   = 27,
		PutInClanStorage                  = 28,
		TakeFromClanStorage               = 29,
		PutToAccountInventory             = 30,
		TakeFromAccountInventory          = 31,
		AssignToFastAccess                = 32,
		RemoveFromFastAccess              = 33,
		PlaceItem                         = 34,
		AttachToWeaponByStuffItem         = 35,
		AttachStuffItemToWeapon           = 36,
		RemoveAttachmentFromWeapon        = 37,
		RemoveAttachmentFromWeaponBySlot  = 38,
		RemoveAllAttachmentsFromWeapon    = 39,
		UseItem                           = 40,
		ChargeEnergySourceItemToStuff     = 41,
		ChargeStuffItemByEnergySource     = 42,
		ChangeGasMaskFilterFromFilter     = 43,
		ChangeGasMaskFilterFromGasMask    = 44,
		RefuelFuelSourceItemToStuff       = 45,
		RefuelStuffItemByFuelSource       = 46,
		PlaceArtefactItemInContainer      = 47,
		RemoveArtefactItemFromContainer   = 48,
		InstallPDAModule                  = 49,
		RepairWeaponByKit                 = 50,
		RepairClothesByKit                = 51,
		ModifyWeaponByKit                 = 52,
		ModifyClothesByKit                = 53,
		PaintWeaponBySprayCan             = 54,
		PaintClothesBySprayCan            = 55,
		LoadAmmoToWeapon                  = 56,
		LoadWeapon                        = 57,
		UnloadWeapon                      = 58,
		BreakWeapon                       = 59,
		InstallArmoredPlate               = 60,
		RemoveArmoredPlate                = 61,
		UseNewPassport                    = 62,
		UseClassCertificate               = 63,
		UseGenderChangeCertificate        = 64,
		DrinkItem                         = 65,
		EatItem                           = 66,
		ViewItem                          = 67,
		ReadItem                          = 68,
		CutFish                           = 69,
		EquipClothesItem                  = 70,
		UnequipClothesItem                = 71,
		OpenArmoredPlatesWindow           = 72,
		RemoveAllArmoredPlates            = 73,
		EquipStuffItem                    = 74,
		UnequipStuffItem                  = 75,
		CombineItem                       = 76,
		SplitItem                         = 77,
		DropItem                          = 78,
		DestroyItem                       = 79,
		ShowItemInformation               = 80,
		RepairByRepairDevice              = 81,
		MAX                               = 82
	};

	/**
	 * Enum WTL.EWTLMonsterActivityState
	 */
	enum class EWTLMonsterActivityState : uint8_t
	{
		Normal    = 0,
		Passive   = 1,
		DeepSleep = 2,
		MAX       = 3
	};

	/**
	 * Enum WTL.EWTLMonsterActionBase
	 */
	enum class EWTLMonsterActionBase : uint8_t
	{
		None            = 0,
		MainAttack      = 1,
		SecondaryAttack = 2,
		SpecialAbility0 = 3,
		SpecialAbility1 = 4,
		SpecialAbility2 = 5,
		SpecialAbility3 = 6,
		SpecialAbility4 = 7,
		SpecialAbility5 = 8,
		Immobilized     = 9,
		Stunned         = 10,
		Die             = 11,
		CustomAction0   = 12,
		CustomAction1   = 13,
		CustomAction2   = 14,
		CustomAction3   = 15,
		CustomAction4   = 16,
		CustomAction5   = 17,
		CustomAction6   = 18,
		CustomAction7   = 19,
		CustomAction8   = 20,
		CustomAction9   = 21,
		MAX             = 22
	};

	/**
	 * Enum WTL.EWTLMonsterAttachState
	 */
	enum class EWTLMonsterAttachState : uint8_t
	{
		None            = 0,
		AttachTo        = 1,
		Attached        = 2,
		DetachTo        = 3,
		Detached        = 4,
		AttachedForward = 5,
		AttachedBack    = 6,
		MAX             = 7
	};

	/**
	 * Enum WTL.EWTLMonsterAttackModificator
	 */
	enum class EWTLMonsterAttackModificator : uint8_t
	{
		AllowCritical    = 0,
		DisallowCritical = 1,
		AlwaysCritical   = 2,
		MAX              = 3
	};

	/**
	 * Enum WTL.EWTLMonsterStateFollowTarget
	 */
	enum class EWTLMonsterStateFollowTarget : uint8_t
	{
		MoveTo             = 0,
		Attack             = 1,
		FarAttack          = 2,
		Hide               = 3,
		Attach             = 4,
		AttachedForward    = 5,
		Detach             = 6,
		WithoutStateChange = 7,
		AttachedBack       = 8,
		RandomLocation     = 9,
		JumpToEnemy        = 10,
		MAX                = 11
	};

	/**
	 * Enum WTL.EWTMonsterSecondaryState
	 */
	enum class EWTMonsterSecondaryState : uint8_t
	{
		Idle               = 0,
		Follow             = 1,
		MoveTo             = 2,
		Attack             = 3,
		MoveToForFarAttack = 4,
		FarAttack          = 5,
		Attach1            = 6,
		Attach2            = 7,
		Attach3            = 8,
		Attach4            = 9,
		Detach             = 10,
		RandomLocation     = 11,
		JumpToEnemy        = 12,
		HearingMoveTo      = 13,
		Hide               = 14,
		Stealth            = 15,
		MovingInStealth    = 16,
		CustomAction0      = 17,
		CustomAction1      = 18,
		CustomAction2      = 19,
		CustomAction3      = 20,
		CustomAction4      = 21,
		CustomAction5      = 22,
		SpecialAbility0    = 23,
		SpecialAbility1    = 24,
		SpecialAbility2    = 25,
		SpecialAbility3    = 26,
		MAX                = 27
	};

	/**
	 * Enum WTL.EWTLMonsterState
	 */
	enum class EWTLMonsterState : uint8_t
	{
		Idle                    = 0,
		Walk                    = 1,
		AggressUp               = 2,
		FollowTarget            = 3,
		Attack                  = 4,
		Escaping                = 5,
		Jump                    = 6,
		JumpToEnemy             = 7,
		Teleport                = 8,
		Fly                     = 9,
		FarAttackToBadCharacter = 10,
		ToStealth               = 11,
		InStealth               = 12,
		StealthMoveTo           = 13,
		StealthFollowEnemy      = 14,
		FromStealth             = 15,
		DropItemFromCharacter   = 16,
		CustomAction0           = 17,
		CustomAction1           = 18,
		CustomAction2           = 19,
		CustomAction3           = 20,
		CustomAction4           = 21,
		CustomAction5           = 22,
		GetRandomTarget         = 23,
		PlayMontage             = 24,
		ToSacrifice             = 25,
		FindTheVictim           = 26,
		SpawnMonster            = 27,
		MAX                     = 28
	};

	/**
	 * Enum WTL.EWTLMonsterActionType
	 */
	enum class EWTLMonsterActionType : uint8_t
	{
		None                 = 0,
		MainAttack           = 1,
		SecondaryAttack      = 2,
		SpecialAbility0      = 3,
		SpecialAbility1      = 4,
		SpecialAbility2      = 5,
		SpecialAbility3      = 6,
		SpecialAbility4      = 7,
		SpecialAbility5      = 8,
		Idle0                = 9,
		Idle1                = 10,
		Idle2                = 11,
		Idle3                = 12,
		Idle4                = 13,
		Idle5                = 14,
		Immobilized          = 15,
		Stunned              = 16,
		Die                  = 17,
		CustomAction0        = 18,
		CustomAction1        = 19,
		CustomAction2        = 20,
		CustomAction3        = 21,
		CustomAction4        = 22,
		CustomAction5        = 23,
		CustomAction6        = 24,
		ToStealth            = 25,
		InStealth            = 26,
		FromStealth          = 27,
		Aggression           = 28,
		FarAttack0           = 29,
		FarAttack1           = 30,
		FarAttackToBadEnemy1 = 31,
		MAX                  = 32
	};

	/**
	 * Enum WTL.EWTLMonsterMovementMode
	 */
	enum class EWTLMonsterMovementMode : uint8_t
	{
		None   = 0,
		Loaf   = 1,
		Walk   = 2,
		Sprint = 3,
		MAX    = 4
	};

	/**
	 * Enum WTL.EWTLPDAWidget
	 */
	enum class EWTLPDAWidget : uint8_t
	{
		Menu                  = 0,
		CharacterInfo         = 1,
		CharacterParameters   = 2,
		CharacterSkills       = 3,
		QuestLog              = 4,
		Map                   = 5,
		Mail                  = 6,
		Group                 = 7,
		Clan                  = 8,
		Faction               = 9,
		FriendsAndEnemies     = 10,
		CraftRecipes          = 11,
		Achievements          = 12,
		Settings              = 13,
		Premium               = 14,
		NVIDIA_Highlights     = 15,
		SocialNetworkVK       = 16,
		SocialNetworkFacebook = 17,
		MAX                   = 18
	};

	/**
	 * Enum WTL.EWTLCustomizationColorPresetType
	 */
	enum class EWTLCustomizationColorPresetType : uint8_t
	{
		None     = 0,
		Hair     = 1,
		Skin     = 2,
		Clothes  = 3,
		Feet     = 4,
		Backpack = 5,
		MAX      = 6
	};

	/**
	 * Enum WTL.EWTLMonsterDangerLevel
	 */
	enum class EWTLMonsterDangerLevel : uint8_t
	{
		None        = 0,
		Low         = 1,
		BelowNormal = 2,
		Normal      = 3,
		AboveNormal = 4,
		High        = 5,
		Critical    = 6,
		MAX         = 7
	};

	/**
	 * Enum WTL.EWTLMedicineEffectType
	 */
	enum class EWTLMedicineEffectType : uint8_t
	{
		None         = 0,
		Strength     = 1,
		Dexterity    = 2,
		Stamina      = 3,
		Accuracy     = 4,
		Intelligence = 5,
		Fortune      = 6,
		MaxHealth    = 7,
		MAX          = 8
	};

	/**
	 * Enum WTL.EWTLSuicideState
	 */
	enum class EWTLSuicideState : uint8_t
	{
		None              = 0,
		SuicideInProgress = 1,
		SuicideDone       = 2,
		MAX               = 3
	};

	/**
	 * Enum WTL.EWTLWeaponAttachmentType
	 */
	enum class EWTLWeaponAttachmentType : uint8_t
	{
		None        = 0,
		RedDotSight = 1,
		Scope       = 2,
		MuzzleBrake = 3,
		Silencer    = 4,
		Flashlight  = 5,
		Laser       = 6,
		MAX         = 7
	};

	/**
	 * Enum WTL.EWTLWeaponAttachmentSlotType
	 */
	enum class EWTLWeaponAttachmentSlotType : uint8_t
	{
		None       = 0,
		Muzzle     = 1,
		Flashlight = 2,
		Scope      = 3,
		MAX        = 4
	};

	/**
	 * Enum WTL.EWTLParameterInfluenceType
	 */
	enum class EWTLParameterInfluenceType : uint8_t
	{
		Add      = 0,
		Multiply = 1,
		Set      = 2,
		MAX      = 3
	};

	/**
	 * Enum WTL.EWTLClanParameter
	 */
	enum class EWTLClanParameter : uint8_t
	{
		None                               = 0,
		PVPExperienceMultiplier            = 1,
		PVEExperienceMultiplier            = 2,
		PVPDamageMultiplier                = 3,
		PVEDamageMultiplier                = 4,
		ItemExperienceMultiplier           = 5,
		ClanStorageMaxWeightMultiplier     = 6,
		InventoryMaxWeightMultiplier       = 7,
		ItemProductionSpeedMultiplier      = 8,
		FactionTechonologiesLevel          = 9,
		MedicineEfficiencyMultiplier       = 10,
		KnifePVPDamageMultiplier           = 11,
		PistolPVPDamageMultiplier          = 12,
		ShotgunPVPDamageMultiplier         = 13,
		SMGPVPDamageMultiplier             = 14,
		AssaultRiflePVPDamageMultiplier    = 15,
		RiflePVPDamageMultiplier           = 16,
		MachinegunPVPDamageMultiplier      = 17,
		GrenadeLauncherPVPDamageMultiplier = 18,
		ExplosivePVPDamageMultiplier       = 19,
		KnifePVEDamageMultiplier           = 20,
		PistolPVEDamageMultiplier          = 21,
		ShotgunPVEDamageMultiplier         = 22,
		SMGPVEDamageMultiplier             = 23,
		AssaultRiflePVEDamageMultiplier    = 24,
		RiflePVEDamageMultiplier           = 25,
		MachinegunPVEDamageMultiplier      = 26,
		GrenadeLauncherPVEDamageMultiplier = 27,
		ExplosivePVEDamageMultiplier       = 28,
		MovementSpeedMultiplier            = 29,
		MonsterPartsDropChanceMultiplier   = 30,
		ResourceDropChanceMultiplier       = 31,
		MiningChanceMultiplier             = 32,
		PVPCriticalChanceMultiplier        = 33,
		PVECriticalChanceMultiplier        = 34,
		MAX                                = 35
	};

	/**
	 * Enum WTL.EWTLCharacterParameter
	 */
	enum class EWTLCharacterParameter : uint8_t
	{
		None                            = 0,
		CriticalDamageChance            = 1,
		AvoidCriticalDamageChance       = 2,
		ResourceDropChance              = 3,
		MaxHealth                       = 4,
		MaxStamina                      = 5,
		TakenDamageAmount               = 6,
		Accuracy                        = 7,
		MovementSpeed                   = 8,
		EnvironmentResistance           = 9,
		SatietyHealthRegenerationRate   = 10,
		HealingEfficiency               = 11,
		WeaponHandlingSpeed             = 12,
		DeathLootLoss                   = 13,
		UsingItemsExperienceAmount      = 14,
		UsingRepairKitsEfficiency       = 15,
		SaveLockpicksChance             = 16,
		iHR_Efficiency                  = 17,
		AdditionalInventorySlots        = 18,
		MaxInventoryWeight              = 19,
		ItemProductionSpeed             = 20,
		AdditionalProductionQueueSlots  = 21,
		PVP_Damage                      = 22,
		PVP_SlowChanceOnHit             = 23,
		PVP_BleedingChanceOnHit         = 24,
		PVP_KillLootAmount              = 25,
		PVE_EnemyDamage                 = 26,
		PVE_MonsterDamage               = 27,
		PVE_MonsterKillLootAmount       = 28,
		PVE_MonsterKillExperienceAmount = 29,
		MeleeDamage                     = 30,
		MeleeBleedingChance             = 31,
		MeleeCriticalDamageChance       = 32,
		PistolDamage                    = 33,
		PistolAccuracy                  = 34,
		PistolCriticalDamageChance      = 35,
		SubMachineGunDamage             = 36,
		SubMachineGunAccuracy           = 37,
		ShotgunDamage                   = 38,
		RifleDamage                     = 39,
		RifleAccuracy                   = 40,
		AssaultRifleDamage              = 41,
		AssaultRifleAccuracy            = 42,
		GrenadeLauncherDamage           = 43,
		ExplosiveDamage                 = 44,
		ArmorWeightSpeedMultiplier      = 45,
		MAX                             = 46
	};

	/**
	 * Enum WTL.EWTLStateSpeedAIMonster
	 */
	enum class EWTLStateSpeedAIMonster : uint8_t
	{
		Stop    = 0,
		Speed01 = 1,
		Speed03 = 2,
		Speed05 = 3,
		Speed07 = 4,
		Speed1  = 5,
		MAX     = 6
	};

	/**
	 * Enum WTL.EWTLItemSlotType
	 */
	enum class EWTLItemSlotType : uint8_t
	{
		None                  = 0,
		Inventory             = 1,
		Storage               = 2,
		FastAccess            = 3,
		Armor                 = 4,
		Buy                   = 5,
		Repair                = 6,
		Extractor             = 7,
		Customization         = 8,
		StimulatorContainer   = 9,
		Stuff                 = 10,
		ClanStorage           = 11,
		Barter                = 12,
		ArmoredPlate          = 13,
		Modification          = 14,
		SteamInventory        = 15,
		MailBox               = 16,
		Utilization           = 17,
		WeaponPartForExchange = 18,
		AccountInventory      = 19,
		MAX                   = 20
	};

	/**
	 * Enum WTL.EWTLSplitWindowType
	 */
	enum class EWTLSplitWindowType : uint8_t
	{
		None                       = 0,
		SplitInPlayerInventory     = 1,
		TakeFromStorage            = 2,
		PutInBuyStorage            = 3,
		PutInStorage               = 4,
		PutInExtractorStorage      = 5,
		TakeFromClanStorage        = 6,
		PutInClanStorage           = 7,
		PutInBarterStorage         = 8,
		PutInSteamInventoryStorage = 9,
		PutInMailBoxStorage        = 10,
		DropFromInventory          = 11,
		DestroyInInventory         = 12,
		TakeFromAccountInventory   = 13,
		PutToAccountInventory      = 14,
		PutInUtilizationStorage    = 15,
		MAX                        = 16
	};

	/**
	 * Enum WTL.EWTLFiltersChat
	 */
	enum class EWTLFiltersChat : uint8_t
	{
		Common          = 0,
		Faction         = 1,
		Private         = 2,
		Log             = 3,
		Server          = 4,
		Loot            = 5,
		Environment     = 6,
		ConsoleCommand  = 7,
		Chat            = 8,
		GlobalChat      = 9,
		Battle          = 10,
		Group           = 11,
		Clan            = 12,
		Warning         = 13,
		CollapseChatBox = 14,
		MAX             = 15
	};

	/**
	 * Enum WTL.EWTLCharacterStateIndicatorType
	 */
	enum class EWTLCharacterStateIndicatorType : uint8_t
	{
		None                             = 0,
		InSafeZone                       = 1,
		MediumOverload                   = 2,
		HeavyOverload                    = 3,
		Invulnerable                     = 4,
		InMobileResurectionPointWorkZone = 5,
		InSafeZoneCannotSpawn            = 6,
		InFortificationScoreZone         = 7,
		AverageHunger                    = 8,
		SevereHunger                     = 9,
		AverageThirst                    = 10,
		SevereThirst                     = 11,
		Satiety                          = 12,
		PhysicalExhaustion               = 13,
		InFishingZone                    = 14,
		MAX                              = 15
	};

	/**
	 * Enum WTL.EWTLMedicineEffectParameter
	 */
	enum class EWTLMedicineEffectParameter : uint8_t
	{
		None            = 0,
		Health          = 1,
		Strength        = 2,
		Dexterity       = 3,
		Stamina         = 4,
		Accuracy        = 5,
		Intelligence    = 6,
		Fortune         = 7,
		StaminaRecovery = 8,
		MAX             = 9
	};

	/**
	 * Enum WTL.EWTLCustomMovementMode
	 */
	enum class EWTLCustomMovementMode : uint8_t
	{
		CUSTOM_None           = 0,
		CUSTOM_LadderClimbing = 1,
		CUSTOM_VehicleRiding  = 2,
		CUSTOM_MAX            = 3
	};

	/**
	 * Enum WTL.EWTLHUDNotificationType
	 */
	enum class EWTLHUDNotificationType : uint8_t
	{
		None                             = 0,
		Experience                       = 1,
		LevelUp                          = 2,
		BalanceIncrease                  = 3,
		BalanceDecrease                  = 4,
		InventoryChange                  = 5,
		ObjectivesChange                 = 6,
		TeamLeadChange                   = 7,
		GotItem                          = 8,
		LostItem                         = 9,
		Achievement                      = 10,
		SafeZoneEnter                    = 11,
		SafeZoneLeave                    = 12,
		ReputationIncrease               = 13,
		ReputationDecrease               = 14,
		SystemEvent                      = 15,
		SystemQuest                      = 16,
		ConfederationReputationIncrease  = 17,
		ConfederationReputationDecrease  = 18,
		BlackSunsetReputationIncrease    = 19,
		BlackSunsetReputationDecrease    = 20,
		MailMessageReceived              = 21,
		QuestCompleted                   = 22,
		QuestFailed                      = 23,
		GetGroupInvite                   = 24,
		RemoveFromGroup                  = 25,
		BecameGroupLeader                = 26,
		InstableNetworkConnection        = 27,
		CraftObjectProcessStarted        = 28,
		CraftObjectProcessFinished       = 29,
		MailPackageArrived               = 30,
		StuffItemAttachedToWeapon        = 31,
		PDAModuleInstalled               = 32,
		ItemRepaired                     = 33,
		ItemsRepaired                    = 34,
		ItemEquipped                     = 35,
		OnSendGlobalGroupInviteResponse  = 36,
		OnSteamInventoryConsumeItemError = 37,
		JoinedClan                       = 38,
		LeftClan                         = 39,
		ExcludedFromClan                 = 40,
		FactionScoreIncrease             = 41,
		FactionScoreDecrease             = 42,
		FactionRankIncrease              = 43,
		FactionRankDecrease              = 44,
		FortificationStartLoosingPoint   = 45,
		FortificationStartCapturingPoint = 46,
		ForticiationPointCaptured        = 47,
		FortificationPointSecured        = 48,
		FortificationPointLost           = 49,
		FortificationPointCaptureFailed  = 50,
		QuestCanBeCompleted              = 51,
		AccountAchievementTrigger        = 52,
		NewClanMemberRequest             = 53,
		EnterFishingZone                 = 54,
		LeaveFishingZone                 = 55,
		ClanLevelUp                      = 56,
		AccountBalanceIncrease           = 57,
		AccountBalanceDecrease           = 58,
		TakeQuest                        = 59,
		ReceivedMarkerFromPlayer         = 60,
		CanNotAcceptMarkerFromPlayer     = 61,
		FishingLineBroke                 = 62,
		CanNotFishingInThisPlace         = 63,
		MAX                              = 64
	};

	/**
	 * Enum WTL.EWTLArenaActivationVolumeType
	 */
	enum class EWTLArenaActivationVolumeType : uint8_t
	{
		None                        = 0,
		ActivatePlayerStart         = 1,
		ActivatePlayerStartByRating = 2,
		ActivatableObject           = 3,
		MAX                         = 4
	};

	/**
	 * Enum WTL.EWTLEventLogRecordType
	 */
	enum class EWTLEventLogRecordType : uint8_t
	{
		None                              = 0,
		MonsterKilled                     = 1,
		CharacterKilled                   = 2,
		EnemyNPCKilled                    = 3,
		CharacterDied                     = 4,
		CharacterSuicide                  = 5,
		DamageToMonster                   = 6,
		DamageToEnemyNPC                  = 7,
		DamageToCharacter                 = 8,
		CriticalDamageToMonster           = 9,
		CriticalDamageToEnemyNPC          = 10,
		CriticalDamageToCharacter         = 11,
		DamageFromMonster                 = 12,
		CriticalDamageFromMonster         = 13,
		DamageFromEnemyNPC                = 14,
		CriticalDamageFromEnemyNPC        = 15,
		DamageFromCharacter               = 16,
		CriticalDamageFromCharacter       = 17,
		DamageFromEnvironment             = 18,
		CharacterEntersLocation           = 19,
		CharacterLeaveLocation            = 20,
		StartMatch                        = 21,
		FinishMatch                       = 22,
		CharacterEarnsExperience          = 23,
		CharacterLevelUp                  = 24,
		CharacterDestroyMonsterSpawnPoint = 25,
		CharacterGotItem                  = 26,
		CharacterLostItem                 = 27,
		CharacterDepositedItem            = 28,
		CharacterTakeItem                 = 29,
		CharacterDropItem                 = 30,
		CharacterEarnsScores              = 31,
		FactionEarnsScores                = 32,
		EnemyPositionsSentToTeamSuccess   = 33,
		EnemyPositionsSentToTeamError     = 34,
		TeamLeadChanged                   = 35,
		CapturePointChanged               = 36,
		PointCaptureByTeam                = 37,
		PointCaptureByEnemy               = 38,
		PointCaptureFailed                = 39,
		SafeZoneEnter                     = 40,
		SafeZoneLeave                     = 41,
		ReputationIncrease                = 42,
		ReputationDecrease                = 43,
		BalanceChange                     = 44,
		ConfederationReputationIncrease   = 45,
		ConfederationReputationDecrease   = 46,
		BlackSunsetReputationIncrease     = 47,
		BlackSunsetReputationDecrease     = 48,
		InstableNetworkConnection         = 49,
		MadeEffectToCharacter             = 50,
		TakeItemFromAccountInventory      = 51,
		PutItemToAccountInventory         = 52,
		MAX                               = 53
	};

	/**
	 * Enum WTL.EWTLMonsterEventType
	 */
	enum class EWTLMonsterEventType : uint8_t
	{
		None              = 0,
		MonsterMakeDamage = 1,
		StopedByDamage    = 2,
		RecoverFromDamage = 3,
		Attack            = 4,
		FarAttack         = 5,
		MAX               = 6
	};

	/**
	 * Enum WTL.EWTLMonsterAIStateOfAggression
	 */
	enum class EWTLMonsterAIStateOfAggression : uint8_t
	{
		None   = 0,
		Normal = 1,
		Hard   = 2,
		MAX    = 3
	};

	/**
	 * Enum WTL.EWTLMonsterAIStateMoving
	 */
	enum class EWTLMonsterAIStateMoving : uint8_t
	{
		Stop   = 0,
		Moving = 1,
		MAX    = 2
	};

	/**
	 * Enum WTL.EWTLMonsterAIState
	 */
	enum class EWTLMonsterAIState : uint8_t
	{
		Walk           = 0,
		RateAggressUp  = 1,
		FollowTarget   = 2,
		Attack         = 3,
		FarAttack      = 4,
		FindInstigator = 5,
		Escaping       = 6,
		TakeDamageHigh = 7,
		Stealth        = 8,
		Bug            = 9,
		MAX            = 10
	};

	/**
	 * Enum WTL.EWTLMonsterAnimationState
	 */
	enum class EWTLMonsterAnimationState : uint8_t
	{
		Movement        = 0,
		Idle            = 1,
		Attack          = 2,
		FarAttack       = 3,
		Damage          = 4,
		RateAggressUp   = 5,
		TakeDamageHight = 6,
		Stealth         = 7,
		Death           = 8,
		MAX             = 9
	};

	/**
	 * Enum WTL.EWTLMonsterAIStateAnim
	 */
	enum class EWTLMonsterAIStateAnim : uint8_t
	{
		None           = 0,
		Movement       = 1,
		Fly            = 2,
		Idle           = 3,
		Attack         = 4,
		FarAttack      = 5,
		Damage         = 6,
		RateAggressUp  = 7,
		TakeDamageHigh = 8,
		Stealth        = 9,
		Death          = 10,
		MAX            = 11
	};

	/**
	 * Enum WTL.EWTLUsableItemUseType
	 */
	enum class EWTLUsableItemUseType : uint8_t
	{
		None        = 0,
		Main        = 1,
		Alternative = 2,
		MAX         = 3
	};

	/**
	 * Enum WTL.EWTLUsableItemState
	 */
	enum class EWTLUsableItemState : uint8_t
	{
		None                     = 0,
		Idle                     = 1,
		ReloadedOneRound         = 2,
		ReloadedFullMagazine     = 3,
		MissileThrow             = 4,
		TacticalPlace            = 5,
		TakeInArms               = 6,
		PutToInventory           = 7,
		MissileReadyToThrow      = 8,
		MeleeWeaponHit           = 9,
		ResourceMinerHit         = 10,
		ResourceMinerZoneUse     = 11,
		RepairItemUse            = 12,
		HealingItemUse           = 13,
		RechargeItem             = 14,
		DetectorPowerButtonPress = 15,
		SetDetectorMode          = 16,
		StartToUse               = 17,
		MAX                      = 18
	};

	/**
	 * Enum WTL.FSteelTargetState
	 */
	enum class EFSteelTargetState : uint8_t
	{
		FSteelTargetStateNone                  = 0,
		FSteelTargetStateRised                 = 1,
		FSteelTargetStateDroped                = 2,
		FSteelTargetStateFSteelTargetState_MAX = 3
	};

	/**
	 * Enum WTL.FSteelTargetType
	 */
	enum class EFSteelTargetType : uint8_t
	{
		FSteelTargetTypeNone                 = 0,
		FSteelTargetTypeAlwaysActive         = 1,
		FSteelTargetTypeActivateByCharacter  = 2,
		FSteelTargetTypeActivateByController = 3,
		FSteelTargetTypeFSteelTargetType_MAX = 4
	};

	/**
	 * Enum WTL.EWTLMonsterTakeDamageType
	 */
	enum class EWTLMonsterTakeDamageType : uint8_t
	{
		None   = 0,
		Low    = 1,
		Medium = 2,
		High   = 3,
		MAX    = 4
	};

	/**
	 * Enum WTL.EWTLAIStateMoving
	 */
	enum class EWTLAIStateMoving : uint8_t
	{
		Stop     = 0,
		Walk     = 1,
		EasyRun  = 2,
		QuickRun = 3,
		MAX      = 4
	};

	/**
	 * Enum WTL.EWTLAIStateMonster
	 */
	enum class EWTLAIStateMonster : uint8_t
	{
		Walk           = 0,
		RateAggressUp  = 1,
		FollowTarget   = 2,
		FindInstigator = 3,
		Escaping       = 4,
		MAX            = 5
	};

	/**
	 * Enum WTL.EWTLAITypeTakeDamage
	 */
	enum class EWTLAITypeTakeDamage : uint8_t
	{
		None   = 0,
		Low    = 1,
		Medium = 2,
		High   = 3,
		MAX    = 4
	};

	/**
	 * Enum WTL.EWTLAIStateAnimMonster
	 */
	enum class EWTLAIStateAnimMonster : uint8_t
	{
		Idle           = 0,
		Idle2          = 1,
		Idle3          = 2,
		TakeHighDamage = 3,
		RateAggressUp  = 4,
		Movement       = 5,
		Attack1        = 6,
		Attack2        = 7,
		Death          = 8,
		MAX            = 9
	};

	/**
	 * Enum WTL.EWTLDetectorMode
	 */
	enum class EWTLDetectorMode : uint8_t
	{
		AliveCreaturesSearchMode  = 0,
		MinesDetectorMode         = 1,
		PlaceableStuffsSearchMode = 2,
		MAX                       = 3
	};

	/**
	 * Enum WTL.EWTLWeaponState
	 */
	enum class EWTLWeaponState : uint8_t
	{
		Idle      = 0,
		Firing    = 1,
		FireLast  = 2,
		Reloading = 3,
		Equiping  = 4,
		Empty     = 5,
		MAX       = 6
	};

	/**
	 * Enum WTL.EWTLFireMode
	 */
	enum class EWTLFireMode : uint8_t
	{
		None   = 0,
		Single = 1,
		Burst2 = 2,
		Burst3 = 3,
		Auto   = 4,
		MAX    = 5
	};

	/**
	 * Enum WTL.EProjectileType
	 */
	enum class EProjectileType : uint8_t
	{
		None    = 0,
		Bullet  = 1,
		Grenade = 2,
		MAX     = 3
	};

	/**
	 * Enum WTL.EWTLBulletType
	 */
	enum class EWTLBulletType : uint8_t
	{
		FMJ = 0,
		HP  = 1,
		AP  = 2,
		MAX = 3
	};

	/**
	 * Enum WTL.EWTLCharacterMoveState
	 */
	enum class EWTLCharacterMoveState : uint8_t
	{
		NotMoving = 0,
		Prone     = 1,
		Crouch    = 2,
		Walk      = 3,
		Sprint    = 4,
		MAX       = 5
	};

	/**
	 * Enum WTL.EWTLCharacterPose
	 */
	enum class EWTLCharacterPose : uint8_t
	{
		Stand  = 0,
		Crouch = 1,
		Prone  = 2,
		Swim   = 3,
		MAX    = 4
	};

	/**
	 * Enum WTL.EWTLHandsState
	 */
	enum class EWTLHandsState : uint8_t
	{
		Empty                  = 0,
		Idle                   = 1,
		TakingItemInArms       = 2,
		PuttingItemInInventory = 3,
		Reloading              = 4,
		Action                 = 5,
		Running                = 6,
		AimingTransition       = 7,
		Jamming                = 8,
		ItemPlacement          = 9,
		ThrowNut               = 10,
		QuickThrow             = 11,
		MAX                    = 12
	};

	/**
	 * Enum WTL.EWTLClientMessageType
	 */
	enum class EWTLClientMessageType : uint8_t
	{
		Building = 0,
		Mining   = 1,
		MAX      = 2
	};

	/**
	 * Enum WTL.EWTLKeyCategory
	 */
	enum class EWTLKeyCategory : uint8_t
	{
		None          = 0,
		Common        = 1,
		Movement      = 2,
		Actions       = 3,
		Slots         = 4,
		HUD           = 5,
		PDA           = 6,
		Communication = 7,
		MAX           = 8
	};

	/**
	 * Enum WTL.EWTLInputMode
	 */
	enum class EWTLInputMode : uint8_t
	{
		Game      = 0,
		GameAndUI = 1,
		UI        = 2,
		MAX       = 3
	};

	/**
	 * Enum WTL.EWTLMapMarkerType
	 */
	enum class EWTLMapMarkerType : uint8_t
	{
		Player                                      = 0,
		Enemy                                       = 1,
		Ally                                        = 2,
		Monster                                     = 3,
		QuestMonster                                = 4,
		CapturePoint                                = 5,
		TeamLead                                    = 6,
		SafeHouse                                   = 7,
		MobileStartPoint                            = 8,
		QuestPoint                                  = 9,
		CompleteQuestPoint                          = 10,
		CompleteActiveQuestPoint                    = 11,
		TakeQuestPoint                              = 12,
		PlayerKiller                                = 13,
		LastDeath                                   = 14,
		CampfireLocation                            = 15,
		StashLocation                               = 16,
		NPC                                         = 17,
		Label                                       = 18,
		Portal                                      = 19,
		PortalQuestPoint                            = 20,
		PortalCompleteQuestPoint                    = 21,
		PortalCompleteActiveQuestPoint              = 22,
		WaterSource                                 = 23,
		NPCDoctor                                   = 24,
		NPCStockman                                 = 25,
		NPCGunsmith                                 = 26,
		NPCTrader                                   = 27,
		FortificationNeutralCaptureInProgress       = 28,
		FortificationConfederationCaptureInProgress = 29,
		FortificationBlackSunsetCaptureInProgress   = 30,
		FortificationNeutralCanBeCaptured           = 31,
		FortificationConfederationCanBeCaptured     = 32,
		FortificationBlackSunsetCanBeCaptured       = 33,
		FortificationNeutralCannotBeCaptured        = 34,
		FortificationConfederationCannotBeCaptured  = 35,
		FortificationBlackSunsetCannotBeCaptured    = 36,
		EventPointMonsterSpawn                      = 37,
		EventPointEnvironment                       = 38,
		EventPointFindItem                          = 39,
		SafeZoneArea                                = 40,
		SafeZoneNeutral                             = 41,
		SafeZoneConfederation                       = 42,
		SafeZoneBlackSunset                         = 43,
		MAX                                         = 44
	};

	/**
	 * Enum WTL.EWTLEventPointActivationType
	 */
	enum class EWTLEventPointActivationType : uint8_t
	{
		ByRange  = 0,
		ByVolume = 1,
		MAX      = 2
	};

	/**
	 * Enum WTL.EWTLEventPointType
	 */
	enum class EWTLEventPointType : uint8_t
	{
		None         = 0,
		MonsterSpawn = 1,
		Environment  = 2,
		FindItem     = 3,
		MAX          = 4
	};

	/**
	 * Enum WTL.EWTLFishState
	 */
	enum class EWTLFishState : uint8_t
	{
		None       = 0,
		Pecking    = 1,
		Recovering = 2,
		MAX        = 3
	};

	/**
	 * Enum WTL.EWTLFishingMontageType
	 */
	enum class EWTLFishingMontageType : uint8_t
	{
		None        = 0,
		Throwing    = 1,
		ThrowingEnd = 2,
		Peck        = 3,
		PeckEnd     = 4,
		LeftHook    = 5,
		UpHook      = 6,
		RightHook   = 7,
		DownHook    = 8,
		MAX         = 9
	};

	/**
	 * Enum WTL.EWTLHUDType
	 */
	enum class EWTLHUDType : uint8_t
	{
		None      = 0,
		Character = 1,
		Spectator = 2,
		Monster   = 3,
		MAX       = 4
	};

	/**
	 * Enum WTL.ECannotActionType
	 */
	enum class ECannotActionType : uint8_t
	{
		Put  = 0,
		Take = 1,
		MAX  = 2
	};

	/**
	 * Enum WTL.EWTLAccountInventoryOperationType
	 */
	enum class EWTLAccountInventoryOperationType : uint8_t
	{
		None        = 0,
		UpdateItems = 1,
		TakeItem    = 2,
		PutItem     = 3,
		MAX         = 4
	};

	/**
	 * Enum WTL.EWTLHumanoidAnimInstanceState
	 */
	enum class EWTLHumanoidAnimInstanceState : uint8_t
	{
		None          = 0,
		Walking       = 1,
		Crouch        = 2,
		CombatWalking = 3,
		CombatCrouch  = 4,
		MAX           = 5
	};

	/**
	 * Enum WTL.EWTLRequestType
	 */
	enum class EWTLRequestType : uint8_t
	{
		None                                       = 0,
		PurchaseStoreItems                         = 1,
		GetAccountInventory                        = 2,
		GetAccountInventoryAfterPurchaseStoreItems = 3,
		MAX                                        = 4
	};

	/**
	 * Enum WTL.EWTLMonsterAcceleration
	 */
	enum class EWTLMonsterAcceleration : uint8_t
	{
		Normal = 0,
		Fast   = 1,
		MAX    = 2
	};

	/**
	 * Enum WTL.EWTLMonsterFindingVisibleCharacterType
	 */
	enum class EWTLMonsterFindingVisibleCharacterType : uint8_t
	{
		Random   = 0,
		Near     = 1,
		Hamster  = 2,
		Stimulus = 3,
		MAX      = 4
	};

	/**
	 * Enum WTL.EWTLMonsterFindingCharacterType
	 */
	enum class EWTLMonsterFindingCharacterType : uint8_t
	{
		Random             = 0,
		MinHealth          = 1,
		MaxHealth          = 2,
		MinLevel           = 3,
		MaxLevel           = 4,
		MinTotalTakeDamage = 5,
		MaxTotalTakeDamage = 6,
		Near               = 7,
		MAX                = 8
	};

	/**
	 * Enum WTL.EWTLMonsterStateDeath
	 */
	enum class EWTLMonsterStateDeath : uint8_t
	{
		None    = 0,
		ToDeath = 1,
		Death   = 2,
		MAX     = 3
	};

	/**
	 * Enum WTL.EWTLControlledActionKeyType
	 */
	enum class EWTLControlledActionKeyType : uint8_t
	{
		None            = 0,
		MainAttack      = 1,
		SecondaryAttack = 2,
		CustomAction0   = 3,
		CustomAction1   = 4,
		CustomAction2   = 5,
		CustomAction3   = 6,
		CustomAction4   = 7,
		CustomAction5   = 8,
		CustomAction6   = 9,
		CustomAction7   = 10,
		Die             = 11,
		MAX             = 12
	};

	/**
	 * Enum WTL.EWTLMonsterSpawnerSpawnMethod
	 */
	enum class EWTLMonsterSpawnerSpawnMethod : uint8_t
	{
		Reachable = 0,
		Navigable = 1,
		MAX       = 2
	};

	/**
	 * Enum WTL.EWTLWayPointMovingType
	 */
	enum class EWTLWayPointMovingType : uint8_t
	{
		Sequential = 0,
		Random     = 1,
		MAX        = 2
	};

	/**
	 * Enum WTL.EWTLNPCReplicaAction
	 */
	enum class EWTLNPCReplicaAction : uint8_t
	{
		None                      = 0,
		ShowMainDialog            = 1,
		ShowGreetingDefault       = 2,
		ShowGreetingDialog        = 3,
		ShowGreetingAndMainDialog = 4,
		ShowTakeQuestDialog       = 5,
		ShowCompleteQuestDialog   = 6,
		EndDialog                 = 7,
		MAX                       = 8
	};

	/**
	 * Enum WTL.EWTLCharacterCanTakeCompleteQuest
	 */
	enum class EWTLCharacterCanTakeCompleteQuest : uint8_t
	{
		None         = 0,
		Take         = 1,
		Complete     = 2,
		TakeComplete = 3,
		MAX          = 4
	};

	/**
	 * Enum WTL.EWTLInventoryToSteamConversionErrorCode
	 */
	enum class EWTLInventoryToSteamConversionErrorCode : uint8_t
	{
		None                     = 0,
		InternalError            = 1,
		ItemsNotFoundInInventory = 2,
		ItemsConditionsError     = 3,
		WrongItemType            = 4,
		SteamResponseError       = 5,
		MAX                      = 6
	};

	/**
	 * Enum WTL.EWTLNPCReason
	 */
	enum class EWTLNPCReason : uint8_t
	{
		None           = 0,
		FullBag        = 1,
		WeightOverload = 2,
		MAX            = 3
	};

	/**
	 * Enum WTL.EWTLNPCCheckResult
	 */
	enum class EWTLNPCCheckResult : uint8_t
	{
		Result_False = 0,
		Result_True  = 1,
		Result_MAX   = 2
	};

	/**
	 * Enum WTL.EWTLNPCActionResult
	 */
	enum class EWTLNPCActionResult : uint8_t
	{
		Success = 0,
		Failed  = 1,
		MAX     = 2
	};

	/**
	 * Enum WTL.EWTLNPCAction
	 */
	enum class EWTLNPCAction : uint8_t
	{
		DoNothing      = 0,
		SpawnReplica   = 1,
		GiveExperience = 2,
		GiveItem       = 3,
		MAX            = 4
	};

	/**
	 * Enum WTL.EWTLHighlightID
	 */
	enum class EWTLHighlightID : uint8_t
	{
		None            = 0,
		BossKill        = 1,
		Kill            = 2,
		DoubleKill      = 3,
		MultiKill       = 4,
		TrophyKill      = 5,
		LongDistanceHit = 6,
		Jackpot         = 7,
		MAX             = 8
	};

	/**
	 * Enum WTL.EWTLClanLogType
	 */
	enum class EWTLClanLogType : uint8_t
	{
		None    = 0,
		Score   = 1,
		Actions = 2,
		MAX     = 3
	};

	/**
	 * Enum WTL.EWTLClanLeaderboardSortType
	 */
	enum class EWTLClanLeaderboardSortType : uint8_t
	{
		None         = 0,
		MembersCount = 1,
		PvPScore     = 2,
		PvEScore     = 3,
		CraftScore   = 4,
		Reputation   = 5,
		Rating       = 6,
		MAX          = 7
	};

	/**
	 * Enum WTL.EWTLPDASkillState
	 */
	enum class EWTLPDASkillState : uint8_t
	{
		NotAvailable = 0,
		Available    = 1,
		Learned      = 2,
		MAX          = 3
	};

	/**
	 * Enum WTL.EWTLPortalActionResult
	 */
	enum class EWTLPortalActionResult : uint8_t
	{
		Success = 0,
		Failed  = 1,
		MAX     = 2
	};

	/**
	 * Enum WTL.EWTLControlledDroneAbilityType
	 */
	enum class EWTLControlledDroneAbilityType : uint8_t
	{
		None             = 0,
		GetInfo          = 1,
		SwitchCameraMode = 2,
		SingleShot       = 3,
		PickUp           = 4,
		MAX              = 5
	};

	/**
	 * Enum WTL.EWTLMarkerType
	 */
	enum class EWTLMarkerType : uint8_t
	{
		None     = 0,
		Enemy    = 1,
		EnemyNPC = 2,
		Friend   = 3,
		Monster  = 4,
		Device   = 5,
		MAX      = 6
	};

	/**
	 * Enum WTL.EWTLClanActionLogRecordType
	 */
	enum class EWTLClanActionLogRecordType : uint8_t
	{
		None                     = 0,
		AcceptInvite             = 1,
		AcceptRequest            = 2,
		SetClanLeadership        = 3,
		SetClanMemberType        = 4,
		SetClanPolicyGroup       = 5,
		ChangeClanDescription    = 6,
		LeaveClan                = 7,
		DismissCharacterFromClan = 8,
		UpdateClanTabAccess      = 9,
		MAX                      = 10
	};

	/**
	 * Enum WTL.EWTLClanScoreLogRecordType
	 */
	enum class EWTLClanScoreLogRecordType : uint8_t
	{
		None                 = 0,
		QuestComplete        = 1,
		TakeClanSkill        = 2,
		ScoreExchange        = 3,
		FortificationCapture = 4,
		MAX                  = 5
	};

	/**
	 * Enum WTL.EWTLPlatform
	 */
	enum class EWTLPlatform : uint8_t
	{
		None   = 0,
		Steam  = 1,
		Abyss  = 2,
		Mailru = 3,
		MAX    = 4
	};

	/**
	 * Enum WTL.EWTLCharacterContactType
	 */
	enum class EWTLCharacterContactType : uint8_t
	{
		None   = 0,
		Friend = 1,
		Enemy  = 2,
		MAX    = 3
	};

	/**
	 * Enum WTL.EWTLVoicePacketType
	 */
	enum class EWTLVoicePacketType : uint8_t
	{
		None           = 0,
		ClientIdentity = 1,
		Regular        = 2,
		Private        = 3,
		Group          = 4,
		Clan           = 5,
		MAX            = 6
	};

	/**
	 * Enum WTL.EWTLAccountType
	 */
	enum class EWTLAccountType : uint8_t
	{
		Regular   = 0,
		Tester    = 1,
		Developer = 2,
		MAX       = 3
	};

	/**
	 * Enum WTL.EWTLClanStorageMoneyOperationType
	 */
	enum class EWTLClanStorageMoneyOperationType : uint8_t
	{
		None      = 0,
		PutMoney  = 1,
		TakeMoney = 2,
		MAX       = 3
	};

	/**
	 * Enum WTL.EWTLClanStorageItemOperationType
	 */
	enum class EWTLClanStorageItemOperationType : uint8_t
	{
		None     = 0,
		PutItem  = 1,
		TakeItem = 2,
		MAX      = 3
	};

	/**
	 * Enum WTL.EWTLServerEventType
	 */
	enum class EWTLServerEventType : uint8_t
	{
		None           = 0,
		ServerShutdown = 1,
		VersionUpdate  = 2,
		Important      = 3,
		Average        = 4,
		Quest          = 5,
		MAX            = 6
	};

	/**
	 * Enum WTL.EWTLPlayerType
	 */
	enum class EWTLPlayerType : uint8_t
	{
		Regular       = 0,
		Moderator     = 1,
		Administrator = 2,
		MAX           = 3
	};

	/**
	 * Enum WTL.EWTLQuestState
	 */
	enum class EWTLQuestState : uint8_t
	{
		None             = 0,
		InProgress       = 1,
		Canceled         = 2,
		CompletedSuccess = 3,
		CompletedFailed  = 4,
		MAX              = 5
	};

	/**
	 * Enum WTL.EWTLClanMemberType
	 */
	enum class EWTLClanMemberType : uint8_t
	{
		None         = 0,
		Leader       = 1,
		DeputyLeader = 2,
		Steward      = 3,
		Member       = 4,
		Candidate    = 5,
		MAX          = 6
	};

	/**
	 * Enum WTL.EWTLQuestType
	 */
	enum class EWTLQuestType : uint8_t
	{
		None       = 0,
		OneTime    = 1,
		Repeatable = 2,
		MAX        = 3
	};

	/**
	 * Enum WTL.EWTLCharacterCustomizationPart
	 */
	enum class EWTLCharacterCustomizationPart : uint8_t
	{
		None     = 0,
		Head     = 1,
		Torso    = 2,
		Legs     = 3,
		Feet     = 4,
		Glasses  = 5,
		Watches  = 6,
		Backpack = 7,
		MAX      = 8
	};

	/**
	 * Enum WTL.EWTLGameServerStopReason
	 */
	enum class EWTLGameServerStopReason : uint8_t
	{
		None           = 0,
		ConnectionLost = 1,
		Shutdown       = 2,
		MAX            = 3
	};

	/**
	 * Enum WTL.EWTLGameServerType
	 */
	enum class EWTLGameServerType : uint8_t
	{
		None      = 0,
		Official  = 1,
		Community = 2,
		MAX       = 3
	};

	/**
	 * Enum WTL.EWTLCraftType
	 */
	enum class EWTLCraftType : uint8_t
	{
		None            = 0,
		Inventory       = 1,
		CampFire        = 2,
		Furnace         = 3,
		PressMachine    = 4,
		ChemicalStation = 5,
		AmmoPress       = 6,
		SmallCNCMachine = 7,
		BigCNCMachine   = 8,
		MAX             = 9
	};

	/**
	 * Enum WTL.EWTLBuildingDoorLockType
	 */
	enum class EWTLBuildingDoorLockType : uint8_t
	{
		None     = 0,
		KeyLock  = 1,
		CodeLock = 2,
		MAX      = 3
	};

	/**
	 * Enum WTL.EWTLSkillDependencyType
	 */
	enum class EWTLSkillDependencyType : uint8_t
	{
		MustHave      = 0,
		MustNotHave   = 1,
		MustHaveOneOf = 2,
		MAX           = 3
	};

	/**
	 * Enum WTL.EWTLSkillType
	 */
	enum class EWTLSkillType : uint8_t
	{
		Passive = 0,
		Active  = 1,
		MAX     = 2
	};

	/**
	 * Enum WTL.EWTLBalanceChangeType
	 */
	enum class EWTLBalanceChangeType : uint8_t
	{
		Income = 0,
		Charge = 1,
		MAX    = 2
	};

	/**
	 * Enum WTL.EWTLAmmoProjectileType
	 */
	enum class EWTLAmmoProjectileType : uint8_t
	{
		FMJ = 0,
		HP  = 1,
		AP  = 2,
		MAX = 3
	};

	/**
	 * Enum WTL.EWTLShopType
	 */
	enum class EWTLShopType : uint8_t
	{
		System = 0,
		MAX    = 1
	};

	/**
	 * Enum WTL.EWTLMiningPointType
	 */
	enum class EWTLMiningPointType : uint8_t
	{
		None = 0,
		Tree = 1,
		MAX  = 2
	};

	/**
	 * Enum WTL.EWTLBuildingBlockState
	 */
	enum class EWTLBuildingBlockState : uint8_t
	{
		Stable    = 0,
		Building  = 1,
		Repairing = 2,
		MAX       = 3
	};

	/**
	 * Enum WTL.EWTLBuildingJointType
	 */
	enum class EWTLBuildingJointType : uint8_t
	{
		None   = 0,
		North  = 1,
		East   = 2,
		South  = 3,
		West   = 4,
		Top    = 5,
		Middle = 6,
		MAX    = 7
	};

	/**
	 * Enum WTL.EWTLBuildingType
	 */
	enum class EWTLBuildingType : uint8_t
	{
		None  = 0,
		House = 1,
		MAX   = 2
	};

	/**
	 * Enum WTL.EWTLBlockType
	 */
	enum class EWTLBlockType : uint8_t
	{
		Base        = 0,
		Wall        = 1,
		WindowBlock = 2,
		DoorBlock   = 3,
		Pillar      = 4,
		Top         = 5,
		FrontSteps  = 6,
		Stairs      = 7,
		Staircase   = 8,
		StorageBox  = 9,
		Workbench   = 10,
		Empty       = 11,
		MAX         = 12
	};

	/**
	 * Enum WTL.EWTLBodyPart
	 */
	enum class EWTLBodyPart : uint8_t
	{
		None  = 0,
		Head  = 1,
		Torso = 2,
		Legs  = 3,
		Feet  = 4,
		MAX   = 5
	};

	/**
	 * Enum WTL.EWTLChatMessageType
	 */
	enum class EWTLChatMessageType : uint8_t
	{
		Common  = 0,
		Private = 1,
		Group   = 2,
		Clan    = 3,
		Faction = 4,
		Global  = 5,
		System  = 6,
		MAX     = 7
	};

	/**
	 * Enum WTL.EWTLWeatherType
	 */
	enum class EWTLWeatherType : uint8_t
	{
		Clear     = 0,
		Cloudy    = 1,
		Rain      = 2,
		HeavyRain = 3,
		MAX       = 4
	};

	/**
	 * Enum WTL.EWTLCloudsType
	 */
	enum class EWTLCloudsType : uint8_t
	{
		Custom    = 0,
		None      = 1,
		Few       = 2,
		Scattered = 3,
		Broken    = 4,
		Overcast  = 5,
		MAX       = 6
	};

	/**
	 * Enum WTL.EWTLSex
	 */
	enum class EWTLSex : uint8_t
	{
		Female = 0,
		Male   = 1,
		MAX    = 2
	};

	/**
	 * Enum WTL.EWTLConnectionCloseType
	 */
	enum class EWTLConnectionCloseType : uint8_t
	{
		InvalidPackets          = 0,
		InvalidLogin            = 1,
		ServerConsoleCommand    = 2,
		HighPingValue           = 3,
		CharacterBan            = 4,
		ConnecionClosedByServer = 5,
		MAX                     = 6
	};

	/**
	 * Enum WTL.EWTLAITargetState
	 */
	enum class EWTLAITargetState : uint8_t
	{
		None    = 0,
		Warning = 1,
		Chasing = 2,
		MAX     = 3
	};

	/**
	 * Enum WTL.EWTLAITargetType
	 */
	enum class EWTLAITargetType : uint8_t
	{
		None     = 0,
		Waypoint = 1,
		Player   = 2,
		Monster  = 3,
		MAX      = 4
	};

	/**
	 * Enum WTL.EWTLNPCAIClientEventType
	 */
	enum class EWTLNPCAIClientEventType : uint8_t
	{
		None                    = 0,
		TargetEnterSightRange   = 1,
		TargetLeaveSightRange   = 2,
		TargetEnterWarningRange = 3,
		TargetLeaveWarningRange = 4,
		TargetEnterChaseRange   = 5,
		TargetLeaveChaseRange   = 6,
		MAX                     = 7
	};

	/**
	 * Enum WTL.EWTLAIState
	 */
	enum class EWTLAIState : uint8_t
	{
		Sleeping          = 0,
		Idle              = 1,
		WalkingToWaypoint = 2,
		Warning           = 3,
		Chasing           = 4,
		Escaping          = 5,
		Dead              = 6,
		MAX               = 7
	};

	/**
	 * Enum WTL.EWTLLocationType
	 */
	enum class EWTLLocationType : uint8_t
	{
		Normal      = 0,
		Underground = 1,
		ClanHall    = 2,
		MAX         = 3
	};

	/**
	 * Enum WTL.EWTLPlaceType
	 */
	enum class EWTLPlaceType : uint8_t
	{
		Normal      = 0,
		Underground = 1,
		MAX         = 2
	};

	/**
	 * Enum WTL.EWTLQuestCheckResult
	 */
	enum class EWTLQuestCheckResult : uint8_t
	{
		Result_False = 0,
		Result_True  = 1,
		Result_MAX   = 2
	};

	/**
	 * Enum WTL.EWTLObjFAActionResult
	 */
	enum class EWTLObjFAActionResult : uint8_t
	{
		Success = 0,
		Failed  = 1,
		MAX     = 2
	};

	/**
	 * Enum WTL.EWTLObjFACheckResult
	 */
	enum class EWTLObjFACheckResult : uint8_t
	{
		Result_False = 0,
		Result_True  = 1,
		Result_MAX   = 2
	};

	/**
	 * Enum WTL.EWTLRainAudioRemoveMethod
	 */
	enum class EWTLRainAudioRemoveMethod : uint8_t
	{
		None             = 0,
		AlwaysCovered    = 1,
		RemoveCompletely = 2,
		MAX              = 3
	};

	/**
	 * Enum WTL.EClassRepNodeMapping
	 */
	enum class EClassRepNodeMapping : uint8_t
	{
		NotRouted              = 0,
		RelevantAllConnections = 1,
		Spatialize_Static      = 2,
		Spatialize_Dynamic     = 3,
		Spatialize_Dormancy    = 4,
		MAX                    = 5
	};

	/**
	 * Enum WTL.EWTLSafeZoneType
	 */
	enum class EWTLSafeZoneType : uint8_t
	{
		SafeZone   = 0,
		CheckPoint = 1,
		MAX        = 2
	};

	/**
	 * Enum WTL.EWTLScriptedEventMethodType
	 */
	enum class EWTLScriptedEventMethodType : uint8_t
	{
		SpawnObject   = 0,
		SpawnMonster  = 1,
		SpawnEnemy    = 2,
		AnnounceEvent = 3,
		MAX           = 4
	};

	/**
	 * Enum WTL.EWTLSecurityViolationType
	 */
	enum class EWTLSecurityViolationType : uint8_t
	{
		None           = 0,
		DriverDetected = 1,
		MAX            = 2
	};

	/**
	 * Enum WTL.EWTLSlotMachineState
	 */
	enum class EWTLSlotMachineState : uint8_t
	{
		None      = 0,
		StartGame = 1,
		EndGame   = 2,
		MAX       = 3
	};

	/**
	 * Enum WTL.EWTLClanRelation
	 */
	enum class EWTLClanRelation : uint8_t
	{
		Neutral = 0,
		Friend  = 1,
		Enemy   = 2,
		MAX     = 3
	};

	/**
	 * Enum WTL.EWTLTiltState
	 */
	enum class EWTLTiltState : uint8_t
	{
		None      = 0,
		TiltRight = 1,
		TiltLeft  = 2,
		MAX       = 3
	};

	/**
	 * Enum WTL.EWTLTriggerCheckResult
	 */
	enum class EWTLTriggerCheckResult : uint8_t
	{
		Result_False = 0,
		Result_True  = 1,
		Result_MAX   = 2
	};

	/**
	 * Enum WTL.EWTLTriggerObjectState
	 */
	enum class EWTLTriggerObjectState : uint8_t
	{
		Off = 0,
		On  = 1,
		MAX = 2
	};

	/**
	 * Enum WTL.EWTLTriggerActionResult
	 */
	enum class EWTLTriggerActionResult : uint8_t
	{
		Failed  = 0,
		Success = 1,
		MAX     = 2
	};

	/**
	 * Enum WTL.EWTLRadialMenuType
	 */
	enum class EWTLRadialMenuType : uint8_t
	{
		None     = 0,
		Use      = 1,
		Emotions = 2,
		MAX      = 3
	};

	/**
	 * Enum WTL.EWTLBPCheckResult
	 */
	enum class EWTLBPCheckResult : uint8_t
	{
		Result_False = 0,
		Result_True  = 1,
		Result_MAX   = 2
	};

	/**
	 * Enum WTL.EWTLBPActionResult
	 */
	enum class EWTLBPActionResult : uint8_t
	{
		Failed  = 0,
		Success = 1,
		MAX     = 2
	};

	/**
	 * Enum WTL.EWTLClothesTorsoMeshVariant
	 */
	enum class EWTLClothesTorsoMeshVariant : uint8_t
	{
		Full      = 0,
		FullArms  = 1,
		HalfArms  = 2,
		HandsOnly = 3,
		MAX       = 4
	};

	/**
	 * Enum WTL.EWTLGlobalLevelObjectType
	 */
	enum class EWTLGlobalLevelObjectType : uint8_t
	{
		None = 0,
		Camp = 1,
		MAX  = 2
	};

	/**
	 * Enum WTL.EWTLFortificationObjectType
	 */
	enum class EWTLFortificationObjectType : uint8_t
	{
		None       = 0,
		MachinuGun = 1,
		MAX        = 2
	};

	/**
	 * Enum WTL.EWTLNPCIdentificationAbility
	 */
	enum class EWTLNPCIdentificationAbility : uint8_t
	{
		CanTrade         = 0,
		HasStorage       = 1,
		CanTakeQuest     = 2,
		CanCompleteQuest = 3,
		IsGunsmith       = 4,
		HasComission     = 5,
		MAX              = 6
	};

	/**
	 * Enum WTL.EWTLDaytimeCubemapBlendType
	 */
	enum class EWTLDaytimeCubemapBlendType : uint8_t
	{
		Increment = 0,
		Decrement = 1,
		MAX       = 2
	};

	/**
	 * Enum WTL.EWTLEnergyFieldType
	 */
	enum class EWTLEnergyFieldType : uint8_t
	{
		None     = 0,
		SafeZone = 1,
		MAX      = 2
	};

	/**
	 * Enum WTL.EWTLSuffocationVolumeType
	 */
	enum class EWTLSuffocationVolumeType : uint8_t
	{
		None  = 0,
		Water = 1,
		MAX   = 2
	};

	/**
	 * Enum WTL.EWTLSuspensionType
	 */
	enum class EWTLSuspensionType : uint8_t
	{
		Regular = 0,
		Enduro  = 1,
		MAX     = 2
	};

	/**
	 * Enum WTL.EWTLVehicleEngineSoundMode
	 */
	enum class EWTLVehicleEngineSoundMode : uint8_t
	{
		Simple   = 0,
		Advanced = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WTL.WTLWaterContainer
	 * Size -> 0x0008
	 */
	struct FWTLWaterContainer
	{
	public:
		EWTLItemType                                               EmptyItemType;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUXT[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   EmptyItemTypeID;                                         // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               FullItemType;                                            // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKT3[0x1];                                   // 0x0005(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   FullItemTypeID;                                          // 0x0006(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLInAppPurchaseResult
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLInAppPurchaseResult : public FWTLPacket
	{
	public:
		bool                                                       Success;                                                 // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B9K9[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Info;                                                    // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentBalance;                                          // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMVA[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLAirDropItemData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FWTLAirDropItemData : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              BlueprintClass[0x28];                                    // 0x0020(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<struct FWTLItemSpawnInfo>                           SpawnItems;                                              // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLServerEventInfoCommentRowData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FWTLServerEventInfoCommentRowData : public FTableRowBase
	{
	public:
		class FText                                                Text;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLNoteData
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FWTLNoteData : public FTableRowBase
	{
	public:
		unsigned char                                              Image[0x28];                                             // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                Text;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsCenterText;                                           // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OL26[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLGiftCardItemData
	 * Size -> 0x00E0 (FullSize[0x00E8] - InheritedSize[0x0008])
	 */
	struct FWTLGiftCardItemData : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SL06[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceMultiplier;                                        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CountMultiplier;                                         // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           StartTime;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           EndTime;                                                 // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinBlackListTimeout;                                     // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBlackListTimeout;                                     // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int32_t, float>                                       LocationDropChances;                                     // 0x0048(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<int32_t, float>                                       MonsterDropChances;                                      // 0x0098(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSlotMachineSymbolTexture
	 * Size -> 0x0018
	 */
	struct FWTLSlotMachineSymbolTexture
	{
	public:
		EWTLSlotMachineSymbol                                      Symbol;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVTM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLCharacterClassTexture>                   Textures;                                                // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSlotMachineSymbolsTextures
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FWTLSlotMachineSymbolsTextures : public FTableRowBase
	{
	public:
		TArray<struct FWTLSlotMachineSymbolTexture>                SymbolsTextures;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSlotMachineItemReward
	 * Size -> 0x0050
	 */
	struct FWTLSlotMachineItemReward
	{
	public:
		EWTLCharacterClass                                         CharacterClass;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_30HP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Chance;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YBT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCount;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCondition;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCondition;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinInteractiveObjectID;                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInteractiveObjectID;                                  // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationScalar;                                     // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationColor;                                      // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W71I[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomizationName;                                       // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModificationData;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSlotMachineSymbolWinCombination
	 * Size -> 0x0058
	 */
	struct FWTLSlotMachineSymbolWinCombination
	{
	public:
		EWTLSlotMachineSymbolCheckType                             CheckType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1O4O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EWTLSlotMachineSymbol>                              Symbols;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              SymbolsCount;                                            // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBS8[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BetMultiplier;                                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLSlotMachineItemReward>                   ItemRewards;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              WinSoundEvent[0x28];                                     // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct WTL.WTLSlotMachineWinCombinations
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FWTLSlotMachineWinCombinations : public FTableRowBase
	{
	public:
		TArray<struct FWTLSlotMachineSymbolWinCombination>         Combination;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSlotMachineSymbolRandRange
	 * Size -> 0x0003
	 */
	struct FWTLSlotMachineSymbolRandRange
	{
	public:
		EWTLSlotMachineSymbol                                      Symbol;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxValue;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Cost;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSlotMachineCylinder
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FWTLSlotMachineCylinder : public FTableRowBase
	{
	public:
		TArray<struct FWTLSlotMachineSymbolRandRange>              SymbolRandRange;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFishingBaitData
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FWTLFishingBaitData : public FTableRowBase
	{
	public:
		struct FWTLItem                                            Item;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFishingTakeItem
	 * Size -> 0x0088
	 */
	struct FWTLFishingTakeItem
	{
	public:
		float                                                      DropChance;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DifficultyMultiplier;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FishActor[0x28];                                         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    FishingItemConditionDeltaSuccess;                        // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FishingItemConditionDeltaNotSuccess;                     // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExperienceReward;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MoneyReward;                                             // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1XA[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCount;                                                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCondition;                                            // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCondition;                                            // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinInteractiveObjectID;                                  // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInteractiveObjectID;                                  // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationScalar;                                     // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationColor;                                      // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G54R[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomizationName;                                       // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModificationData;                                        // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFishingItemData
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FWTLFishingItemData : public FTableRowBase
	{
	public:
		int32_t                                                    MinCharacterLevel;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinBiteTime;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBiteTime;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IXL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultFishActor[0x28];                                  // 0x0018(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<struct FWTLFishingTakeItem>                         ItemsLootTable;                                          // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanLevelItemData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FWTLClanLevelItemData : public FTableRowBase
	{
	public:
		int32_t                                                    PVPScore;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PVEScore;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CraftScore;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MemberCount;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLArenaItemReward
	 * Size -> 0x0050
	 */
	struct FWTLArenaItemReward
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S82E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCount;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCondition;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCondition;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinInteractiveObjectID;                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInteractiveObjectID;                                  // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationScalar;                                     // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationColor;                                      // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JN2[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomizationName;                                       // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModificationData;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXSK[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLLootBoxItemData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FWTLLootBoxItemData : public FTableRowBase
	{
	public:
		EWTLLootBoxType                                            BoxType;                                                 // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWR2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MoneyReward;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLArenaItemReward>                         ItemRewards;                                             // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSpawnItemLocationInfo
	 * Size -> 0x0008
	 */
	struct FWTLSpawnItemLocationInfo
	{
	public:
		int32_t                                                    LocationID;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceMultiplier;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLLocationSpawnItemData
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FWTLLocationSpawnItemData : public FTableRowBase
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L7UN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quality;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCount;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCondition;                                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCondition;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinInteractiveObjectID;                                  // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInteractiveObjectID;                                  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationScalar;                                     // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationColor;                                      // 0x002D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0995[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomizationName;                                       // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModificationData;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C36Q[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LastSpawnTime;                                           // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenSpawn;                                        // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinBlackListTimeout;                                     // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBlackListTimeout;                                     // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SpawnOnlyInTimePeriod;                                   // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QOM3[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           SpawnPeriodStartTime;                                    // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           SpawnPeriodEndTime;                                      // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLSpawnItemLocationInfo>                   LocationList;                                            // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLRadialMenuEmotionInfo
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	struct FWTLRadialMenuEmotionInfo : public FWTLRadialMenuActionInfo
	{
	public:
		bool                                                       NeedPremium;                                             // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8UV[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLEmotion
	 * Size -> 0x0070
	 */
	struct FWTLEmotion
	{
	public:
		struct FWTLRadialMenuEmotionInfo                           RadialMenuEmotionInfo;                                   // 0x0000(0x0058) Edit, NativeAccessSpecifierPublic
		bool                                                       BlockCameraRotation;                                     // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HideUsableItem;                                          // 0x0059(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBlocking;                                              // 0x005A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBeInterrupted;                                        // 0x005B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKPM[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MaleMontage;                                             // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        FemaleMontage;                                           // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLEmotionTypeItemData
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FWTLEmotionTypeItemData : public FTableRowBase
	{
	public:
		struct FWTLRadialMenuEmotionInfo                           RadialMenuEmotionInfo;                                   // 0x0008(0x0058) Edit, NativeAccessSpecifierPublic
		TArray<struct FWTLEmotion>                                 Emotions;                                                // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLTutorialMessageItemData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FWTLTutorialMessageItemData : public FTableRowBase
	{
	public:
		EWTLTutorialMessageType                                    Type;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1V56[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Image[0x28];                                             // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                Text;                                                    // 0x0038(0x0018) Edit, NativeAccessSpecifierPublic
		unsigned char                                              WarningShowCountLimit;                                   // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T8TI[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterRankItemData
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FWTLCharacterRankItemData : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		uint64_t                                                   Score;                                                   // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ScoreToNextRank;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SmallIcon[0x28];                                         // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LargeIcon[0x28];                                         // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct WTL.WTLEnemyNPCWeaponItemVariation
	 * Size -> 0x0018
	 */
	struct FWTLEnemyNPCWeaponItemVariation
	{
	public:
		uint16_t                                                   WeaponItemTypeID;                                        // 0x0000(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1BU[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<uint16_t>                                           AmmoitemTypeIDVariations;                                // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLEnemyNPCItemData
	 * Size -> 0x0108 (FullSize[0x0110] - InheritedSize[0x0008])
	 */
	struct FWTLEnemyNPCItemData : public FTableRowBase
	{
	public:
		int32_t                                                    GroupId;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomizationVariations;                             // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0XN[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              HeadVariations[0x10];                                    // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              TorsoVariations[0x10];                                   // 0x0020(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              LegsVariations[0x10];                                    // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              FeetVariations[0x10];                                    // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bUseEquipmentVariations;                                 // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5H7[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            HeadClothesItemTypeIDVariations;                         // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            TorsoClothesItemTypeIDVariations;                        // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            LegsClothesItemTypeIDVariations;                         // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FeetClothesItemTypeIDVariations;                         // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLEnemyNPCWeaponItemVariation>             WeaponItemTypeIDVariationsWithAmmo;                      // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            FrontPlateTypeIDVariations;                              // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            BackPlateTypeIDVariations;                               // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MinLevel;                                                // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevel;                                                // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Strength;                                                // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Dexterity;                                               // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Stamina;                                                 // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Accuracy;                                                // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Intelligence;                                            // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Fortune;                                                 // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExperienceToHPRate;                                      // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QOZU[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           MaxExperienceGainTimeout;                                // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanDropWeapon;                                           // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYCF[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLItemDropInfo>                            ItemsToDrop;                                             // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLEnemyGroupItemData
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FWTLEnemyGroupItemData : public FTableRowBase
	{
	public:
		class FText                                                GroupName;                                               // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EWTLAITeam                                                 Team;                                                    // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWVW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        FirstNameVariations;                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FText>                                        LastNameVariations;                                      // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCustomWeaponItemData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FWTLCustomWeaponItemData : public FTableRowBase
	{
	public:
		int32_t                                                    WeaponID;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MagazineCapacity;                                        // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZMF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DamageMin;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageMax;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPiercingMin;                                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPiercingMax;                                        // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalHitChanceMultiplier;                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Accuracy;                                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Condition;                                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConditionDelta;                                          // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ModCount;                                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CustomizationName;                                       // 0x0038(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationScalar;                                     // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationColor;                                      // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PZZ0[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCustomizationColorPresetItemData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FWTLCustomizationColorPresetItemData : public FTableRowBase
	{
	public:
		EWTLCustomizationColorPresetType                           Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q15W[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x000C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PreviewColor;                                            // 0x001C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QRDD[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLClanStorageTabImageItemData
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FWTLClanStorageTabImageItemData : public FTableRowBase
	{
	public:
		struct FSlateBrush                                         ImageBrush;                                              // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCraftIngredient
	 * Size -> 0x0014
	 */
	struct FWTLCraftIngredient
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26I8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ConsumeOnCraft;                                          // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S4ST[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ConditionDeltaOnCraft;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLRobotProductionResult
	 * Size -> 0x0010
	 */
	struct FWTLRobotProductionResult
	{
	public:
		int32_t                                                    MonsterID;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinLevel;                                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxLevel;                                                // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Rank;                                                    // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WJG[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinLifeSpan;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLifeSpan;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLRobotCraftItemData
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FWTLRobotCraftItemData : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              CraftIcon[0x28];                                         // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FWTLCraftIngredient>                         Ingredients;                                             // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FWTLRobotProductionResult                           Result;                                                  // 0x0070(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ProductionTime;                                          // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIPO[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCraftPossibleModification
	 * Size -> 0x0030
	 */
	struct FWTLCraftPossibleModification
	{
	public:
		int32_t                                                    MinDamageMinChange;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDamageMinChange;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinDamageMaxChange;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDamageMaxChange;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinConditionDeltaChange;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxConditionDeltaChange;                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinAccuracyChange;                                       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAccuracyChange;                                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinArmorMinChange;                                       // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxArmorMinChange;                                       // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinArmorMaxChange;                                       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxArmorMaxChange;                                       // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCraftResult
	 * Size -> 0x0050
	 */
	struct FWTLCraftResult
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGQR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationColor;                                      // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationScalar;                                     // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6OL[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomizationName;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLCraftPossibleModification                       PossibleModification;                                    // 0x0020(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCraftItemData
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FWTLCraftItemData : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              CraftIcon[0x28];                                         // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		EWTLCraftType                                              Type;                                                    // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S71J[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PDAModuleID;                                             // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QuestID;                                                 // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CompleteQuestID;                                         // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AchievementID;                                           // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NeedCraftExperience;                                     // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NeedSurvivalExperience;                                  // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JT5K[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLCraftIngredient>                         Ingredients;                                             // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCraftResult>                             Results;                                                 // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      CraftTime;                                               // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CraftExperience;                                         // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SurvivalExperience;                                      // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Experience;                                              // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLInformationDialogItemData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FWTLInformationDialogItemData : public FTableRowBase
	{
	public:
		class FText                                                Text;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCustomizationScalarOptionItemData
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FWTLCustomizationScalarOptionItemData : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Price;                                                   // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X85L[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Texture[0x28];                                           // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      Roughness;                                               // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E10N[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                DistinctColors;                                          // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ColorAmplifierValue;                                     // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LAC[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCustomizationColorItemData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FWTLCustomizationColorItemData : public FTableRowBase
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLChatSmileItemData
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FWTLChatSmileItemData : public FTableRowBase
	{
	public:
		class FString                                              ImageStyleName;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      TextAliases;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              SmileImage[0x28];                                        // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct WTL.WTLSkyLevelPresetItemData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FWTLSkyLevelPresetItemData : public FTableRowBase
	{
	public:
		class FText                                                CloudyDay;                                               // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLItemTypeBrushItemData
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FWTLItemTypeBrushItemData : public FTableRowBase
	{
	public:
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLPortalItemData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FWTLPortalItemData : public FTableRowBase
	{
	public:
		TMap<int32_t, class FText>                                 LocationDisplayText;                                     // 0x0008(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSafeZoneItemData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FWTLSafeZoneItemData : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLMapMarkerSubTypeBrushItemData
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FWTLMapMarkerSubTypeBrushItemData : public FTableRowBase
	{
	public:
		struct FSlateBrush                                         MarkerSubTypeBrush;                                      // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLMapMarkerBrushItemData
	 * Size -> 0x0110 (FullSize[0x0118] - InheritedSize[0x0008])
	 */
	struct FWTLMapMarkerBrushItemData : public FTableRowBase
	{
	public:
		struct FSlateBrush                                         MarkerBrush;                                             // 0x0008(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         MarkerBrushForLegend;                                    // 0x0090(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSkillDependency
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLSkillDependency : public FWTLPacket
	{
	public:
		EWTLSkillDependencyType                                    Type;                                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CHA[0x1];                                   // 0x0029(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   SkillID;                                                 // 0x002A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCM6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLClanParameterInfluence
	 * Size -> 0x0008
	 */
	struct FWTLClanParameterInfluence
	{
	public:
		EWTLClanParameter                                          Parameter;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLParameterInfluenceType                                 InfluenceType;                                           // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNU9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Influence;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanSkillItemData
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FWTLClanSkillItemData : public FTableRowBase
	{
	public:
		unsigned char                                              MinClanLevel;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YG7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EWTLSkillType                                              Type;                                                    // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SkillLevel;                                              // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6A2L[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                EffectDescription;                                       // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    TechnologyScore;                                         // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SAUB[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLSkillDependency>                         Dependencies;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLClanParameterInfluence>                  Influences;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct WTL.WTLCharacterParameterInfluence
	 * Size -> 0x0008
	 */
	struct FWTLCharacterParameterInfluence
	{
	public:
		EWTLCharacterParameter                                     Parameter;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLParameterInfluenceType                                 InfluenceType;                                           // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QGA4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Influence;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterSkillItemData
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FWTLCharacterSkillItemData : public FTableRowBase
	{
	public:
		unsigned char                                              MinCharacterLevel;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6RP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EWTLSkillType                                              Type;                                                    // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCharacterClass                                         Class;                                                   // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClassDefault;                                            // 0x0042(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_STJ9[0x1];                                   // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SkillPoints;                                             // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLSkillDependency>                         Dependencies;                                            // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCharacterParameterInfluence>             Influences;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    ForgetPrice;                                             // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C5UW[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLKitItem
	 * Size -> 0x000C
	 */
	struct FWTLKitItem
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7S1[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   ItemTypeID;                                              // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Condition;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLKitItemData
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FWTLKitItemData : public FTableRowBase
	{
	public:
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLKitItem>                                 Items;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterStateIndicatorTableRow
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FWTLCharacterStateIndicatorTableRow : public FTableRowBase
	{
	public:
		EWTLCharacterStateIndicatorNatureType                      NatureType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LA7G[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              IconTexturePtr[0x28];                                    // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct WTL.WTLCharacterEffectsItemData
	 * Size -> 0x00B0 (FullSize[0x00B8] - InheritedSize[0x0008])
	 */
	struct FWTLCharacterEffectsItemData : public FTableRowBase
	{
	public:
		EWTLCharacterEffectType                                    EffectType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCharacterEffectNatureType                              NatureType;                                              // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YSMW[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EffectCooldownPerSecond;                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVolumesEffectValue;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1RX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        BorderColor;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AddingSound[0x28];                                       // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RemovingSound[0x28];                                     // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct WTL.WTLQuestItemRequirement
	 * Size -> 0x0020
	 */
	struct FWTLQuestItemRequirement
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5I7I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomizationName;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LockedInInventory;                                       // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ComsumeOnComplete;                                       // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCK8[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLQuestRequirement
	 * Size -> 0x0008
	 */
	struct FWTLQuestRequirement
	{
	public:
		int32_t                                                    QuestID;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLQuestState                                             State;                                                   // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBGI[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLMonsterKillRequirement
	 * Size -> 0x000C
	 */
	struct FWTLMonsterKillRequirement
	{
	public:
		int32_t                                                    MonsterID;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinLevel;                                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxLevel;                                                // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_921B[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLEnemyNPCKillRequirement
	 * Size -> 0x0028
	 */
	struct FWTLEnemyNPCKillRequirement
	{
	public:
		int32_t                                                    EnemyNPCID;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1Y4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                EnemyNPCName;                                            // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              MinLevel;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxLevel;                                                // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XI8T[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCustomQuestRequirement
	 * Size -> 0x0050
	 */
	struct FWTLCustomQuestRequirement
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       UseBitMaskForProgress;                                   // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0DP[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CountBits;                                               // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQJ3[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLQuestItemReward
	 * Size -> 0x0040
	 */
	struct FWTLQuestItemReward
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9LV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Condition;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationScalar;                                     // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationColor;                                      // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJDA[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomizationName;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModificationData;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LockedInInventory;                                       // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPQO[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLIdentityItemType
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLIdentityItemType : public FWTLPacket
	{
	public:
		EWTLItemType                                               Type;                                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7D4[0x1];                                   // 0x0029(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   TypeID;                                                  // 0x002A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JVL3[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLMapQuestPoint
	 * Size -> 0x0010
	 */
	struct FWTLMapQuestPoint
	{
	public:
		int32_t                                                    LocationID;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PointLocation;                                           // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLQuestStateAction
	 * Size -> 0x0008
	 */
	struct FWTLQuestStateAction
	{
	public:
		int32_t                                                    QuestID;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLQuestState                                             State;                                                   // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SetActive;                                               // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IV9[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLQuestItemData
	 * Size -> 0x01E8 (FullSize[0x01F0] - InheritedSize[0x0008])
	 */
	struct FWTLQuestItemData : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EWTLQuestType                                              Type;                                                    // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHidden;                                                // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBeCanceled;                                           // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePerformedInGroup;                                   // 0x0023(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanGiveGiftCards;                                        // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinCharacterLevel;                                       // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxCharacterLevel;                                       // 0x0026(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RecommendedCharacterLevel;                               // 0x0027(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinCharacterReputation;                                  // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxCharacterReputation;                                  // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCharacterClass                                         CharacterClass;                                          // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CheckCharacterFaction;                                   // 0x002B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                CharacterFaction;                                        // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinClanLevel;                                            // 0x002D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GSTF[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           CompleteTimeLimit;                                       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimespan                                           TakeTimeLimit;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoCompleteQuest;                                       // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T3NH[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              QuestIcon[0x28];                                         // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                Description;                                             // 0x0070(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsShowItemStartQuestInActiveQuestInfo;                  // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EE2[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CustomTextRequirement;                                   // 0x0090(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsShowCustomTextRequirementOnlyInActiveQuestInfo;       // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNXR[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MoneyRequirement;                                        // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisplayItemRequirementsInHUD;                            // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisplayItemRequirementsInPDA;                            // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BEX5[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLQuestItemRequirement>                    ItemRequirements;                                        // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLQuestRequirement>                        QuestRequirements;                                       // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLMonsterKillRequirement>                  MonsterKillRequirements;                                 // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLEnemyNPCKillRequirement>                 EnemyNPCKillRequirements;                                // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCustomQuestRequirement>                  CustomRequirements;                                      // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsShowCustomRequirements;                               // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCX3[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ExperienceReward;                                        // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsShowMoneyRewardAfterQuestComplete;                    // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LVW[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MoneyReward;                                             // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsShowItemRewardsAfterQuestComplete;                    // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D7UE[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLQuestItemReward>                         ItemRewards;                                             // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       UseRandomItemReward;                                     // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSendItemRewardsByMail;                                  // 0x0131(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7L6[0x6];                                   // 0x0132(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           SendItemRewardsByMailInterval;                           // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLQuestItemReward>                         ItemRewardsAtStart;                                      // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ReputationReward;                                        // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CompleteAchievementReward;                               // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FailAchievementReward;                                   // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClanPVPScoreReward;                                      // 0x015C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClanPVEScoreReward;                                      // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClanCraftScoreReward;                                    // 0x0164(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClanTechnologyScoreReward;                               // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CreditsReward;                                           // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CustomTextReward;                                        // 0x0170(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsHideCustomTextRewardAfterQuestComplete;               // 0x0188(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GT1R[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLIdentityItemType>                        WithdrawItemsAfterQuestCompleted;                        // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLMapQuestPoint>                           MapQuestPoints;                                          // 0x01A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLMapQuestPoint>                           MapQuestCompletePoints;                                  // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            MonsterList;                                             // 0x01C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLQuestStateAction>                        QuestStateActionsOnComplete;                             // 0x01D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DeleteQuestOnCancel;                                     // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLDialogReplicaItemData
	 * Size -> 0x00C0 (FullSize[0x00C8] - InheritedSize[0x0008])
	 */
	struct FWTLDialogReplicaItemData : public FTableRowBase
	{
	public:
		class FText                                                CommonText;                                              // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                MaleText;                                                // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                FemaleText;                                              // 0x0038(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              MaleSound[0x28];                                         // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FemaleSound[0x28];                                       // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ReplicaSound[0x28];                                      // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct WTL.WTLAchievementItemData
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FWTLAchievementItemData : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              InProgressIcon[0x28];                                    // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EarnedIcon[0x28];                                        // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       Hidden;                                                  // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01WJ[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StatisticsParameterID;                                   // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AchievedPercentage;                                      // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLStatisticsParameterItemData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FWTLStatisticsParameterItemData : public FTableRowBase
	{
	public:
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   MaxValue;                                                // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLMonsterAttackEffect
	 * Size -> 0x0010
	 */
	struct FWTLMonsterAttackEffect
	{
	public:
		EWTLCharacterEffectType                                    EffectType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BES[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinValue;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLAICharacterItemData
	 * Size -> 0x0198 (FullSize[0x01A0] - InheritedSize[0x0008])
	 */
	struct FWTLAICharacterItemData : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              MinLevel;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxLevel;                                                // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5W7[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DangerLevelMultiplier;                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRegularAnimal;                                         // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FM0E[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MassInKg;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BlueprintClass[0x28];                                    // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      ExperienceToHPRate;                                      // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExperienceForKill;                                       // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimespan                                           MaxExperienceGainTimeout;                                // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthPerLevel;                                          // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegenerateHealthDelay;                                   // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegenerateHealthRate;                                    // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRegenerationDamageTreshold;                           // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5M0W[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLMonsterAttackEffect>                     CausingEffects;                                          // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      CloseAttackMinDamage;                                    // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMaxDamage;                                    // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMinDamagePerLevel;                            // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMaxDamagePerLevel;                            // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackRadiusPerLevel;                               // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMinArmorPiercing;                             // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMaxArmorPiercing;                             // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMinArmorPiercingPerLevel;                     // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMaxArmorPiercingPerLevel;                     // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackEffectPercentPerLevel;                        // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackCriticalDamageMultiplier;                     // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMinDamage;                                      // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMaxDamage;                                      // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMinDamagePerLevel;                              // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackRadiusPerLevel;                                 // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMaxDamagePerLevel;                              // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMinArmorPiercingPerLevel;                       // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMaxArmorPiercingPerLevel;                       // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackCriticalDamageMultiplier;                       // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadArmor;                                               // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BodyArmor;                                               // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmsArmor;                                               // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegsArmor;                                               // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FeetArmor;                                               // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadArmorPerLevel;                                       // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BodyArmorPerLevel;                                       // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmsArmorPerLevel;                                       // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegsArmorPerLevel;                                       // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FeetArmorPerLevel;                                       // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KR6[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         ObjectiveIconBrush;                                      // 0x0108(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FWTLItemDropInfo>                            ItemsToDrop;                                             // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLControlledMonsterSpawnItemInfo
	 * Size -> 0x000C
	 */
	struct FWTLControlledMonsterSpawnItemInfo
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOHM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLMonsterItemData
	 * Size -> 0x01F0 (FullSize[0x01F8] - InheritedSize[0x0008])
	 */
	struct FWTLMonsterItemData : public FTableRowBase
	{
	public:
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              MinLevel;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxLevel;                                                // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQ91[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DangerLevelMultiplier;                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRegularAnimal;                                         // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LN1K[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MassInKg;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BlueprintClass[0x28];                                    // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    MasterMonsterID;                                         // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0E9[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ControlledBlueprintClass[0x28];                          // 0x0060(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    ControlledMonsterStrength;                               // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PDVW[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLControlledMonsterSpawnItemInfo>          ControlledItemsSpawn;                                    // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ExperienceToHPRate;                                      // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExperienceForKill;                                       // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimespan                                           MaxExperienceGainTimeout;                                // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthPerLevel;                                          // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegenerateHealthDelay;                                   // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegenerateHealthRate;                                    // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRegenerationDamageTreshold;                           // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y3Q8[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLMonsterAttackEffect>                     CausingEffects;                                          // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      CloseAttackMinDamage;                                    // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMaxDamage;                                    // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMinDamagePerLevel;                            // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMaxDamagePerLevel;                            // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMinArmorPiercing;                             // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMaxArmorPiercing;                             // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMinArmorPiercingPerLevel;                     // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackMaxArmorPiercingPerLevel;                     // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackRadiusPerLevel;                               // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackEffectPercentPerLevel;                        // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseAttackCriticalDamageMultiplier;                     // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMinDamage;                                      // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMaxDamage;                                      // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMinDamagePerLevel;                              // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMaxDamagePerLevel;                              // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMinArmorPiercingPerLevel;                       // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackMaxArmorPiercingPerLevel;                       // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackRadiusPerLevel;                                 // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarAttackCriticalDamageMultiplier;                       // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadArmor;                                               // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BodyArmor;                                               // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmsArmor;                                               // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegsArmor;                                               // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FeetArmor;                                               // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadArmorPerLevel;                                       // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BodyArmorPerLevel;                                       // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmsArmorPerLevel;                                       // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegsArmorPerLevel;                                       // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FeetArmorPerLevel;                                       // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KFZT[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         ObjectiveIconBrush;                                      // 0x0150(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    AccountAchievementIDForKill;                             // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AccountStatisticsParameterID;                            // 0x01DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AccountStatisticsParameterDelta;                         // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQJU[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLItemDropInfo>                            ItemsToDrop;                                             // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterLevelItemData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FWTLCharacterLevelItemData : public FTableRowBase
	{
	public:
		int32_t                                                    Experience;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExperienceToNextLevel;                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkillPoints;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParametersPoints;                                        // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLLoadingAdviceItemData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FWTLLoadingAdviceItemData : public FTableRowBase
	{
	public:
		class FText                                                AdviceText;                                              // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLLoadingScreenImagesItemData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FWTLLoadingScreenImagesItemData : public FTableRowBase
	{
	public:
		struct FSoftObjectPath                                     Image;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   AdviceID;                                                // 0x0020(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L685[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          ImageTexture;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterCustomizationColorParameter
	 * Size -> 0x0010
	 */
	struct FWTLCharacterCustomizationColorParameter
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterCustomizationScalarParameter
	 * Size -> 0x0018
	 */
	struct FWTLCharacterCustomizationScalarParameter
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ScalarValueCount;                                        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3W5Y[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterCustomizationItemData
	 * Size -> 0x02F8 (FullSize[0x0300] - InheritedSize[0x0008])
	 */
	struct FWTLCharacterCustomizationItemData : public FTableRowBase
	{
	public:
		EWTLCharacterCustomizationPart                             Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCharacterClass                                         ClassType;                                               // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDefaultClassObject;                                    // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLSex                                                    Sex;                                                     // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHN1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              ImageTexture[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    StoreItemID;                                             // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SteamID;                                                 // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RequiredSteamDLC;                                        // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       NeedLongPants;                                           // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHairlessHead;                                         // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y1SU[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SkeletalMesh[0x28];                                      // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SkeletalMeshVariant1[0x28];                              // 0x0098(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                MaterialSlotName0;                                       // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                MaterialName0;                                           // 0x00C8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance0_Color0;                                // 0x00E0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance0_Color1;                                // 0x00F0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance0_Color2;                                // 0x0100(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance0_Color3;                                // 0x0110(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance0_ScalarParameter0;                      // 0x0120(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance0_ScalarParameter1;                      // 0x0138(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance0_ScalarParameter2;                      // 0x0150(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance0_ScalarParameter3;                      // 0x0168(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                MaterialSlotName1;                                       // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                MaterialName1;                                           // 0x0188(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance1_Color0;                                // 0x01A0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance1_Color1;                                // 0x01B0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance1_Color2;                                // 0x01C0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance1_Color3;                                // 0x01D0(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance1_ScalarParameter0;                      // 0x01E0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance1_ScalarParameter1;                      // 0x01F8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance1_ScalarParameter2;                      // 0x0210(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance1_ScalarParameter3;                      // 0x0228(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                MaterialSlotName2;                                       // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                MaterialName2;                                           // 0x0248(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance2_Color0;                                // 0x0260(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance2_Color1;                                // 0x0270(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance2_Color2;                                // 0x0280(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationColorParameter            MaterialInstance2_Color3;                                // 0x0290(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance2_ScalarParameter0;                      // 0x02A0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance2_ScalarParameter1;                      // 0x02B8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance2_ScalarParameter2;                      // 0x02D0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWTLCharacterCustomizationScalarParameter           MaterialInstance2_ScalarParameter3;                      // 0x02E8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLItemClassRequirement
	 * Size -> 0x0008
	 */
	struct FWTLItemClassRequirement
	{
	public:
		EWTLCharacterClass                                         Class;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level;                                                   // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Strength;                                                // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Dexterity;                                               // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Stamina;                                                 // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Accuracy;                                                // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Intelligence;                                            // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Fortune;                                                 // 0x0007(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFishCutItemInfo
	 * Size -> 0x0060
	 */
	struct FWTLFishCutItemInfo
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWYV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCount;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCondition;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCondition;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalChance;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6Y8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLQuestItemDropChance>                     QuestDropChances;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MinInteractiveObjectID;                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInteractiveObjectID;                                  // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationScalar;                                     // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationColor;                                      // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JELZ[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomizationName;                                       // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModificationData;                                        // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLUseItemResult
	 * Size -> 0x000C
	 */
	struct FWTLUseItemResult
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQSI[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   ItemTypeID;                                              // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Condition;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLArtefactItemData
	 * Size -> 0x0230 (FullSize[0x0238] - InheritedSize[0x0008])
	 */
	struct FWTLArtefactItemData : public FTableRowBase
	{
	public:
		EWTLArtefactType                                           Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MUZI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ShopDescription;                                         // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Validity;                                                // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NoteID;                                                  // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSB8[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ItemViewImage[0x28];                                     // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                InformationContent;                                      // 0x0090(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsCenterInformationContent;                             // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKGJ[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DropChance;                                              // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                Faction;                                                 // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5DCJ[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FactionTechnologiesLevel;                                // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLItemClassRequirement>                    RPGClassRequirements;                                    // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      BasePrice;                                               // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWK3[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              InventoryIcon[0x28];                                     // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StoreIcon[0x28];                                         // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LargeStoreIcon[0x28];                                    // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemPickupClass[0x28];                                   // 0x0148(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              CharacterArtefactPreviewMesh[0x28];                      // 0x0170(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       CanBeUnited;                                             // 0x0198(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXP7[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLCharacterEffectInfluence>                Influences;                                              // 0x01A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EWTLFoodActionType                                         FoodActionType;                                          // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9Y8[0x3];                                   // 0x01B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HungerValue;                                             // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ThirstValue;                                             // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HealthValue;                                             // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StaminaValue;                                            // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AlcoholValue;                                            // 0x01C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoisonValue;                                             // 0x01C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChemicalsValue;                                          // 0x01CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadiationValue;                                          // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BleedingValue;                                           // 0x01D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WoundedValue;                                            // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JJW[0x4];                                   // 0x01DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLFishCutItemInfo>                         FishCutItems;                                            // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLUseItemResult>                           ResultItems;                                             // 0x01F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       CanBePlacedOnCommission;                                 // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsItemStartQuest;                                       // 0x0201(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYFZ[0x2];                                   // 0x0202(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QuestIDToStart;                                          // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanTransferToSteam;                                      // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUKF[0x3];                                   // 0x0209(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SteamMarketID;                                           // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UseSoundEvent[0x28];                                     // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct WTL.WTLResourceItemData
	 * Size -> 0x0120 (FullSize[0x0128] - InheritedSize[0x0008])
	 */
	struct FWTLResourceItemData : public FTableRowBase
	{
	public:
		EWTLResourceType                                           Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R45K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ShopDescription;                                         // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      BasePrice;                                               // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropChance;                                              // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Q8L[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              InventoryIcon[0x28];                                     // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StoreIcon[0x28];                                         // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LargeStoreIcon[0x28];                                    // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemPickupClass[0x28];                                   // 0x00E0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       CanBeUnited;                                             // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TTO[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLCharacterEffectInfluence>                Influences;                                              // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       CanBePlacedOnCommission;                                 // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanTransferToSteam;                                      // 0x0121(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOES[0x2];                                   // 0x0122(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SteamMarketID;                                           // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClothesItemData
	 * Size -> 0x0250 (FullSize[0x0258] - InheritedSize[0x0008])
	 */
	struct FWTLClothesItemData : public FTableRowBase
	{
	public:
		EWTLClothesType                                            Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B76H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ShopDescription;                                         // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    MasterClothesID;                                         // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CopyParametersFromMasterClothes;                         // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLArmorClass                                             ArmorClass;                                              // 0x005D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNBJ[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ArmorMin;                                                // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorMax;                                                // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HaveFrontPlate;                                          // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AV29[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            AcceptableFrontPlates;                                   // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       HaveBackPlate;                                           // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SK5S[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            AcceptableBackPlates;                                    // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MonsterArmorMultiplier;                                  // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Condition;                                               // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConditionDelta;                                          // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CoverArms;                                               // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GI0[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArmsArmorMultiplier;                                     // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HidesBackpackStraps;                                     // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HidesBackpack;                                           // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReplaceBodyPart;                                         // 0x00B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NeedLongPants;                                           // 0x00B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLClothesTorsoMeshVariant                                TorsoMeshVariant;                                        // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                Faction;                                                 // 0x00B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5NT[0x2];                                   // 0x00B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FactionTechnologiesLevel;                                // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22WG[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLItemClassRequirement>                    RPGClassRequirements;                                    // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      DropChance;                                              // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinRepairExperience;                                     // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BasePrice;                                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2S1F[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              InventoryIcon[0x28];                                     // 0x00E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StoreIcon[0x28];                                         // 0x0108(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LargeStoreIcon[0x28];                                    // 0x0130(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemPickupClass[0x28];                                   // 0x0158(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              MaleCharacterBodyMesh[0x28];                             // 0x0180(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FemaleCharacterBodyMesh[0x28];                           // 0x01A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MaleCharacterBodyMeshVariant1[0x28];                     // 0x01D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FemaleCharacterBodyMeshVariant1[0x28];                   // 0x01F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CharacterClothesPreviewMesh[0x28];                       // 0x0220(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       CanBeCustomized;                                         // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBeCamouflaged;                                        // 0x0249(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePlacedOnCommission;                                 // 0x024A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBeViewedThroughPreviewMeshesList;                     // 0x024B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemPreviewLightIntensity;                               // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanTransferToSteam;                                      // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUI7[0x3];                                   // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SteamMarketID;                                           // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLWeaponAttachmentInstallInfo
	 * Size -> 0x00C0
	 */
	struct FWTLWeaponAttachmentInstallInfo
	{
	public:
		struct FVector                                             AimingOffset;                                            // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AimingHandsOffsetMale;                                   // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AimingHandsOffsetFemale;                                 // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1H70[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          AttachmentOffset;                                        // 0x0030(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              MountMesh[0x28];                                         // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_EZRU[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MountOffset;                                             // 0x0090(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLStuffItemData
	 * Size -> 0x05E0 (FullSize[0x05E8] - InheritedSize[0x0008])
	 */
	struct FWTLStuffItemData : public FTableRowBase
	{
	public:
		EWTLStuffType                                              Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CRNE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ShopDescription;                                         // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    MasterStuffID;                                           // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CopyParametersFromMasterStuff;                           // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G194[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Condition;                                               // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConditionDelta;                                          // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CanBeRepairedWithItems;                                  // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropChance;                                              // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinRepairExperience;                                     // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MustBeenFactionMember;                                   // 0x0084(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                Faction;                                                 // 0x0085(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17T0[0x2];                                   // 0x0086(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FactionTechnologiesLevel;                                // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BU29[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLItemClassRequirement>                    RPGClassRequirements;                                    // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      BasePrice;                                               // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QIW[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BlueprintClass[0x28];                                    // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              InventoryIcon[0x28];                                     // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StoreIcon[0x28];                                         // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LargeStoreIcon[0x28];                                    // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemPickupClass[0x28];                                   // 0x0148(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ScopeFrameTexture[0x28];                                 // 0x0170(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ScopeReticleTexture[0x28];                               // 0x0198(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ScopeOpticalTrashTexture[0x28];                          // 0x01C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ScopeReticleColorMaskTexture[0x28];                      // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      ScopeOverlayScale;                                       // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasReticleIllumination;                                  // 0x0214(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReticleIsAlwaysIlluminated;                              // 0x0215(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34OB[0x2];                                   // 0x0216(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ReticleIlluminationColor;                                // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WeaponAttachmentMesh[0x28];                              // 0x0228(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		EWTLWeaponAttachmentType                                   WeaponAttachmentType;                                    // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NAJ2[0x3];                                   // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeaponAttachmentZoom;                                    // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FlareRelativeOffset;                                     // 0x0258(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponAttachmentRecoilMultiplier;                        // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponAttachmentDamageMultiplier;                        // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponAttachmentAccuracyMultiplier;                      // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<uint16_t, struct FWTLWeaponAttachmentInstallInfo>     WeaponInstallInfo;                                       // 0x0270(0x0050) Edit, NativeAccessSpecifierPublic
		int32_t                                                    MaxEnergy;                                               // 0x02C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitialEnergy;                                           // 0x02C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnergyConsumptionPerSecond;                              // 0x02C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnergyConsumptionPerUse;                                 // 0x02CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EnergyRegenerationPerSecond;                             // 0x02D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnergyRegenerationDelay;                                 // 0x02D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            CanBeChargedWithItems;                                   // 0x02D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    DamageMin;                                               // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageMax;                                               // 0x02EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPiercingMin;                                        // 0x02F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPiercingMax;                                        // 0x02F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaPerUse;                                           // 0x02F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MiningMultiplier;                                        // 0x02FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PreviewPointerMesh[0x28];                                // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      PlacementAngleLimit;                                     // 0x0328(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlacementRange;                                          // 0x032C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePlacedOnlyOnLandscape;                              // 0x0330(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePlacedInSafeZone;                                   // 0x0331(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePlacedOnlyAtNight;                                  // 0x0332(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9693[0x1];                                   // 0x0333(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlacementTime;                                           // 0x0334(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlacementActorClass[0x28];                               // 0x0338(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bIsSpecialPlacementStuff;                                // 0x0360(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9RUL[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlacementShapeExtendMultiplier;                          // 0x0364(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBePlacedOnlyInStuffPlacementZone;                    // 0x0368(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLWeaponType                                             ModificationWeaponType;                                  // 0x0369(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H505[0x6];                                   // 0x036A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ModificationData;                                        // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePlacedOnCommission;                                 // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLEquipmentType                                          EquipmentType;                                           // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_372O[0x6];                                   // 0x0382(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActivationSoundEvent[0x28];                              // 0x0388(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DeactivationSoundEvent[0x28];                            // 0x03B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EquipmentMeshMale[0x28];                                 // 0x03D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EquipmentMeshFemale[0x28];                               // 0x0400(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       NeedHideGlasses;                                         // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7S0[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EWTLCharacterClass, struct FTransform>                MalePreviewItemTransform;                                // 0x0430(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<EWTLCharacterClass, struct FTransform>                FemalePreviewItemTransform;                              // 0x0480(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              Vehicle[0x28];                                           // 0x04D0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ItemPreviewMesh[0x28];                                   // 0x04F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      ItemPreviewLightIntensity;                               // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBeUsedInSafeZone;                                     // 0x0524(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FEL2[0x3];                                   // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Drone[0x28];                                             // 0x0528(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    DroneCameraScreenID;                                     // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O34X[0x4];                                   // 0x0554(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DronePreviewMesh[0x28];                                  // 0x0558(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FTransform>                                  DronePreviewOffsets;                                     // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<int32_t, int32_t>                                     SprayCanWeaponModification;                              // 0x0590(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       CanTransferToSteam;                                      // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZS5S[0x3];                                   // 0x05E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SteamMarketID;                                           // 0x05E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLMedicineItemData
	 * Size -> 0x0180 (FullSize[0x0188] - InheritedSize[0x0008])
	 */
	struct FWTLMedicineItemData : public FTableRowBase
	{
	public:
		EWTLMedicineType                                           Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HGIL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLMedicineEffect>                          Effects;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCharacterEffectInfluence>                CharacterEffectsInfluence;                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ShopDescription;                                         // 0x0060(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Validity;                                                // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExperienceDeltaPerUse;                                   // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropChance;                                              // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                Faction;                                                 // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Q6P[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FactionTechnologiesLevel;                                // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLItemClassRequirement>                    RPGClassRequirements;                                    // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      BasePrice;                                               // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3WU[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              InventoryIcon[0x28];                                     // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StoreIcon[0x28];                                         // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LargeStoreIcon[0x28];                                    // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemPickupClass[0x28];                                   // 0x0120(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       CanBeUnited;                                             // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XIP[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UseSoundEvent[0x28];                                     // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      TotalDuration;                                           // 0x0178(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePlacedOnCommission;                                 // 0x017C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanTransferToSteam;                                      // 0x017D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1XM[0x2];                                   // 0x017E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SteamMarketID;                                           // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8XL[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLPenetrationCapability
	 * Size -> 0x0010
	 */
	struct FWTLPenetrationCapability
	{
	public:
		EPhysicalSurface                                           SurfaceType;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4AX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSize;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinVelocity;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VelocityPercentDeltaPerUnit;                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLAmmoItemData
	 * Size -> 0x01F0 (FullSize[0x01F8] - InheritedSize[0x0008])
	 */
	struct FWTLAmmoItemData : public FTableRowBase
	{
	public:
		EWTLAmmoType                                               Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCaliber                                                Caliber;                                                 // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRWZ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              TypeName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0038(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ShopDescription;                                         // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    MasterAmmoID;                                            // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CopyParametersFromMasterAmmo;                            // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                Faction;                                                 // 0x006D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKGU[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FactionTechonologiesLevel;                               // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageMin;                                               // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageMax;                                               // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPiercingMin;                                        // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPiercingMax;                                        // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PVPDamageMultiplier;                                     // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PVEDamageMultiplier;                                     // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RobotDamageMultiplier;                                   // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PVPArmorPiercingMultiplier;                              // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PVEArmorPiercingMultiplier;                              // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RobotArmorPiercingMultiplier;                            // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Accuracy;                                                // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialVelocity;                                         // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DestroyVelocity;                                         // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicsImpulse;                                          // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RagdollImpulse;                                          // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNYB[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLPenetrationCapability>                   PenetrationCapabilities;                                 // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EWTLAmmoProjectileType                                     ProjectileType;                                          // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ProjectileCount;                                         // 0x00C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6904[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ProjectileClass[0x28];                                   // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UCurveFloat*                                         VelocityCurve;                                           // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         GravityCurve;                                            // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseReliableHitEvent;                                     // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseReliableRicochetEvent;                                // 0x0109(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMYA[0x2];                                   // 0x010A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConditionDeltaMultiplier;                                // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SpawnTracer;                                             // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_24BC[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnTracerChance;                                       // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnTracerOffset;                                       // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0MD[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TracerClass[0x28];                                       // 0x0120(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      BasePrice;                                               // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropChance;                                              // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InventoryIcon[0x28];                                     // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StoreIcon[0x28];                                         // 0x0178(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LargeStoreIcon[0x28];                                    // 0x01A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemPickupClass[0x28];                                   // 0x01C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       CanBeUnited;                                             // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePlacedOnCommission;                                 // 0x01F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanTransferToSteam;                                      // 0x01F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPZB[0x1];                                   // 0x01F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SteamMarketID;                                           // 0x01F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLWeaponItemData
	 * Size -> 0x01F8 (FullSize[0x0200] - InheritedSize[0x0008])
	 */
	struct FWTLWeaponItemData : public FTableRowBase
	{
	public:
		EWTLWeaponType                                             Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCaliber                                                Caliber;                                                 // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B33U[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ShopDescription;                                         // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              MagazineCapacity;                                        // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MD8E[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DamageMin;                                               // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageMax;                                               // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPiercingMin;                                        // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPiercingMax;                                        // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalHitChanceMultiplier;                             // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseAmmoID;                                              // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Accuracy;                                                // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EffectiveRange;                                          // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Condition;                                               // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConditionDelta;                                          // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OpticsConditionDeltaMultiplier;                          // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Weight;                                                  // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropChance;                                              // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinRepairExperience;                                     // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                Faction;                                                 // 0x0094(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HTXL[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FactionTechonologiesLevel;                               // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HB0Q[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLItemClassRequirement>                    RPGClassRequirements;                                    // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      BasePrice;                                               // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8E2[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BlueprintClass[0x28];                                    // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              InventoryIcon[0x28];                                     // 0x00E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StoreIcon[0x28];                                         // 0x0108(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LargeStoreIcon[0x28];                                    // 0x0130(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              KillsStatsIcon[0x28];                                    // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemPickupClass[0x28];                                   // 0x0180(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              CharacterWeaponPreviewMesh[0x28];                        // 0x01A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FTransform>                                  CharacterWeaponPreviewOffsets;                           // 0x01D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       CanBeCustomized;                                         // 0x01E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBePlacedOnCommission;                                 // 0x01E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanBeViewedThroughPreviewMeshesList;                     // 0x01E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMQQ[0x1];                                   // 0x01E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ItemPreviewLightIntensity;                               // 0x01E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MasterWeaponID;                                          // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CopyParametersFromMasterWeapon;                          // 0x01EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseWeaponInstallInfoForMasterWeapon;                     // 0x01ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQ0P[0x2];                                   // 0x01EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExperienceMultiplier;                                    // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSteamMarketable;                                       // 0x01F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanTransferToSteam;                                      // 0x01F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WM3C[0x2];                                   // 0x01F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SteamMarketID;                                           // 0x01F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1N66[0x4];                                   // 0x01FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLAICharacterDeathData
	 * Size -> 0x0020
	 */
	struct FWTLAICharacterDeathData
	{
	public:
		bool                                                       IsBustServer;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PercentDamage;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXZ0[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             VectorDamage;                                            // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmmoPhysicsImpulse;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KillingDamage;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DirectionDeathID;                                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ProjectileCount;                                         // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6SV[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLRadioTeleportPlace
	 * Size -> 0x0008
	 */
	struct FWTLRadioTeleportPlace
	{
	public:
		int32_t                                                    LocationID;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PortalID;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLBallisticsProjectileData
	 * Size -> 0x00A0
	 */
	struct FWTLBallisticsProjectileData
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AWTLRangedWeapon*                                    Weapon;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   WeaponID;                                                // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FQK[0xE];                                   // 0x0012(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   AmmoID;                                                  // 0x0020(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R23C[0xE];                                   // 0x0022(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FDateTime                                           SpawnTime;                                               // 0x0060(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileLifeTime;                                      // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PreviousPosition;                                        // 0x006C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurrentPosition;                                         // 0x0078(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentVelocity;                                         // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HitCount;                                                // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0VE[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VelocityPenalty;                                         // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   TracerID;                                                // 0x0090(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FirstIteration;                                          // 0x0092(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoveFlag;                                              // 0x0093(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S722[0xC];                                   // 0x0094(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLBallisticsActorPositionData
	 * Size -> 0x0018
	 */
	struct FWTLBallisticsActorPositionData
	{
	public:
		uint64_t                                                   ServerTime;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WCJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.SkelMeshMergeSectionMapping_BP
	 * Size -> 0x0010
	 */
	struct FSkelMeshMergeSectionMapping_BP
	{
	public:
		TArray<int32_t>                                            SectionIDs;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.SkelMeshMergeUVTransform
	 * Size -> 0x0010
	 */
	struct FSkelMeshMergeUVTransform
	{
	public:
		TArray<struct FTransform>                                  UVTransforms;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.SkelMeshMergeUVTransformMapping
	 * Size -> 0x0010
	 */
	struct FSkelMeshMergeUVTransformMapping
	{
	public:
		TArray<struct FSkelMeshMergeUVTransform>                   UVTransformsPerMesh;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.SkeletalMeshMergeParams
	 * Size -> 0x0040
	 */
	struct FSkeletalMeshMergeParams
	{
	public:
		TArray<struct FSkelMeshMergeSectionMapping_BP>             MeshSectionMappings;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSkelMeshMergeUVTransformMapping>            UVTransformsPerMesh;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class USkeletalMesh*>                               MeshesToMerge;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    StripTopLODS;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsCpuAccess : 1;                                     // 0x0034(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkeletonBefore : 1;                                     // 0x0034(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6PE[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeleton*                                           Skeleton;                                                // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLMonsterBurst
	 * Size -> 0x000C
	 */
	struct FWTLMonsterBurst
	{
	public:
		bool                                                       IsBurst;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PercentDamageBurst;                                      // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH13[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TakeDamageBurst;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinLevelBurst;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxLevelBurst;                                           // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPBY[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLIngredientItemConsumeInfo
	 * Size -> 0x0018
	 */
	struct FWTLIngredientItemConsumeInfo
	{
	public:
		int32_t                                                    CraftRecipeID;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3RL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ItemId;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastConsumeTime;                                         // 0x0010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLIdentificationCache
	 * Size -> 0x0040
	 */
	struct FWTLIdentificationCache
	{
	public:
		unsigned char                                              IdentificationClassID;                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAX5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ActorLocation;                                           // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             IdentificationLocation;                                  // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Condition;                                               // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Energy;                                                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                Faction;                                                 // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIMG[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    State;                                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLGN[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCheckpointState
	 * Size -> 0x0018
	 */
	struct FWTLCheckpointState
	{
	public:
		EWTLFaction                                                ControlFaction;                                          // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRU3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LastHackTime;                                            // 0x0008(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           TimeTillNextHack;                                        // 0x0010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLBackButtonAction
	 * Size -> 0x0118
	 */
	struct FWTLBackButtonAction
	{
	public:
		EWTLBackButtonActionType                                   Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZL0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLStoreItem                                       StoreItemData;                                           // 0x0008(0x0108) Edit, NativeAccessSpecifierPublic
		class UWTLCommonStoreItem*                                 StoreItem;                                               // 0x0110(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLStoreItemTagMatchCount
	 * Size -> 0x0010
	 */
	struct FWTLStoreItemTagMatchCount
	{
	public:
		class UWTLCommonStoreItem*                                 StoreItem;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TagMatchCount;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZXT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLDroneMarker
	 * Size -> 0x000C
	 */
	struct FWTLDroneMarker
	{
	public:
		unsigned char                                              UnknownData_24CD[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLSenseEventInfo
	 * Size -> 0x0028
	 */
	struct FWTLSenseEventInfo
	{
	public:
		unsigned char                                              UnknownData_XUQO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              EventInstigator;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T5CE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           Time;                                                    // 0x0020(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLTaggedSenseEventInfo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLTaggedSenseEventInfo : public FWTLSenseEventInfo
	{
	public:
		class FString                                              Tag;                                                     // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFishingCharacterHistory
	 * Size -> 0x0018
	 */
	struct FWTLFishingCharacterHistory
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SuccessTakeCount;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JUT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           FishingTimeStart;                                        // 0x0010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFishingCharacter
	 * Size -> 0x0020
	 */
	struct FWTLFishingCharacter
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLItem                                            CurrentBait;                                             // 0x0008(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FDateTime                                           NextBiteTime;                                            // 0x0010(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentFishIndex;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CurrentQTEDifficulty;                                    // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CurrentQTEErrorsCount;                                   // 0x001D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEH2[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLVoiceDataPacket
	 * Size -> 0x1688
	 */
	struct FWTLVoiceDataPacket
	{
	public:
		struct FDateTime                                           ReceiveTime;                                             // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Data[0x1680];                                            // 0x0008(0x1680) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.RespawnQueryElement
	 * Size -> 0x0010
	 */
	struct FRespawnQueryElement
	{
	public:
		struct FDateTime                                           RespawnTime;                                             // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APlayerController*                                   Controller;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLHitPointInfo
	 * Size -> 0x0018
	 */
	struct FWTLHitPointInfo
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLInteractivePlantSpawnInfo
	 * Size -> 0x0008
	 */
	struct FWTLInteractivePlantSpawnInfo
	{
	public:
		int32_t                                                    MaxCount;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLDelayedSpawnActorInfo
	 * Size -> 0x0048
	 */
	struct FWTLDelayedSpawnActorInfo
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0004(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ActorToSpawn[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class APawn*                                               Instigator;                                              // 0x0038(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Owner;                                                   // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLDelayedDamageInfo
	 * Size -> 0x0058
	 */
	struct FWTLDelayedDamageInfo
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageValue;                                             // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      IgnoredActors;                                           // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class AWTLPlayerController*                                Instigator;                                              // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ActorToSpawn[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct WTL.WTLMissileWeaponBeamSection
	 * Size -> 0x0010
	 */
	struct FWTLMissileWeaponBeamSection
	{
	public:
		int32_t                                                    TrajectoryID;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQGR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            ParticleComponent;                                       // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLMonsterDeathData
	 * Size -> 0x0024
	 */
	struct FWTLMonsterDeathData
	{
	public:
		bool                                                       IsBustServer;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PercentDamage;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4GY[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             VectorDamage;                                            // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmmoPhysicsImpulse;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KillingDamage;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DirectionDeathID;                                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ProjectileCount;                                         // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9A8[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LifeSpan;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSteamItemInfo
	 * Size -> 0x0070
	 */
	struct FWTLSteamItemInfo
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ItemId;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   quantity;                                                // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIME[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   originalitemid;                                          // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   itemdefid;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    appid;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TFO[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              acquired;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              State;                                                   // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Origin;                                                  // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              state_changed_timestamp;                                 // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSteamInventoryRequest
	 * Size -> 0x0020
	 */
	struct FWTLSteamInventoryRequest
	{
	public:
		uint64_t                                                   SteamID;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   RequestID;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ItemId;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   itemdefid;                                               // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLTakeItemInfo
	 * Size -> 0x000C
	 */
	struct FWTLTakeItemInfo
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6H9Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLReplica
	 * Size -> 0x0020
	 */
	struct FWTLReplica
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1V41[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Text;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterInventoryDeltaRecord
	 * Size -> 0x0018
	 */
	struct FWTLCharacterInventoryDeltaRecord
	{
	public:
		unsigned char                                              RecordType;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PV4D[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      ItemData;                                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterQuestState_FastArraySerializerItem
	 * Size -> 0x001C (FullSize[0x0028] - InheritedSize[0x000C])
	 */
	struct FWTLCharacterQuestState_FastArraySerializerItem : public FFastArraySerializerItem
	{
	public:
		uint32_t                                                   QuestID;                                                 // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLQuestState                                             State;                                                   // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Progress1;                                               // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Progress2;                                               // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Progress3;                                               // 0x0013(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Progress4;                                               // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6IX3[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLDateTime                                        LastChangeDate;                                          // 0x0018(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Active;                                                  // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QECM[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterQuestStateArray
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	struct FWTLCharacterQuestStateArray : public FFastArraySerializer
	{
	public:
		TArray<struct FWTLCharacterQuestState_FastArraySerializerItem> Items;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLPortalStationRequest
	 * Size -> 0x0008
	 */
	struct FWTLPortalStationRequest
	{
	public:
		int32_t                                                    WayIndex;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeSpan;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLDedicatedServerMessage
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLDedicatedServerMessage : public FWTLPacket
	{
	public:
		uint32_t                                                   LocationID;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Q3T[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MessageType;                                             // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MessageData;                                             // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSentMailPackageRecord
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	struct FWTLSentMailPackageRecord : public FWTLPacket
	{
	public:
		class FString                                              ToCharacterName;                                         // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLDateTime                                        MailDate;                                                // 0x0038(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLDateTime                                        FactDeliveryDate;                                        // 0x0040(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLMailPackageDeliveryType                                DeliveryType;                                            // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUV3[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   TotalWeight;                                             // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalPrice;                                              // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJGC[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MessageText;                                             // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLMailPackageState                                       State;                                                   // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0O0[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLSentMailMessages
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLSentMailMessages : public FWTLPacket
	{
	public:
		TArray<struct FWTLSentMailPackageRecord>                   Items;                                                   // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFactionLeaderborRecord
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	struct FWTLFactionLeaderborRecord : public FWTLPacket
	{
	public:
		unsigned char                                              Position;                                                // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YGNF[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CharacterID;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level;                                                   // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCharacterClass                                         CharacterClass;                                          // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLSex                                                    Sex;                                                     // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLI2[0x1];                                   // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   ClanID;                                                  // 0x004C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_457T[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Score;                                                   // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    TotalScore;                                              // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFactionLeaderborData
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLFactionLeaderborData : public FWTLPacket
	{
	public:
		EWTLFaction                                                Faction;                                                 // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Type;                                                    // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPUZ[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLFactionLeaderborRecord>                  Items;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLEACMessage
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLEACMessage : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_NRP5[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLBuyCreditsInfo
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLBuyCreditsInfo : public FWTLPacket
	{
	public:
		uint64_t                                                   StoreItemID;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Language;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Currency;                                                // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanPapameters
	 * Size -> 0x0088
	 */
	struct FWTLClanPapameters
	{
	public:
		unsigned char                                              UnknownData_OZXM[0x88];                                  // 0x0000(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLAccountCreditsChange
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLAccountCreditsChange : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CreditsAmount;                                           // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWMB[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Info;                                                    // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLActivateCodeResult
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLActivateCodeResult : public FWTLPacket
	{
	public:
		bool                                                       Success;                                                 // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZSD[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Code;                                                    // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentBalance;                                          // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVHB[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLInAppBuyResult
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	struct FWTLInAppBuyResult : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Success;                                                 // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGH8[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Info;                                                    // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentBalance;                                          // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJSF[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLDateTime                                        PremiumEndTime;                                          // 0x0050(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CharacterSlotCount;                                      // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TIU[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLPutItemToAccountInventoryCommitRequest
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLPutItemToAccountInventoryCommitRequest : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   AccountInventoryID;                                      // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Success;                                                 // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RQ70[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLPutItemToAccountInventoryResult
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLPutItemToAccountInventoryResult : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   AccountInventoryID;                                      // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APK1[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ItemId;                                                  // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Success;                                                 // 0x004C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7MVO[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLPutItemToAccountInventoryRequest
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	struct FWTLPutItemToAccountInventoryRequest : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X444[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ItemId;                                                  // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLAccountInventoryItem                            Item;                                                    // 0x0040(0x0058) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLGetItemFromAccountInventoryResult
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	struct FWTLGetItemFromAccountInventoryResult : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Success;                                                 // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JC1[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLAccountInventoryItem                            Item;                                                    // 0x0038(0x0058) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLGetItemFromAccountInventoryInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLGetItemFromAccountInventoryInfo : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   AccountInventoryID;                                      // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Success;                                                 // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZ9Y[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLClanScoreStatisticsRecord
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLClanScoreStatisticsRecord : public FWTLPacket
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PVPScore;                                                // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PVEScore;                                                // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CraftScore;                                              // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TechnologyScore;                                         // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanScoreStatistics
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLClanScoreStatistics : public FWTLPacket
	{
	public:
		TArray<struct FWTLClanScoreStatisticsRecord>               Records;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLDateTimePeriod
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLDateTimePeriod : public FWTLPacket
	{
	public:
		struct FWTLDateTime                                        Start;                                                   // 0x0028(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLDateTime                                        End;                                                     // 0x0030(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLNewCharacterMailMessage
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	struct FWTLNewCharacterMailMessage : public FWTLPacket
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLCharacterMailMessage                            Message;                                                 // 0x0030(0x0070) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanActionLogRecord
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FWTLClanActionLogRecord : public FWTLPacket
	{
	public:
		struct FWTLDateTime                                        EventDate;                                               // 0x0028(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLClanActionLogRecordType                                Type;                                                    // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9L4[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CharacterID;                                             // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   InstigatorCharacterID;                                   // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstigatorCharacterName;                                 // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Info;                                                    // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanActionLogPage
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLClanActionLogPage : public FWTLPacket
	{
	public:
		int32_t                                                    RecordsPerPage;                                          // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageIndex;                                               // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLClanActionLogRecord>                     Records;                                                 // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanScoreLogRecord
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	struct FWTLClanScoreLogRecord : public FWTLPacket
	{
	public:
		struct FWTLDateTime                                        EventDate;                                               // 0x0028(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLClanScoreLogRecordType                                 Type;                                                    // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NWT[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PVPScoreDelta;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PVEScoreDelta;                                           // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CraftScoreDelta;                                         // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TechnologyScoreDelta;                                    // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGLJ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CharacterID;                                             // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanScoreLogPage
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLClanScoreLogPage : public FWTLPacket
	{
	public:
		int32_t                                                    RecordsPerPage;                                          // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageIndex;                                               // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLClanScoreLogRecord>                      Records;                                                 // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLInAppPurchaseItem
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLInAppPurchaseItem : public FWTLPacket
	{
	public:
		uint64_t                                                   StoreItemID;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Price;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLInAppPurchase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLInAppPurchase : public FWTLPacket
	{
	public:
		TArray<struct FWTLInAppPurchaseItem>                       Items;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLAchievementsPercentage
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLAchievementsPercentage : public FWTLPacket
	{
	public:
		uint16_t                                                   AchievementID;                                           // 0x0028(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FM6[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Percent;                                                 // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLAchievementsPercentageList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLAchievementsPercentageList : public FWTLPacket
	{
	public:
		TArray<struct FWTLAchievementsPercentage>                  Items;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLStatisticsValue
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLStatisticsValue : public FWTLPacket
	{
	public:
		uint16_t                                                   ParameterID;                                             // 0x0028(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6XJ[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   Value;                                                   // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLAccountAchievementsAndStats
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLAccountAchievementsAndStats : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLIdentity16>                              Achievements;                                            // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLStatisticsValue>                         StatisticsValues;                                        // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLAccountAchievementsList
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLAccountAchievementsList : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLIdentity16>                              Items;                                                   // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLTriggerAccountAchievementInfo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLTriggerAccountAchievementInfo : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   AchievementID;                                           // 0x0030(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EIW1[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLAccountStatisticsValueDelta
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLAccountStatisticsValueDelta : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ParameterID;                                             // 0x0030(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KTW[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   Delta;                                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFactionLeaderRecord
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FWTLFactionLeaderRecord : public FWTLPacket
	{
	public:
		EWTLFaction                                                Faction;                                                 // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7AUP[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CharacterID;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ClanID;                                                  // 0x0048(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCharacterClass                                         ClassID;                                                 // 0x004A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level;                                                   // 0x004B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Rank;                                                    // 0x004C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCHA[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   Score;                                                   // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterClanInfo
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterClanInfo : public FWTLPacket
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ClanID;                                                  // 0x0040(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLClanMemberType                                         ClanMemberType;                                          // 0x0042(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_961F[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ClanPolicyGroupID;                                       // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterFactionInfo
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterFactionInfo : public FWTLPacket
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                Faction;                                                 // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Reputation;                                              // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3C3[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   Score;                                                   // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Rank;                                                    // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICQ0[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterCustomizationItemRecord
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterCustomizationItemRecord : public FWTLPacket
	{
	public:
		int32_t                                                    ID;                                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8LX6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   StoreItemID;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLIdentity32>                              RequiredSteamDLC;                                        // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterContactRecord
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterContactRecord : public FWTLPacket
	{
	public:
		EWTLCharacterContactType                                   Type;                                                    // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCU7[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CharacterID;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCheaterReport
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLCheaterReport : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_WLH5[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLAnticheatResponse
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLAnticheatResponse : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_XWR4[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLVersionInfo
	 * Size -> 0x0008
	 */
	struct FWTLVersionInfo
	{
	public:
		unsigned char                                              UnknownData_WURD[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLAuthorization
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	struct FWTLAuthorization : public FWTLPacket
	{
	public:
		uint64_t                                                   UserID;                                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLPlatform                                               Platform;                                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SN4P[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Login;                                                   // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLVersionInfo                                     Version;                                                 // 0x0058(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		uint16_t                                                   TicketSize;                                              // 0x0060(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJNQ[0xE];                                   // 0x0062(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueDeviceID;                                          // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSteamAchievementTrigger
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLSteamAchievementTrigger : public FWTLPacket
	{
	public:
		uint64_t                                                   SteamID;                                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AchievementName;                                         // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSteamFloatStatChange
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLSteamFloatStatChange : public FWTLPacket
	{
	public:
		uint64_t                                                   SteamID;                                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatName;                                                // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDeltaValue;                                           // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXZB[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLSteamIntStatChange
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLSteamIntStatChange : public FWTLPacket
	{
	public:
		uint64_t                                                   SteamID;                                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatName;                                                // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDeltaValue;                                           // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGGZ[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLClanSkillChange
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLClanSkillChange : public FWTLPacket
	{
	public:
		uint16_t                                                   ClanID;                                                  // 0x0028(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Operation;                                               // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SkillID;                                                 // 0x002B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OEXI[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLClanScoreChange
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLClanScoreChange : public FWTLPacket
	{
	public:
		uint16_t                                                   ClanID;                                                  // 0x0028(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WI8V[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PVPScore;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PVEScore;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CraftScore;                                              // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TechnologyScore;                                         // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ClanLevel;                                               // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8YG[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLClanMemberRequestState
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	struct FWTLClanMemberRequestState : public FWTLPacket
	{
	public:
		uint16_t                                                   ClanID;                                                  // 0x0028(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J40A[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ClanName;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLDateTime                                        EventDate;                                               // 0x0040(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLClanMemberType                                         ClanMemberType;                                          // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y8W1[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Commentary;                                              // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanMemberRequestInfo
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FWTLClanMemberRequestInfo : public FWTLPacket
	{
	public:
		uint16_t                                                   ClanID;                                                  // 0x0028(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25OG[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLDateTime                                        RequestDate;                                             // 0x0030(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   CharacterID;                                             // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CharacterLevel;                                          // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCharacterClass                                         CharacterClass;                                          // 0x0051(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                CharacterFaction;                                        // 0x0052(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCJ3[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CharacterScore;                                          // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CharacterRank;                                           // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CharacterReputation;                                     // 0x0061(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZE4[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Commentary;                                              // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanMemberRequestList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLClanMemberRequestList : public FWTLPacket
	{
	public:
		TArray<struct FWTLClanMemberRequestInfo>                   Items;                                                   // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanRecord
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLClanRecord : public FWTLPacket
	{
	public:
		uint16_t                                                   ID;                                                      // 0x0028(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                Faction;                                                 // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QY2[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLRemovedClanMember
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLRemovedClanMember : public FWTLPacket
	{
	public:
		uint16_t                                                   ClanID;                                                  // 0x0028(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0I7[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CharacterID;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClanMemberCount;                                         // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DL2B[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLNewClanMember
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	struct FWTLNewClanMember : public FWTLPacket
	{
	public:
		uint16_t                                                   ClanID;                                                  // 0x0028(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3SV[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CharacterID;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCharacterClass                                         CharacterClass;                                          // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CharacterLevel;                                          // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLClanMemberType                                         ClanMemberType;                                          // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ClanReputation;                                          // 0x004B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FAK[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ClanPolicyGroupID;                                       // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClanMemberCount;                                         // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YFA[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLDedicatedServerStatistics
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	struct FWTLDedicatedServerStatistics : public FWTLPacket
	{
	public:
		uint32_t                                                   ConnectionCount;                                         // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CharactersCount;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   MonstersSpawned;                                         // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   MonstersKilled;                                          // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   MonstersAlive;                                           // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ExperienceTotal;                                         // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ExperienceMaxValue;                                      // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   MoneyProduced;                                           // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   MoneyConsumed;                                           // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   SlotMachinesActivationsCount;                            // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   SlotMachinesBetsMoney;                                   // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   SlotMachinesRewardMoney;                                 // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   SlotMachinesConsumedMoney;                               // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   SlotMachinesMaxReward;                                   // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLChangeCreditsResult
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLChangeCreditsResult : public FWTLPacket
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CreditsAmount;                                           // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MoneyAmount;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLChangeCreditsInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLChangeCreditsInfo : public FWTLPacket
	{
	public:
		uint64_t                                                   accountid;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   CharacterID;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CreditsAmount;                                           // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9A47[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLClientMoveToLocationInfo
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLClientMoveToLocationInfo : public FWTLPacket
	{
	public:
		uint32_t                                                   LocationID;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PortalID;                                                // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DedicatedServerAddress;                                  // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DedicatedServerPort;                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYJO[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLMoveToLocationInfo
	 * Size -> 0x04A8 (FullSize[0x04D0] - InheritedSize[0x0028])
	 */
	struct FWTLMoveToLocationInfo : public FWTLPacket
	{
	public:
		uint32_t                                                   LocationID;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PortalID;                                                // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLFullCharacterInfo                               CharacterInfo;                                           // 0x0030(0x04A0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLPrivateStorageContent
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	struct FWTLPrivateStorageContent : public FWTLStorageContent
	{
	public:
		uint32_t                                                   NPCID;                                                   // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlotCount;                                               // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KW99[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterTravelInfo
	 * Size -> 0x04D0 (FullSize[0x04F8] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterTravelInfo : public FWTLPacket
	{
	public:
		class FString                                              TicketUID;                                               // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PortalID;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CIYG[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   SteamID;                                                 // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLFullCharacterInfo                               CharacterInfo;                                           // 0x0048(0x04A0) Edit, NativeAccessSpecifierPublic
		TArray<struct FWTLPrivateStorageContent>                   PrivateStorages;                                         // 0x04E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLArenaLocationStateChange
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLArenaLocationStateChange : public FWTLPacket
	{
	public:
		uint32_t                                                   ConfederationPlayersCount;                               // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   BlackSunsetPlayersCount;                                 // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ConfederationScores;                                     // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   BlackSunsetScores;                                       // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLArenaLocationInfo
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FWTLArenaLocationInfo : public FWTLPacket
	{
	public:
		uint32_t                                                   ID;                                                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLLocationType                                           Type;                                                    // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AR6E[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PlayersCount;                                            // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ConfederationPlayersCount;                               // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   BlackSunsetPlayersCount;                                 // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MinPlayersCount;                                         // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxPlayersCount;                                         // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MatchTime;                                               // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxMatchTime;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ConfederationScores;                                     // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   BlackSunsetScores;                                       // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ScoresToWin;                                             // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLArenaLocationList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLArenaLocationList : public FWTLPacket
	{
	public:
		TArray<struct FWTLArenaLocationInfo>                       Data;                                                    // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSetActiveCharacterResult
	 * Size -> 0x04C8 (FullSize[0x04F0] - InheritedSize[0x0028])
	 */
	struct FWTLSetActiveCharacterResult : public FWTLPacket
	{
	public:
		class FString                                              DedicatedServerHost;                                     // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DedicatedServerPort;                                     // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWB6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TicketUID;                                               // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLFullCharacterInfo                               CharacterInfo;                                           // 0x0050(0x04A0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLStatisticsCharacterParameterList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLStatisticsCharacterParameterList : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_S7Y6[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLStatisticsCharacterParameter
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLStatisticsCharacterParameter : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_365P[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterMainParameters
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterMainParameters : public FWTLPacket
	{
	public:
		int8_t                                                     Strength;                                                // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     Dexterity;                                               // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     Stamina;                                                 // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     Accuracy;                                                // 0x002B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     Intelligence;                                            // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     Fortune;                                                 // 0x002D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACCZ[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLDoorLockInfo
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLDoorLockInfo : public FWTLPacket
	{
	public:
		int64_t                                                    BuildingID;                                              // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    BuildingDoorID;                                          // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLBuildingDoorLockType                                   Type;                                                    // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_023B[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              KeyCode;                                                 // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLDoorLockOperationInfo
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLDoorLockOperationInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_QGHT[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLExperienceDelta
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLExperienceDelta : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_DTJN[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLSkill
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	struct FWTLSkill : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_5U7X[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLSkillEffect
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLSkillEffect : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_X2QW[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLUpdateCommissionItemInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLUpdateCommissionItemInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_8IC1[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLReturnItemFromCommissionInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLReturnItemFromCommissionInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_V6WC[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLPutItemOnCommissionInfo
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLPutItemOnCommissionInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_0SA5[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLBalanceDelta
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLBalanceDelta : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_A7I7[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLShopCommissionItems
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	struct FWTLShopCommissionItems : public FWTLPacket
	{
	public:
		int32_t                                                    ShopID;                                                  // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXOX[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLCommissionWeaponItem>                    WeaponItems;                                             // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCommissionAmmoItem>                      AmmoItems;                                               // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCommissionMedicineItem>                  MedicineItems;                                           // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCommissionStuffItem>                     StuffItems;                                              // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCommissionClothesItem>                   ClothesItems;                                            // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCommissionResourceItem>                  ResourceItems;                                           // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCommissionArtefactItem>                  ArtefactItems;                                           // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLShortVersionInfo
	 * Size -> 0x0002
	 */
	struct FWTLShortVersionInfo
	{
	public:
		unsigned char                                              UnknownData_SY28[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLDedicatedServerAuthorization
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	struct FWTLDedicatedServerAuthorization : public FWTLPacket
	{
	public:
		struct FWTLShortVersionInfo                                ProtocolVersion;                                         // 0x0028(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FWTLVersionInfo                                     Version;                                                 // 0x002A(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Type;                                                    // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFJ3[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LocationID;                                              // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G60W[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Hash;                                                    // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MinPlayersCount;                                         // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxPlayersCount;                                         // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxMatchTime;                                            // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ScoresToWin;                                             // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLBuyItemFromShopInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLBuyItemFromShopInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_5RLE[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLSellItemToShopInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLSellItemToShopInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_P1LP[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLShopBuyItem
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLShopBuyItem : public FWTLPacket
	{
	public:
		int64_t                                                    ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShopID;                                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S4ID[0x1];                                   // 0x0035(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    ItemTypeID;                                              // 0x0036(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Price;                                                   // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F2TO[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLShop
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	struct FWTLShop : public FWTLPacket
	{
	public:
		int32_t                                                    ID;                                                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LocationID;                                              // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLShopType                                               Type;                                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5P4[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0040(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8D3L[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Balance;                                                 // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CommissionPercent;                                       // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UD38[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CommissionWeaponItemsCount;                              // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CommissionAmmoItemsCount;                                // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CommissionMedicineItemsCount;                            // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CommissionStuffItemsCount;                               // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CommissionClothesItemsCount;                             // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CommissionResourceItemsCount;                            // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CommissionArtefactItemsCount;                            // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VU5[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLMiningPointStateChange
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLMiningPointStateChange : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_P9QL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterMuteState
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterMuteState : public FWTLPacket
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ChatMuteState;                                           // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VoiceMuteState;                                          // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MR5[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLDateTime                                        MuteEnds;                                                // 0x0038(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLWorldInfo
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	struct FWTLWorldInfo : public FWTLPacket
	{
	public:
		float                                                      CurrentTime;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   TimeScale;                                               // 0x002C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   CreditsToMoneyRate;                                      // 0x002E(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLWorldConfig                                     Config;                                                  // 0x0030(0x0058) Edit, NativeAccessSpecifierPublic
		TArray<struct FWTLGroup>                                   Groups;                                                  // 0x0088(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCharacterMuteState>                      CharactersMuteState;                                     // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLWorldTime
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLWorldTime : public FWTLPacket
	{
	public:
		float                                                      CurrentTime;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    TimeScale;                                               // 0x002C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UV5Y[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLGroupInvite
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FWTLGroupInvite : public FWTLPacket
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   GroupId;                                                 // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   CharacterID;                                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   InviteInstigatorID;                                      // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InviteInstigatorName;                                    // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupName;                                               // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Expired;                                                 // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MembersCount;                                            // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2AFK[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLDateTime                                        InviteTime;                                              // 0x0070(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLWeatherInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLWeatherInfo : public FWTLPacket
	{
	public:
		EWTLWeatherType                                            WeatherType;                                             // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYSV[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WindStrength;                                            // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindSpeed;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindMinGustAmount;                                       // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindMaxGustAmount;                                       // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindAngle;                                               // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFastAccessSlotItemInfo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLFastAccessSlotItemInfo : public FWTLPacket
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3U3[0x1];                                   // 0x0029(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   ItemTypeID;                                              // 0x002A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ScopeAttachmentTypeID;                                   // 0x002C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   FlashlightAttachmentTypeID;                              // 0x002E(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   MuzzleAttachmentTypeID;                                  // 0x0030(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationScalar;                                     // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomizationColor;                                      // 0x0033(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_II6W[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLShortCharacterInfo
	 * Size -> 0x0210 (FullSize[0x0238] - InheritedSize[0x0028])
	 */
	struct FWTLShortCharacterInfo : public FWTLPacket
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLSex                                                    Sex;                                                     // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level;                                                   // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCharacterClass                                         Class;                                                   // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLJJ[0x1];                                   // 0x0043(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Health;                                                  // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReadyToGame;                                             // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Strength;                                                // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Dexterity;                                               // 0x004A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Stamina;                                                 // 0x004B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Accuracy;                                                // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Intelligence;                                            // 0x004D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Fortune;                                                 // 0x004E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PO1V[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLCharacterSlotItemInfo                           HeadItem;                                                // 0x0050(0x0030) Edit, NativeAccessSpecifierPublic
		struct FWTLCharacterSlotItemInfo                           TorsoItem;                                               // 0x0080(0x0030) Edit, NativeAccessSpecifierPublic
		struct FWTLCharacterSlotItemInfo                           LegsItem;                                                // 0x00B0(0x0030) Edit, NativeAccessSpecifierPublic
		struct FWTLCharacterSlotItemInfo                           FeetItem;                                                // 0x00E0(0x0030) Edit, NativeAccessSpecifierPublic
		struct FWTLCharacterSlotItemInfo                           ArmsItem;                                                // 0x0110(0x0030) Edit, NativeAccessSpecifierPublic
		TArray<struct FWTLFastAccessSlotItemInfo>                  FastAccessSlots;                                         // 0x0140(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EWTLFaction                                                Faction;                                                 // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Reputation;                                              // 0x0151(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Rank;                                                    // 0x0152(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7H2[0x1];                                   // 0x0153(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   ClanID;                                                  // 0x0154(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLClanMemberType                                         ClanMemberType;                                          // 0x0156(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLPlayerType                                             PlayerType;                                              // 0x0157(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BodyType;                                                // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PVPEnabled;                                              // 0x0159(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2VL[0x6];                                   // 0x015A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLCharacterCustomizationRecord>            CustomizationInfo;                                       // 0x0160(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FWTLCharacterEquipmentItemInfo                      EquipmentSlot1;                                          // 0x0170(0x0030) NativeAccessSpecifierPublic
		struct FWTLCharacterEquipmentItemInfo                      EquipmentSlot2;                                          // 0x01A0(0x0030) NativeAccessSpecifierPublic
		struct FWTLCharacterEquipmentItemInfo                      EquipmentSlot3;                                          // 0x01D0(0x0030) NativeAccessSpecifierPublic
		struct FWTLCharacterEquipmentItemInfo                      EquipmentSlot4;                                          // 0x0200(0x0030) NativeAccessSpecifierPublic
		unsigned char                                              EquipmentSlotStates;                                     // 0x0230(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_467F[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLLocationStorage
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FWTLLocationStorage : public FWTLPacket
	{
	public:
		int64_t                                                    ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LocationID;                                              // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Y89[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    LocationBuildingID;                                      // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    BuildingBlockID;                                         // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLLocationStorageType                                    Type;                                                    // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6L1[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x004C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0058(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoDestroy;                                             // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNSA[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLDateTime                                        AutoDestroyTime;                                         // 0x0068(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlotCount;                                               // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7SX[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCamp
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	struct FWTLCamp : public FWTLPacket
	{
	public:
		int64_t                                                    ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LocationID;                                              // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2ME[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    CharacterID;                                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0040(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x004C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLBuildingBlock
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FWTLBuildingBlock : public FWTLPacket
	{
	public:
		int64_t                                                    ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    LocationBuildingID;                                      // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    CharacterID;                                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlockTypeID;                                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLBlockType                                              Type;                                                    // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y7T1[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0048(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0054(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLBuildingBlockState                                     State;                                                   // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZGO[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Condition;                                               // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLDateTime                                        CreationDate;                                            // 0x0068(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    InteractiveObjectID;                                     // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLBuildingDoor
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	struct FWTLBuildingDoor : public FWTLPacket
	{
	public:
		int64_t                                                    ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    LocationBuildingID;                                      // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    BuildingBlockID;                                         // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Closed;                                                  // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SX5[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    LockID;                                                  // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLBuildingDoorLockType                                   LockType;                                                // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94O5[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              KeyCode;                                                 // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLBuildingWorkbench
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	struct FWTLBuildingWorkbench : public FWTLPacket
	{
	public:
		int64_t                                                    ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    LocationBuildingID;                                      // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    BuildingBlockID;                                         // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    LocationStorageID;                                       // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level;                                                   // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SV33[0x17];                                  // 0x0049(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLBuilding
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	struct FWTLBuilding : public FWTLPacket
	{
	public:
		int64_t                                                    ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LocationID;                                              // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHEJ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    CharacterID;                                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLBuildingType                                           Type;                                                    // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T0BJ[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0044(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0050(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LA67[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLDateTime                                        CreationDate;                                            // 0x0060(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLBuildingBlock>                           Blocks;                                                  // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLBuildingDoor>                            Doors;                                                   // 0x0088(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLBuildingWorkbench>                       Workbenches;                                             // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLMiningPointResource
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLMiningPointResource : public FWTLPacket
	{
	public:
		int64_t                                                    ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LocationMiningPointID;                                   // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    ResourceID;                                              // 0x0034(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Value;                                                   // 0x0036(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    MaxValue;                                                // 0x0038(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    ValueIncrement;                                          // 0x003A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    ValueDecrement;                                          // 0x003C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VE1C[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLMiningPoint
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	struct FWTLMiningPoint : public FWTLPacket
	{
	public:
		int32_t                                                    ID;                                                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LocationID;                                              // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLMiningPointType                                        Type;                                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SubType;                                                 // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IW4Q[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0040(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ResourcePercent;                                         // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFGU[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLMiningPointResource>                     Resources;                                               // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLLocationInfo
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	struct FWTLLocationInfo : public FWTLPacket
	{
	public:
		int32_t                                                    ID;                                                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLLocationType                                           Type;                                                    // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MQEW[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLWeatherInfo                                     WeatherInfo;                                             // 0x0040(0x0040) Edit, NativeAccessSpecifierPublic
		TArray<struct FWTLShortCharacterInfo>                      Characters;                                              // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLLocationStorage>                         Storages;                                                // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLCamp>                                    Camps;                                                   // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLBuilding>                                Buildings;                                               // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWTLMiningPoint>                             MiningPoints;                                            // 0x00C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLInventoryItemDelta
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLInventoryItemDelta : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_5GFN[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCraftItemPart
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLCraftItemPart : public FWTLPacket
	{
	public:
		int64_t                                                    ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CraftItemID;                                             // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NG12[0x1];                                   // 0x0035(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    ItemTypeID;                                              // 0x0036(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9Y8[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCraftItem
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLCraftItem : public FWTLPacket
	{
	public:
		int32_t                                                    ID;                                                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N755[0x1];                                   // 0x002D(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    ItemTypeID;                                              // 0x002E(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemCount;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCraftType                                              CraftType;                                               // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9O16[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinCraftExperience;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CraftTime;                                               // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLCraftItemPart>                           Parts;                                                   // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCraftRequest
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	struct FWTLCraftRequest : public FWTLPacket
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    CharacterID;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   CraftItemID;                                             // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLDateTime                                        StartTime;                                               // 0x0050(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLDateTime                                        EndTime;                                                 // 0x0058(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLBuildingBlockType
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	struct FWTLBuildingBlockType : public FWTLPacket
	{
	public:
		int32_t                                                    ID;                                                      // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLBlockType                                              Type;                                                    // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level;                                                   // 0x002D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2C1Z[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Durability;                                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BuildDurabilityIncrement;                                // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RepairDurabilityIncrement;                               // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V93N[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PrefabName;                                              // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9AXA[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLBuildingBlockTypeList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLBuildingBlockTypeList : public FWTLPacket
	{
	public:
		TArray<struct FWTLBuildingBlockType>                       Data;                                                    // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLBuildingBlockResourceCostItem
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLBuildingBlockResourceCostItem : public FWTLPacket
	{
	public:
		int16_t                                                    ResourceID;                                              // 0x0028(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QI3[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ResourceName;                                            // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D13Z[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLShortTextInfo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLShortTextInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_NFH1[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLTextInfo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLTextInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_C61B[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLConsoleCommand
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLConsoleCommand : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_WFHS[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLVoicePacket
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLVoicePacket : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_T9JO[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLVoiceCharacterPosition
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLVoiceCharacterPosition : public FWTLPacket
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Y95[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLVoiceWorldInfo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLVoiceWorldInfo : public FWTLPacket
	{
	public:
		TArray<struct FWTLVoiceCharacterPosition>                  CharacterPositions;                                      // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLChatMessage
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FWTLChatMessage : public FWTLPacket
	{
	public:
		int64_t                                                    CharacterID;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLChatMessageType                                        Type;                                                    // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELFR[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Text;                                                    // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLChatMessageRequest
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLChatMessageRequest : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_12X9[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLConnectionCloseInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLConnectionCloseInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_54J3[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLClientErrorInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLClientErrorInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_SKFO[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterDeathInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterDeathInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_G4B9[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterDamageInfo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterDamageInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_MSC1[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLMonsterHitCharacterInfo
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FWTLMonsterHitCharacterInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_81Z4[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterHitMonsterInfo
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterHitMonsterInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_P2JU[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterHitCharacterInfo
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterHitCharacterInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_PMQT[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCurrentStateChangeInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLCurrentStateChangeInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_Z2ZX[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLBuildingSettings
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLBuildingSettings : public FWTLPacket
	{
	public:
		int16_t                                                    UpdateInterval;                                          // 0x0028(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXKZ[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLLoadAmmoInWeaponInfo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLLoadAmmoInWeaponInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_U0WP[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLUniteAllItemsInfo
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLUniteAllItemsInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_HTLV[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLUniteItemsInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLUniteItemsInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_85QV[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLSplitItemInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLSplitItemInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_C5R1[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLMoveItemsInfo
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLMoveItemsInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_VQYQ[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLServerShutdownInfo
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLServerShutdownInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_ZOPJ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLMonsterTransform
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLMonsterTransform : public FWTLPacket
	{
	public:
		int64_t                                                    MonsterID;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Timestamp;                                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0044(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterTransform
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterTransform : public FWTLPacket
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Timestamp;                                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PingCategory;                                            // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7PP[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0048(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0054(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterMapMarker
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterMapMarker : public FWTLPacket
	{
	public:
		uint32_t                                                   LocationID;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Type;                                                    // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2K9I[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Color;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0040(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOWT[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowOnMinimap;                                           // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CP27[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterCustomizationInfo
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLCharacterCustomizationInfo : public FWTLPacket
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLSex                                                    Sex;                                                     // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BodyType;                                                // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUOP[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLCharacterCustomizationRecord>            Parts;                                                   // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLStorageSlot
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLStorageSlot : public FWTLPacket
	{
	public:
		unsigned char                                              SlotNumber;                                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6IB[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ItemId;                                                  // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLStorageOrder
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLStorageOrder : public FWTLPacket
	{
	public:
		EWTLStorageType                                            StorageType;                                             // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7CWH[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   StorageID;                                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWTLStorageSlot>                             Slots;                                                   // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLBodyPartSlot
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLBodyPartSlot : public FWTLPacket
	{
	public:
		EWTLBodyPart                                               BodyPart;                                                // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NION[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ItemId;                                                  // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLIdentityStorage
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLIdentityStorage : public FWTLPacket
	{
	public:
		EWTLStorageType                                            Type;                                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQUT[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ID;                                                      // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLIdentityCommissionItem
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLIdentityCommissionItem : public FWTLPacket
	{
	public:
		uint32_t                                                   ShopID;                                                  // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               Type;                                                    // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82DP[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CommissionID;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLKeyValueThreeInt64Int64String
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLKeyValueThreeInt64Int64String : public FWTLPacket
	{
	public:
		uint64_t                                                   Key;                                                     // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Value1;                                                  // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value2;                                                  // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLKeyValuePairInt64String
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLKeyValuePairInt64String : public FWTLPacket
	{
	public:
		uint64_t                                                   Key;                                                     // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLKeyValuePairInt16String
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLKeyValuePairInt16String : public FWTLPacket
	{
	public:
		uint16_t                                                   Key;                                                     // 0x0028(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7SH[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Value;                                                   // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLIdentityItem
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLIdentityItem : public FWTLPacket
	{
	public:
		EWTLItemType                                               Type;                                                    // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUFV[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ID;                                                      // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLIdentityPair8
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLIdentityPair8 : public FWTLPacket
	{
	public:
		unsigned char                                              Value1;                                                  // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Value2;                                                  // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NQP[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLIdentity8
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLIdentity8 : public FWTLPacket
	{
	public:
		unsigned char                                              Value;                                                   // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YUG[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLIdentityPair16
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLIdentityPair16 : public FWTLPacket
	{
	public:
		uint16_t                                                   Value1;                                                  // 0x0028(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Value2;                                                  // 0x002A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Z69[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLIdentityPair32
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLIdentityPair32 : public FWTLPacket
	{
	public:
		uint32_t                                                   Value1;                                                  // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Value2;                                                  // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLIdentityFour64
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLIdentityFour64 : public FWTLPacket
	{
	public:
		uint64_t                                                   Value1;                                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Value2;                                                  // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Value3;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Value4;                                                  // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLIdentityThree64
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLIdentityThree64 : public FWTLPacket
	{
	public:
		uint64_t                                                   Value1;                                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Value2;                                                  // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Value3;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLIdentityPair64
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLIdentityPair64 : public FWTLPacket
	{
	public:
		uint64_t                                                   Value1;                                                  // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Value2;                                                  // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLIdentity64
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLIdentity64 : public FWTLPacket
	{
	public:
		uint64_t                                                   Value;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLServerInfo
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FWTLServerInfo : public FWTLPacket
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLVersionInfo                                     Version;                                                 // 0x0030(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FWTLShortVersionInfo                                ProtocolVersion;                                         // 0x0038(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_38ID[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLDateTime                                        StartTime;                                               // 0x0040(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    UpTime;                                                  // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldTime;                                               // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    TimeScale;                                               // 0x0054(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCHP[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLErrorInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLErrorInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_WVND[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLActivateTicketInfo
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FWTLActivateTicketInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_ZZ9B[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLGameServerShutdownInfo
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FWTLGameServerShutdownInfo : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_QQD1[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLGameServerShortInfo
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FWTLGameServerShortInfo : public FWTLPacket
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLGameServerType                                         Type;                                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLShortVersionInfo                                ProtocolVersion;                                         // 0x0031(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U9IG[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLVersionInfo                                     Version;                                                 // 0x0034(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FWTLVersionInfo                                     MinClientVersion;                                        // 0x003C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34KX[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IPAddress;                                               // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    MainPort;                                                // 0x0058(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    PingPort;                                                // 0x005A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GFP[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayersCount;                                            // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLGameServerInfo
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	struct FWTLGameServerInfo : public FWTLPacket
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLGameServerType                                         Type;                                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLShortVersionInfo                                ProtocolVersion;                                         // 0x0031(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AIXC[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLVersionInfo                                     Version;                                                 // 0x0034(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FWTLVersionInfo                                     MinClientVersion;                                        // 0x003C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8KT[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IPAddress;                                               // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    MainPort;                                                // 0x0058(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    PingPort;                                                // 0x005A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B29P[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6DW[0x30];                                  // 0x0080(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxPlayers;                                              // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayersCount;                                            // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Hash;                                                    // 0x00B8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLGameClientInfo
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FWTLGameClientInfo : public FWTLPacket
	{
	public:
		struct FWTLShortVersionInfo                                ProtocolVersion;                                         // 0x0028(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FWTLVersionInfo                                     Version;                                                 // 0x002A(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1QS[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   accountid;                                               // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TicketUID;                                               // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClientAuthorizationInfo
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FWTLClientAuthorizationInfo : public FWTLPacket
	{
	public:
		struct FWTLShortVersionInfo                                ProtocolVersion;                                         // 0x0028(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FWTLVersionInfo                                     Version;                                                 // 0x002A(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MPSR[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Login;                                                   // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLConnectionTest
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLConnectionTest : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_S637[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLPing
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLPing : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_7IAC[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLEvent
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FWTLEvent : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_RJQ0[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLEventHeader
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLEventHeader : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_O4HQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLResponse
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FWTLResponse : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_4FKA[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLRequest
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLRequest : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_LRT6[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLServerMessageHeader
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FWTLServerMessageHeader : public FWTLPacket
	{
	public:
		unsigned char                                              UnknownData_9KPS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLQuestState
	 * Size -> 0x0018
	 */
	struct FWTLQuestState
	{
	public:
		int32_t                                                    QuestID;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLQuestState                                             State;                                                   // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FA12[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLDateTime                                        LastChangeDate;                                          // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Active;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1J92[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLRandomMiningPoint
	 * Size -> 0x0014
	 */
	struct FWTLRandomMiningPoint
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Capacity;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLRangedWeaponFireAnimation
	 * Size -> 0x0018
	 */
	struct FWTLRangedWeaponFireAnimation
	{
	public:
		float                                                      MaxTime;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ElapsedTime;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LastValue;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MultiplierX;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MultiplierY;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.InlineTextImageStyleRow
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FInlineTextImageStyleRow : public FTableRowBase
	{
	public:
		struct FInlineTextImageStyle                               InlineTextImageStyle;                                    // 0x0008(0x0098) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.HyperlinkTextStyleRow
	 * Size -> 0x0500 (FullSize[0x0508] - InheritedSize[0x0008])
	 */
	struct FHyperlinkTextStyleRow : public FTableRowBase
	{
	public:
		struct FHyperlinkStyle                                     HyperlinkStyle;                                          // 0x0008(0x0500) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLScriptedEventInfo
	 * Size -> 0x0004
	 */
	struct FWTLScriptedEventInfo
	{
	public:
		EWTLScriptedEventMethodType                                Method;                                                  // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LR6L[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct WTL.WTLAnnounceEventScriptedEventInfo
	 * Size -> 0x001C (FullSize[0x0020] - InheritedSize[0x0004])
	 */
	struct FWTLAnnounceEventScriptedEventInfo : public FWTLScriptedEventInfo
	{
	public:
		EWTLServerEventType                                        EventType;                                               // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9MVR[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EventDescription;                                        // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventDuration;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ALO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLSpawnEnemyScriptedEventInfo
	 * Size -> 0x005C (FullSize[0x0060] - InheritedSize[0x0004])
	 */
	struct FWTLSpawnEnemyScriptedEventInfo : public FWTLScriptedEventInfo
	{
	public:
		float                                                      LifeSpan;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   EnemyId;                                                 // 0x0008(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K119[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EnemyAssetClass;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Count;                                                   // 0x0020(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinLevel;                                                // 0x0022(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxLevel;                                                // 0x0023(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXZ7[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Locations;                                               // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SpawnRange;                                              // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0K78[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLItemDropInfo>                            AdditionalLoot;                                          // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              CustomTag;                                               // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSpawnMonsterScriptedEventInfo
	 * Size -> 0x0044 (FullSize[0x0048] - InheritedSize[0x0004])
	 */
	struct FWTLSpawnMonsterScriptedEventInfo : public FWTLScriptedEventInfo
	{
	public:
		float                                                      LifeSpan;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   MonsterID;                                               // 0x0008(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Count;                                                   // 0x000A(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinLevel;                                                // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxLevel;                                                // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH3M[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Locations;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SpawnRange;                                              // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UUR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLItemDropInfo>                            AdditionalLoot;                                          // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              CustomTag;                                               // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSpawnObjectScriptedEventInfo
	 * Size -> 0x0034 (FullSize[0x0038] - InheritedSize[0x0004])
	 */
	struct FWTLSpawnObjectScriptedEventInfo : public FWTLScriptedEventInfo
	{
	public:
		float                                                      LifeSpan;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AssetClass;                                              // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Transforms;                                              // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              CustomTag;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLAdditionalLoot
	 * Size -> 0x0028
	 */
	struct FWTLAdditionalLoot
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRXW[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   ItemTypeID;                                              // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   MinCount;                                                // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   MaxCount;                                                // 0x0006(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MinCondition;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxCondition;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalChance;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_51U6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ModificationData;                                        // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.SecureFloat
	 * Size -> 0x0008
	 */
	struct FSecureFloat
	{
	public:
		uint64_t                                                   m_Value;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct WTL.SecureVector
	 * Size -> 0x0018
	 */
	struct FSecureVector
	{
	public:
		struct FSecureFloat                                        X;                                                       // 0x0000(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FSecureFloat                                        Y;                                                       // 0x0008(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FSecureFloat                                        Z;                                                       // 0x0010(0x0008) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.SecureVector2D
	 * Size -> 0x0010
	 */
	struct FSecureVector2D
	{
	public:
		struct FSecureFloat                                        X;                                                       // 0x0000(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FSecureFloat                                        Y;                                                       // 0x0008(0x0008) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLDriverInfo
	 * Size -> 0x0088
	 */
	struct FWTLDriverInfo
	{
	public:
		unsigned char                                              UnknownData_T650[0x88];                                  // 0x0000(0x0088) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLVoiceSettings
	 * Size -> 0x0008
	 */
	struct FWTLVoiceSettings
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZU5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Port;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLServerStatisticsMonsters
	 * Size -> 0x0108
	 */
	struct FWTLServerStatisticsMonsters
	{
	public:
		uint64_t                                                   Spawned;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Killed;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Alive;                                                   // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int32_t, uint64_t>                                    SpawnedByClass;                                          // 0x0018(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<int32_t, uint64_t>                                    KilledByClass;                                           // 0x0068(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<int32_t, uint64_t>                                    AliveByClass;                                            // 0x00B8(0x0050) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLServerStatisticsExperience
	 * Size -> 0x0010
	 */
	struct FWTLServerStatisticsExperience
	{
	public:
		uint64_t                                                   Total;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   MaxValue;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLServerStatisticsMoney
	 * Size -> 0x0010
	 */
	struct FWTLServerStatisticsMoney
	{
	public:
		uint64_t                                                   TotalProduced;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   TotalConsumed;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLServerStatisticsSlotMachines
	 * Size -> 0x0028
	 */
	struct FWTLServerStatisticsSlotMachines
	{
	public:
		uint64_t                                                   ActivationsCount;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   BetsMoney;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   RewardMoney;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ConsumedMoney;                                           // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   MaxReward;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLServerStatistics
	 * Size -> 0x0150
	 */
	struct FWTLServerStatistics
	{
	public:
		struct FWTLServerStatisticsMonsters                        Monsters;                                                // 0x0000(0x0108) Edit, NativeAccessSpecifierPublic
		struct FWTLServerStatisticsExperience                      Experience;                                              // 0x0108(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FWTLServerStatisticsMoney                           Money;                                                   // 0x0118(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FWTLServerStatisticsSlotMachines                    SlotMachines;                                            // 0x0128(0x0028) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLThrowingDeviceBeamSection
	 * Size -> 0x0010
	 */
	struct FWTLThrowingDeviceBeamSection
	{
	public:
		int32_t                                                    TrajectoryID;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NBYV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            ParticleComponent;                                       // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLDebugSuggestion
	 * Size -> 0x0018
	 */
	struct FWTLDebugSuggestion
	{
	public:
		EWTLDebugSuggestionType                                    Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5ZH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CharacterName;                                           // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSuggestion
	 * Size -> 0x0030
	 */
	struct FWTLSuggestion
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		class FText                                                DisplayedText;                                           // 0x0018(0x0018) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLQuestItemLockInfo
	 * Size -> 0x0018
	 */
	struct FWTLQuestItemLockInfo
	{
	public:
		EWTLItemType                                               Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNAT[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   TypeID;                                                  // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQPX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomizationName;                                       // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLBundleItem
	 * Size -> 0x0010
	 */
	struct FWTLBundleItem
	{
	public:
		uint64_t                                                   StoreItemID;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5P2B[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLSteamInventoryItem
	 * Size -> 0x0010
	 */
	struct FWTLSteamInventoryItem
	{
	public:
		unsigned char                                              UnknownData_NAMG[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLGiveItemInfo
	 * Size -> 0x0010
	 */
	struct FWTLGiveItemInfo
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AG6U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Condition;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLPrivateLootItemInfo
	 * Size -> 0x0018
	 */
	struct FWTLPrivateLootItemInfo
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLItemType                                               ItemType;                                                // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBX1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ItemId;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLEmotionAnimation
	 * Size -> 0x0020
	 */
	struct FWTLEmotionAnimation
	{
	public:
		int32_t                                                    EmotionTypeID;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EmotionID;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BlockCameraRotation;                                     // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HideUsableItem;                                          // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VCD[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        MaleMontage;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        FemaleMontage;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCraftObjectProcessRecord
	 * Size -> 0x0030
	 */
	struct FWTLCraftObjectProcessRecord
	{
	public:
		uint64_t                                                   UniqueId;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   CharacterID;                                             // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CraftItemID;                                             // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProductionTime;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProductionTimeLeft;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3C8X[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLMovementMemoryElement
	 * Size -> 0x0040
	 */
	struct FWTLMovementMemoryElement
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Delta;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1S07[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterMedicineEffect
	 * Size -> 0x0010
	 */
	struct FWTLCharacterMedicineEffect
	{
	public:
		float                                                      TimeLeft;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EffectID;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    MedicineID;                                              // 0x0008(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73DD[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.LipSyncData
	 * Size -> 0x0024
	 */
	struct FLipSyncData
	{
	public:
		float                                                      E;                                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FV;                                                      // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AI;                                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      L;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      O;                                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ETC;                                                     // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      U;                                                       // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WQ;                                                      // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MBP;                                                     // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSteamServerInfo
	 * Size -> 0x0068
	 */
	struct FWTLSteamServerInfo
	{
	public:
		unsigned char                                              UnknownData_ZD08[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCommissionItemTypeCount
	 * Size -> 0x0008
	 */
	struct FWTLCommissionItemTypeCount
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BFO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLBarterDealRequest
	 * Size -> 0x0048
	 */
	struct FWTLBarterDealRequest
	{
	public:
		struct FDateTime                                           RequestDate;                                             // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AWTLCharacter*                                       FromCharacter;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   FromCharacterID;                                         // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FromCharacterName;                                       // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AWTLCharacter*                                       ToCharacter;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ToCharacterID;                                           // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLAmmoCaliberStatInfo
	 * Size -> 0x0018
	 */
	struct FWTLAmmoCaliberStatInfo
	{
	public:
		int32_t                                                    DamageMin;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageMax;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPiercingMin;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArmorPiercingMax;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AccuracyMin;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AccuracyMax;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLWeaponStatInfo
	 * Size -> 0x000C
	 */
	struct FWTLWeaponStatInfo
	{
	public:
		int32_t                                                    MinDamage;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDamage;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DPS;                                                     // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLWeaponTypeStatInfo
	 * Size -> 0x0018
	 */
	struct FWTLWeaponTypeStatInfo
	{
	public:
		int32_t                                                    MinDamage;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDamage;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinAccuracy;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAccuracy;                                             // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinConditionDelta;                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxConditionDelta;                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanInviteInfo
	 * Size -> 0x0018
	 */
	struct FWTLClanInviteInfo
	{
	public:
		uint16_t                                                   ClanID;                                                  // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4U0[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SenderCharacterName;                                     // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCommissionListItemData
	 * Size -> 0x0030
	 */
	struct FWTLCommissionListItemData
	{
	public:
		EWTLItemType                                               Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW6W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ID;                                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   TypeID;                                                  // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0J3[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CommissionMinBuyCount;                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CommissionPrice;                                         // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           CommissionDate;                                          // 0x0020(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           CommissionExpireDate;                                    // 0x0028(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLGlobalLevelObjectRecord
	 * Size -> 0x0020
	 */
	struct FWTLGlobalLevelObjectRecord
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLGlobalLevelObjectType                                  Type;                                                    // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H3X1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    State;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKQ8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StateInfo;                                               // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLSlotMachineRecord
	 * Size -> 0x0008
	 */
	struct FWTLSlotMachineRecord
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Balance;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFortificationObjectRecord
	 * Size -> 0x00E8
	 */
	struct FWTLFortificationObjectRecord
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFortificationObjectType                                Type;                                                    // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EWSD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CharacterID;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   CharacterGroupID;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   CharacterClanID;                                         // 0x0018(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                CharacterFaction;                                        // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9WX[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x001C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlotCount;                                               // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6T5M[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   Condition;                                               // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Energy;                                                  // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLStorageContent                                  StorageContent;                                          // 0x0040(0x00A8) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLFortificationCaptureScoreRecord
	 * Size -> 0x0018
	 */
	struct FWTLFortificationCaptureScoreRecord
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                CharacterFaction;                                        // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3IH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    KillsCount;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeathsCount;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLLocationFortificationCommandCoreRecord
	 * Size -> 0x0028
	 */
	struct FWTLLocationFortificationCommandCoreRecord
	{
	public:
		int32_t                                                    CommandCoreID;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Energy;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastCaptureTime;                                         // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                ControlFaction;                                          // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4V0O[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLFortificationCaptureScoreRecord>         CaptureScore;                                            // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLLocationPlaceableStuffRecord
	 * Size -> 0x0058
	 */
	struct FWTLLocationPlaceableStuffRecord
	{
	public:
		uint64_t                                                   ItemId;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   StuffID;                                                 // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SGD[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   CharacterID;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   CharacterGroupID;                                        // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   CharacterClanID;                                         // 0x0030(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                CharacterFaction;                                        // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BSW[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0040(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Condition;                                               // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Energy;                                                  // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6C2E[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLLocationStorageRecord
	 * Size -> 0x00E8
	 */
	struct FWTLLocationStorageRecord
	{
	public:
		uint64_t                                                   CharacterID;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   CharacterGroupID;                                        // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   CharacterClanID;                                         // 0x0020(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLFaction                                                CharacterFaction;                                        // 0x0022(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODP0[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Position;                                                // 0x0024(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlotCount;                                               // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7CCA[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLStorageContent                                  Content;                                                 // 0x0040(0x00A8) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanStorageTab
	 * Size -> 0x00F8
	 */
	struct FWTLClanStorageTab
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ImageIndex;                                              // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FB7[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   Money;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWTLStorageContent                                  StorageContent;                                          // 0x0030(0x00A8) Edit, NativeAccessSpecifierPublic
		TArray<uint64_t>                                           CanPutClanPolicyGroups;                                  // 0x00D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint64_t>                                           CanTakeClanPolicyGroups;                                 // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLClanStorage
	 * Size -> 0x0030
	 */
	struct FWTLClanStorage
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NPCID;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ClanID;                                                  // 0x000C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFUQ[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWTLClanStorageTab>                          Tabs;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStorageContentChanged;                                 // 0x0020(0x0010) Edit, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLPrivateStorage
	 * Size -> 0x00C0
	 */
	struct FWTLPrivateStorage
	{
	public:
		int32_t                                                    NPCID;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlotCount;                                               // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PZF[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWTLStorageContent                                  StorageContent;                                          // 0x0008(0x00A8) Edit, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStorageContentChanged;                                 // 0x00B0(0x0010) Edit, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLLocationNameWithID
	 * Size -> 0x0020
	 */
	struct FWTLLocationNameWithID
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JNQJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0008(0x0018) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLWidgetWithOrder
	 * Size -> 0x0010
	 */
	struct FWTLWidgetWithOrder
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Order;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLM8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLDaytimeCubemapScenario
	 * Size -> 0x0020
	 */
	struct FWTLDaytimeCubemapScenario
	{
	public:
		class UTextureCube*                                        SourceCubemap;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureCube*                                        DestinationCubemap;                                      // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FromDayTime;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ToDayTime;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLDaytimeCubemapBlendType                                BlendType;                                               // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92A7[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCustomizationColorIngredient
	 * Size -> 0x000C
	 */
	struct FWTLCustomizationColorIngredient
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUOF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemTypeID;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLShortMovementInfo
	 * Size -> 0x0010
	 */
	struct FWTLShortMovementInfo
	{
	public:
		unsigned char                                              Yaw;                                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DGLV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize                                 Location;                                                // 0x0004(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterStateIndicatorTextureIdentity
	 * Size -> 0x0030
	 */
	struct FWTLCharacterStateIndicatorTextureIdentity
	{
	public:
		EWTLCharacterStateIndicatorType                            StateIndicatorType;                                      // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84RZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Texture[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct WTL.WTLCharacterEffectTextureIdentity
	 * Size -> 0x0030
	 */
	struct FWTLCharacterEffectTextureIdentity
	{
	public:
		EWTLCharacterEffectType                                    EffectType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_610G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Texture[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct WTL.WTLArenaSelectedEquipmentItem
	 * Size -> 0x0006
	 */
	struct FWTLArenaSelectedEquipmentItem
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXRY[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   ItemTypeID;                                              // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SlotNumber;                                              // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OUF[0x1];                                   // 0x0005(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLVisualItemCount
	 * Size -> 0x0010
	 */
	struct FWTLVisualItemCount
	{
	public:
		uint64_t                                                   ItemId;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemCountInNewSlot;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OldItemCount;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLComboBoxSubTypeOption
	 * Size -> 0x0020
	 */
	struct FWTLComboBoxSubTypeOption
	{
	public:
		class FText                                                SubTypeName;                                             // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		int16_t                                                    SubTypeNumber;                                           // 0x0018(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O0R8[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLExtractItemInfo
	 * Size -> 0x0018
	 */
	struct FWTLExtractItemInfo
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56B9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ItemId;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5C59[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLSellingItemInfo
	 * Size -> 0x0018
	 */
	struct FWTLSellingItemInfo
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FR3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ItemId;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOSZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLBuyItemInfo
	 * Size -> 0x0010
	 */
	struct FWTLBuyItemInfo
	{
	public:
		EWTLItemType                                               ItemType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RW3U[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   ItemTypeID;                                              // 0x0002(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Price;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PriceMultiplier;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.UpdatingReflestionCapture
	 * Size -> 0x0010
	 */
	struct FUpdatingReflestionCapture
	{
	public:
		class AReflectionCapture*                                  Object;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastUpdateLevelTime;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9HL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLFastAccessSlotBindPermissions
	 * Size -> 0x0030
	 */
	struct FWTLFastAccessSlotBindPermissions
	{
	public:
		TArray<EWTLWeaponType>                                     WeaponTypes;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EWTLMedicineType>                                   MedicineTypes;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EWTLStuffType>                                      StuffTypes;                                              // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCustomQuestRequirementState
	 * Size -> 0x0048
	 */
	struct FWTLCustomQuestRequirementState
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    NeedCount;                                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentCount;                                            // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseBitMaskForProgress;                                   // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MIV[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLEnemyNPCKillRequirementState
	 * Size -> 0x0028
	 */
	struct FWTLEnemyNPCKillRequirementState
	{
	public:
		int32_t                                                    EnemyNPCID;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UPBL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EnemyNPCName;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinLevel;                                                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxLevel;                                                // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGNQ[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NeedCount;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentCount;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6CA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLMonsterKillRequirementState
	 * Size -> 0x0028
	 */
	struct FWTLMonsterKillRequirementState
	{
	public:
		int32_t                                                    MonsterID;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9I1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MonsterName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinLevel;                                                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxLevel;                                                // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VZ9[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NeedCount;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentCount;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IF8Z[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLLanguageOption
	 * Size -> 0x0020
	 */
	struct FWTLLanguageOption
	{
	public:
		class FString                                              LanguageName;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LanguagePrefix;                                          // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLOptionsParameter
	 * Size -> 0x0030
	 */
	struct FWTLOptionsParameter
	{
	public:
		class FText                                                ParameterName;                                           // 0x0000(0x0018) NativeAccessSpecifierPublic
		class FString                                              ParameterPrefix;                                         // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHiddenForUser;                                        // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_13M6[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLRadialMenuEmotionsInfoArray
	 * Size -> 0x0010
	 */
	struct FWTLRadialMenuEmotionsInfoArray
	{
	public:
		TArray<struct FWTLRadialMenuEmotionInfo>                   RadialMenuEmotionsInfo;                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLUseMenuButtonInfo
	 * Size -> 0x0038
	 */
	struct FWTLUseMenuButtonInfo
	{
	public:
		EWTLUseMenuActionType                                      ActionType;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BA6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Object;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UFunctionName;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CustomButtonDescription;                                 // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLRadialMenuButton
	 * Size -> 0x0018
	 */
	struct FWTLRadialMenuButton
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9L48[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLPopupButtonInfo
	 * Size -> 0x0038
	 */
	struct FWTLPopupButtonInfo
	{
	public:
		class FText                                                ButtonName;                                              // 0x0000(0x0018) NativeAccessSpecifierPublic
		uint64_t                                                   ID;                                                      // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Object;                                                  // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UFunctionName;                                           // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLPopupDialogButtonInfo
	 * Size -> 0x0030
	 */
	struct FWTLPopupDialogButtonInfo
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) NativeAccessSpecifierPublic
		uint64_t                                                   ID;                                                      // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZYEV[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLMessageDialogButtonInfo
	 * Size -> 0x0058
	 */
	struct FWTLMessageDialogButtonInfo
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VKBG[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         TextColor;                                               // 0x0028(0x0028) NativeAccessSpecifierPublic
		bool                                                       IsSetTextColor;                                          // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YB4P[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLCharacterStateIndicatorTypeConfig
	 * Size -> 0x0090
	 */
	struct FWTLCharacterStateIndicatorTypeConfig
	{
	public:
		EWTLCharacterStateIndicatorType                            Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0SK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCharacterEffectTypeConfig
	 * Size -> 0x0090
	 */
	struct FWTLCharacterEffectTypeConfig
	{
	public:
		EWTLCharacterEffectType                                    Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UVK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         IconBrush;                                               // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCustomizationPartsLoadPermissions
	 * Size -> 0x0002
	 */
	struct FWTLCustomizationPartsLoadPermissions
	{
	public:
		EWTLCharacterCustomizationPart                             PartType;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPermissionToLoad;                                     // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLCustomizationRecord
	 * Size -> 0x0110
	 */
	struct FWTLCustomizationRecord
	{
	public:
		struct FWTLCharacterCustomizationRecord                    CustomizationRecord;                                     // 0x0000(0x0108) NativeAccessSpecifierPublic
		unsigned char                                              MaterialIndex;                                           // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9STH[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLHUDVisibleException
	 * Size -> 0x0010
	 */
	struct FWTLHUDVisibleException
	{
	public:
		class UWTLHUDWidgetBase*                                   FullscreenWidget;                                        // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWTLHUDWidgetBase*                                   ExceptionWidget;                                         // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.WTLHUDFullscreenWidget
	 * Size -> 0x0010
	 */
	struct FWTLHUDFullscreenWidget
	{
	public:
		class UWTLWidgetBase*                                      Widget;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLInputMode                                              InputMode;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasVisible;                                             // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9IC[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLInputSetting
	 * Size -> 0x0098
	 */
	struct FWTLInputSetting
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0008(0x0018) NativeAccessSpecifierPublic
		struct FKey                                                MainKey;                                                 // 0x0020(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMainKeySet;                                           // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQXX[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                AlternateKey;                                            // 0x0040(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAlternateKeySet;                                      // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAlternateKeyAllow;                                    // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TGA[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                DefaultMainKey;                                          // 0x0060(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                DefaultAlternateKey;                                     // 0x0078(0x0018) HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AxisScale;                                               // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLKeyCategory                                            Category;                                                // 0x0094(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMouseKeysCanBind;                                     // 0x0095(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3A96[0x2];                                   // 0x0096(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLTakenDamageRecord
	 * Size -> 0x0020
	 */
	struct FWTLTakenDamageRecord
	{
	public:
		struct FDateTime                                           LastDamageTime;                                          // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitCount;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageValue;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   GroupId;                                                 // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ClanID;                                                  // 0x0018(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HH1P[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.WTLWeaponTypeDamageModifier
	 * Size -> 0x0008
	 */
	struct FWTLWeaponTypeDamageModifier
	{
	public:
		EWTLWeaponType                                             WeaponType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WADV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageMultiplier;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.EnergyFieldDamageEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FEnergyFieldDamageEvent : public FDamageEvent
	{
	public:
		unsigned char                                              UnknownData_MCID[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.SuffocationDamageEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FSuffocationDamageEvent : public FDamageEvent
	{
	public:
		unsigned char                                              UnknownData_F8W9[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.MonsterDamageEvent
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FMonsterDamageEvent : public FDamageEvent
	{
	public:
		EWTLColliderType                                           ColliderType;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4G7[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArmorPiercingValue;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseArmor;                                                // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Critical;                                                // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LW8V[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.MedicineDamageEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FMedicineDamageEvent : public FDamageEvent
	{
	public:
		int16_t                                                    MedicineID;                                              // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85ID[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EffectID;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WTL.CharacterEffectDamageEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FCharacterEffectDamageEvent : public FDamageEvent
	{
	public:
		EWTLCharacterEffectType                                    EffectType;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOTD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WTL.SuicideDamageEvent
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FSuicideDamageEvent : public FDamageEvent
	{	};

	/**
	 * ScriptStruct WTL.MeleeDamageEvent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	struct FMeleeDamageEvent : public FPointDamageEvent
	{
	public:
		uint16_t                                                   WeaponTypeID;                                            // 0x00B0(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QK2B[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImpulseMultiplier;                                       // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Critical;                                                // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLColliderType                                           ColliderType;                                            // 0x00B9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseArmor;                                                // 0x00BA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FBU[0x1];                                   // 0x00BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArmorPiercingValue;                                      // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
