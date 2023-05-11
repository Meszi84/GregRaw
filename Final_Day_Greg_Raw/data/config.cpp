class CfgPatches
{
	class Final_Day_Greg_Raw
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Characters","DZ_Weapons_Firearms","DZ_Weapons_Magazines", "DZ_Gear_Containers", "DZ_Characters_Vests",};
	};
};
class CfgMods
{
	class Final_Day_Greg_Raw
	{
		dir = "Final_Day_Greg_Raw";
		picture = "Final_Day_Greg_Raw\data\icon\finaldaycloth.paa";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "Final_Day_Greg_Raw";
		author = "Predator";
		authorID = "";
		version = "1.6";
		extra = 0;
		type = "mod";
	};
};
class CfgVehicles
{
	class Clothing;	
	class HunterPants_ColorBase;
	class HuntingJacket_ColorBase;
	class BalaclavaMask_ColorBase;
	class BoonieHat_ColorBase;
	class CombatBoots_ColorBase;
	class TacticalGloves_ColorBase;
	class PlateCarrierVest;

	class FinalDayZ_Greg_Pants: HunterPants_ColorBase
	{
		scope=2;
		displayName="Greg Sniper Pants";
		descriptionShort="Final DayZ Greg Sniper Pants. Retextured by PREDATOR";	
		weight = 500;	
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
		hiddenSelectionsTextures[]=
		{
			"Final_Day_Greg_Raw\data\Greg_Hunterpants\Greg_Pants.paa",
			"Final_Day_Greg_Raw\data\Greg_Hunterpants\Greg_Pants.paa",
			"Final_Day_Greg_Raw\data\Greg_Hunterpants\Greg_Pants.paa"
		};		
	};

	class FinalDayZ_Greg_Jacket: HuntingJacket_ColorBase 
	{
		scope=2;
		displayName="Greg Sniper Jacket";
		descriptionShort="Final DayZ Greg Sniper Jacket. Retextured by PREDATOR";		
		weight = 500;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{"Final_Day_Greg_Raw\data\HuntingJacket\HuntingJacket.paa", "Final_Day_Greg_Raw\data\HuntingJacket\HuntingJacket.paa", "Final_Day_Greg_Raw\data\HuntingJacket\HuntingJacket.paa" };
	};

