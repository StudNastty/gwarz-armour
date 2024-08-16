class CfgPatches
{
	class NXT_Armor
	{
		requiredAddons[] = {"DZ_Data","DZ_Characters_Vests","DZ_Scripts","DZ_Characters","DZ_Characters_Backpacks","DZ_Characters_Pants","DZ_Characters_Tops","DZ_Characters_Gloves","DZ_Gear_Containers","DZ_Characters_Headgear","DZ_Characters_Masks","DZ_Characters_Shoes","DZ_Characters_Heads"};
		requiredVersion = 0.1;
		weapons[] = {};
		units[] = {"NXT_ThorVest_Black"};
	};
};
class CfgVehicles
{   
	class Inventory_Base;
	class Clothing_Base;
	class Clothing; 
	class NXT_ThorVest_Base: Clothing
	{
		scope = 2;
		descriptionShort = "T5 raid vest";
		model = "NXT_Armor\ThorVest\models\NXT_Thor_g.p3d";
		simulation = "clothing";
		vehicleClass = "Clothing";
		inventorySlot = "Vest";
		itemInfo[] = {"Clothing","Vest"};
		attachments[] = {};
		weight = 3500;
		itemSize[] = {4,4};
		quickBarBonus = 3;
		heatIsolation = 0.8;
		itemsCargoSize[] = {10,30};
		repairableWithKits[] = {2,3,5};
		repairCosts[] = {25,25,50};
		hiddenSelections[] = {"zbytek"};
		class ClothingTypes
		{
			male = "NXT_Armor\ThorVest\models\NXT_Thor_m.p3d";
			female = "NXT_Armor\ThorVest\models\NXT_Thor_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1,{"NXT_Armor\ThorVest\data\Thor.rvmat"}},{0.7,{"NXT_Armor\ThorVest\data\Thor.rvmat"}},{0.5,{"NXT_Armor\ThorVest\data\Thor.rvmat"}},{0.3,{"NXT_Armor\ThorVest\data\Thor.rvmat"}},{0,{"NXT_Armor\ThorVest\data\Thor.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.055;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.055;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.055;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.1;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "SmershVest_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "SmershVest_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NXT_ThorVest_Black: NXT_ThorVest_Base
	{
		scope = 2;
		displayName = "Heavy Thor Vest";
		hiddenSelections[] = {"zbytek"};
		descriptionShort = "T4";
		hiddenSelectionsTextures[] = {"NXT_Armor\ThorVest\data\Thor.paa","NXT_Armor\ThorVest\data\Thor.paa","NXT_Armor\ThorVest\data\Thor.paa"};
	};
};