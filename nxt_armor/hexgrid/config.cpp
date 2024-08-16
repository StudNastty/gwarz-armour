
#define _ARMA_

class CfgPatches
{
	class NXT_Armor
	{
		units[] = {"NXT_Hexgrid","NXT_Hexgrid_Test"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Vests","DZ_Weapons_Firearms"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class RifleCore;
	class Clothing: Clothing_Base{};
	class NXT_Hexgrid_Base: Clothing
	{
		scope = 0;
		model = "NXT_Armor\Hexgrid\models\Hexgrid_G.p3d";
		inventorySlot[] = {"Vest"};
		itemInfo[] = {"Clothing","Vest"};
		attachments[] = {"Shoulder1","Shoulder2"};
		weight = 7500;
		itemSize[] = {4,4};
		itemsCargoSize[] = {};
		absorbency = 0.1;
		heatIsolation = 0.8;
		repairableWithKits[] = {5,3};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"NXT_Armor\Hexgrid\data\Rvmat\Hexgrid.rvmat"};
		repairCosts[] = {30,25};
		class ClothingTypes
		{
			male = "NXT_Armor\Hexgrid\models\Hexgrid_M.p3d";
			female = "NXT_Armor\Hexgrid\models\Hexgrid_F.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLevels[] = {{1,{"NXT_Armor\Hexgrid\data\Rvmat\Hexgrid.rvmat"}},{0.7,{"NXT_Armor\Hexgrid\data\Rvmat\Hexgrid.rvmat"}},{0.5,{"NXT_Armor\Hexgrid\data\Rvmat\Hexgrid_damage.rvmat"}},{0.3,{"NXT_Armor\Hexgrid\data\Rvmat\Hexgrid_damage.rvmat"}},{0,{"NXT_Armor\Hexgrid\data\Rvmat\Hexgrid_destruct.rvmat"}}};
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
						damage = 0.095;
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
						damage = 0.23;
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
	};
	
	class NXT_Hexgrid: NXT_Hexgrid_Base
	{
		scope = 2;
		hiddenSelections[] = {"camo"};
		displayName = "Tactical Hexgrid Black ";
		descriptionShort = " |T5|   Imported By StudNastty";
		hiddenSelectionsTextures[] = {"NXT_Armor\Hexgrid\data\Paas\Hexgrid_co.paa","NXT_Armor\Hexgrid\data\Paas\Hexgrid_co.paa","NXT_Armor\Hexgrid\data\Paas\Hexgrid_co.paa"};
	};
	class NXT_Hexgrid_Test: NXT_Hexgrid_Base
	{
		scope = 2;
		displayName = "Test ";
		hiddenSelections[] = {"camo"};
		descriptionShort = " |T5|   Imported By StudNastty";
		hiddenSelectionsTextures[] = {"NXT_Armor\Hexgrid\data\Paas\Black.paa","NXT_Armor\Hexgrid\data\Paas\Black.paa","NXT_Armor\Hexgrid\data\Paas\Black.paa"};
	};
	class Rifle_Base: RifleCore
	{
		inventorySlot[] = {"Shoulder1","Shoulder2"};
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
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyShoulder1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder1";
		model = "NXT_Armor\Hexgrid\Proxy\Shoulder1.p3d";
	};
	class ProxyShoulder2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Shoulder2";
		model = "NXT_Armor\Hexgrid\Proxy\Shoulder2.p3d";
	};
};