	class FinalDayZ_Greg_Balaclava: BalaclavaMask_ColorBase 
	{
		scope=2;
		itemSize[] = {2, 2};
		ragQuantity = 1;
		varWetMax = 1;
		heatIsolation = 1;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30, 25};
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		visibilityModifier = 0.85;
		weight = 116;
		displayName="Greg Sniper Balaclava";
		descriptionShort="Final DayZ Greg Sniper Balaclava. Retextured by PREDATOR";		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Final_Day_Greg_Raw\data\Balaclava\Balaclava.paa",
			"Final_Day_Greg_Raw\data\Balaclava\Balaclava.paa",
			"Final_Day_Greg_Raw\data\Balaclava\Balaclava.paa"
		};
	};

	class FinalDayZ_Greg_Booniehat: BoonieHat_ColorBase 
	{
		scope=2;
		displayName="Greg Sniper Booniehat";
		weight = 116;
		descriptionShort="Final DayZ Greg Sniper Booniehat. Retextured by PREDATOR";		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Final_Day_Greg_Raw\data\Headgear\Booniehat.paa",
			"Final_Day_Greg_Raw\data\Headgear\Booniehat.paa",
			"Final_Day_Greg_Raw\data\Headgear\Booniehat.paa"
		};
	};

	class FinalDayZ_Greg_Boots: CombatBoots_ColorBase 
	{
		scope=2;
		displayName="Greg Sniper Combatboots";
		descriptionShort="Final DayZ Greg Sniper Combatboots. Retextured by PREDATOR";		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Final_Day_Greg_Raw\data\Combatboots\Combatboots.paa",
			"Final_Day_Greg_Raw\data\Combatboots\Combatboots.paa",
			"Final_Day_Greg_Raw\data\Combatboots\Combatboots.paa"
		};
	};	

	class FinalDayZ_Greg_Gloves: TacticalGloves_ColorBase 
	{
		scope=2;
		displayName="Greg Sniper Tactical Gloves";
		descriptionShort="Final DayZ Greg Sniper TacticalGloves. Retextured by PREDATOR";		
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Final_Day_Greg_Raw\data\Gloves\TacticalGloves.paa",
			"Final_Day_Greg_Raw\data\Gloves\TacticalGloves.paa",
			"Final_Day_Greg_Raw\data\Gloves\TacticalGloves.paa"
		};
	};
	//PREDATOR
	class Predator_Gloves: TacticalGloves_ColorBase 
	{
		scope=2;
		displayName="Predator Tactical Gloves";
		descriptionShort="Final DayZ Best Predator Gloves";	
		heatIsolation = 1;
		varWetMax = 1;	
		ragQuantity = 1;
		weight = 116;
		randomQuantity = 4;
		visibilityModifier=0.7;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Final_Day_Greg_Raw\data\Predator\Tacticalgloves_Predator.paa",
			"Final_Day_Greg_Raw\data\Predator\Tacticalgloves_Predator.paa",
			"Final_Day_Greg_Raw\data\Predator\Tacticalgloves_Predator.paa"
		};
	};
	class Predator_Jacket: HuntingJacket_ColorBase 
	{
		scope=2;
		displayName="Predator Hunting Jacket";
		descriptionShort="Final DayZ Best Predator Jacket";	
		heatIsolation = 0.6;
		varWetMax = 1;	
		ragQuantity = 1;
		weight = 600;
		randomQuantity = 4;
		visibilityModifier=0.7;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Final_Day_Greg_Raw\data\Predator\PredatorJacket.paa",
			"Final_Day_Greg_Raw\data\Predator\PredatorJacket.paa",
			"Final_Day_Greg_Raw\data\Predator\PredatorJacket.paa"
		};
	};
	class Predator_Pants: HunterPants_ColorBase
	{
		scope=2;
		displayName="Predator Pants";
		descriptionShort="Final DayZ Best Predator Pants";	
		heatIsolation = 0.6;
		varWetMax = 1;	
		ragQuantity = 1;
		weight = 500;
		randomQuantity = 4;
		itemsCargoSize[]={6,4};
		visibilityModifier=0.7;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Final_Day_Greg_Raw\data\Predator\bdu_pants_predator.paa",
			"Final_Day_Greg_Raw\data\Predator\bdu_pants_predator.paa",
			"Final_Day_Greg_Raw\data\Predator\bdu_pants_predator.paa"
		};
	};
	class Predator_Balaclava: BalaclavaMask_ColorBase 
	{
		scope=2;
		displayName="Predator BalaclavaMask";
		descriptionShort="Final DayZ Best Predator BalaclavaMask";	
		weight = 100;
		itemSize[] = {2, 2};
		ragQuantity = 1;
		varWetMax = 1;
		heatIsolation = 0.8;
		repairableWithKits[] = {5, 2};
		repairCosts[] = {30, 25};
		headSelectionsToHide[] = {"Clipping_Balaclava"};
		visibilityModifier = 0.7;
		randomQuantity = 4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Final_Day_Greg_Raw\data\Predator\Balaclava_Predator.paa",
			"Final_Day_Greg_Raw\data\Predator\Balaclava_Predator.paa",
			"Final_Day_Greg_Raw\data\Predator\Balaclava_Predator.paa"
		};
	};
	class Predator_Boots: CombatBoots_ColorBase 
	{
		scope=2;
		displayName="Predator Combatboots";
		descriptionShort="Predator Best Combat boots";	
		heatIsolation = 1;
		varWetMax = 1;	
		ragQuantity = 1;
		weight = 300;
		randomQuantity = 4;	
		visibilityModifier=0.7;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Final_Day_Greg_Raw\data\Predator\Combatboots_Predator.paa",
			"Final_Day_Greg_Raw\data\Predator\Combatboots_Predator.paa",
			"Final_Day_Greg_Raw\data\Predator\Combatboots_Predator.paa"
		};
	};	
   class TacticalShirt_ColorBase;
	class TacticalShirt_EMR: TacticalShirt_ColorBase
	{
		scope=2;
		displayName = "MCB Tactical shirt";
		descriptionShort = "Predator";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\Final_Day_Greg_Raw\data\Emr\pcu5jacket_EMR_co.paa","\Final_Day_Greg_Raw\data\Emr\pcu5jacket_EMR_co.paa","\Final_Day_Greg_Raw\data\Emr\pcu5jacket_EMR_co.paa"};
	};
	class CargoPants_ColorBase;
	class TacticalPants_EMR: CargoPants_ColorBase
	{
		scope=2;
		displayName = "MCB Tactical pants";
		descriptionShort = "Predator";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\Final_Day_Greg_Raw\data\Emr\cargopants_EMR_co.paa","\Final_Day_Greg_Raw\data\Emr\cargopants_EMR_co.paa","\Final_Day_Greg_Raw\data\Emr\cargopants_EMR_co.paa"};
	};
	class TacticalGloves_ColorBase;
	class TacticalGloves_EMR: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "EMR Tactical Gloves";
		descriptionShort = "Predator";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\Final_Day_Greg_Raw\data\Emr\tacticalgloves_EMR_co.paa","\Final_Day_Greg_Raw\data\Emr\tacticalgloves_EMR_co.paa","\Final_Day_Greg_Raw\data\Emr\tacticalgloves_EMR_co.paa"};
	};
	class BaseballCap_ColorBase;
	class BaseballCap_EMR: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "EMR Baseball Cap";
		descriptionShort = "Predator";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\Final_Day_Greg_Raw\data\Emr\baseballcapii_emr_co.paa","\Final_Day_Greg_Raw\data\Emr\baseballcapii_emr_co.paa","\Final_Day_Greg_Raw\data\Emr\baseballcapii_emr_co.paa"};
	};
	//emr2
	class TacticalShirt_ColorBase;
	class TacticalShirt_EMR2: TacticalShirt_ColorBase
	{
		scope=2;
		displayName = "MCB Tactical shirt";
		descriptionShort = "Predator";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\Final_Day_Greg_Raw\data\Emr\pcu5jacket_EMR_co2.paa","\Final_Day_Greg_Raw\data\Emr\pcu5jacket_EMR_co2.paa","\Final_Day_Greg_Raw\data\Emr\pcu5jacket_EMR_co2.paa"};
	};
	class CargoPants_ColorBase;
	class TacticalPants_EMR2: CargoPants_ColorBase
	{
		scope=2;
		displayName = "MCB Tactical pants";
		descriptionShort = "Predator";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\Final_Day_Greg_Raw\data\Emr\cargopants_EMR_co2.paa","\Final_Day_Greg_Raw\data\Emr\cargopants_EMR_co2.paa","\Final_Day_Greg_Raw\data\Emr\cargopants_EMR_co2.paa"};
	};
	class TacticalGloves_ColorBase;
	class TacticalGloves_EMR2: TacticalGloves_ColorBase
	{
		scope=2;
		displayName = "EMR Tactical Gloves";
		descriptionShort = "Predator";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\Final_Day_Greg_Raw\data\Emr\tacticalgloves_EMR_co2.paa","\Final_Day_Greg_Raw\data\Emr\tacticalgloves_EMR_co2.paa","\Final_Day_Greg_Raw\data\Emr\tacticalgloves_EMR_co2.paa"};
	};
	class BaseballCap_ColorBase;
	class BaseballCap_EMR2: BaseballCap_ColorBase
	{
		scope=2;
		displayName = "EMR Baseball Cap";
		descriptionShort = "Predator";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\Final_Day_Greg_Raw\data\Emr\baseballcapii_emr_co2.paa","\Final_Day_Greg_Raw\data\Emr\baseballcapii_emr_co2.paa","\Final_Day_Greg_Raw\data\Emr\baseballcapii_emr_co2.paa"};
	};
				
};