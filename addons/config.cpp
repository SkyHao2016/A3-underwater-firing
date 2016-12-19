class CfgMovesBasic
{
	class NoActions {};
	class Actions
	{
		class PistolStandActions: NoActions
		{
			startSwim = "AswmPercMrunSnonWpstDf";
			surfaceSwim = "AsswPercMrunSnonWpstDf";
			bottomSwim = "AbswPercMrunSnonWpstDf";
			startDive = "AdvePercMstpSnonWpstDnon";
			SurfaceDive = "AsdvPercMstpSnonWpstDnon";
			BottomDive = "AbdvPercMstpSnonWpstDnon";
		};
		class SwimmingActions: NoActions
		{
			PrimaryWeapon = "AswmPercMstpSnonWrflDnon";
			SecondaryWeapon = "AswmPercMstpSnonWpstDnon";
		};
		class DivingActions: NoActions
		{
			SecondaryWeapon = "AdvePercMstpSnonWpstDnon";
		};
		class DivingPistolActions: DivingActions
		{
			relax = "AdvePercMstpSnonWpstDnon_relax";
			stop = "AdvePercMstpSnonWpstDnon";
			default = "AdvePercMstpSnonWpstDnon";
			stopRelaxed = "AdvePercMstpSnonWpstDnon";
			turnL = "AdvePercMstpSnonWpstDnon_turnL";
			turnR = "AdvePercMstpSnonWpstDnon_turnR";
			putDown = "AdvePercMstpSnonWpstDnon_AdvePercMstpSnonWpstDnon_putDown";
			WalkF = "AdvePercMwlkSnonWpstDf";
			WalkLF = "AdvePercMwlkSnonWpstDfl";
			WalkRF = "AdvePercMwlkSnonWpstDfr";
			WalkL = "AdvePercMwlkSnonWpstDl";
			WalkR = "AdvePercMwlkSnonWpstDr";
			WalkLB = "AdvePercMwlkSnonWpstDbl";
			WalkRB = "AdvePercMwlkSnonWpstDbr";
			WalkB = "AdvePercMwlkSnonWpstDb";
			LimpF = "AdvePercMwlkSnonWpstDf";
			LimpLF = "AdvePercMwlkSnonWpstDfl";
			LimpRF = "AdvePercMwlkSnonWpstDfr";
			LimpL = "AdvePercMwlkSnonWpstDl";
			LimpR = "AdvePercMwlkSnonWpstDr";
			LimpLB = "AdvePercMwlkSnonWpstDbl";
			LimpRB = "AdvePercMwlkSnonWpstDbr";
			LimpB = "AdvePercMwlkSnonWpstDb";
			PlayerWalkF = "AdvePercMwlkSnonWpstDf";
			PlayerWalkLF = "AdvePercMwlkSnonWpstDfl";
			PlayerWalkRF = "AdvePercMwlkSnonWpstDfr";
			PlayerWalkL = "AdvePercMwlkSnonWpstDl";
			PlayerWalkR = "AdvePercMwlkSnonWpstDr";
			PlayerWalkLB = "AdvePercMwlkSnonWpstDbl";
			PlayerWalkRB = "AdvePercMwlkSnonWpstDbr";
			PlayerWalkB = "AdvePercMwlkSnonWpstDb";
			SlowF = "AdvePercMrunSnonWpstDf";
			SlowLF = "AdvePercMrunSnonWpstDfl";
			SlowRF = "AdvePercMrunSnonWpstDfr";
			SlowL = "AdvePercMrunSnonWpstDl";
			SlowR = "AdvePercMrunSnonWpstDr";
			SlowLB = "AdvePercMrunSnonWpstDbl";
			SlowRB = "AdvePercMrunSnonWpstDbr";
			SlowB = "AdvePercMrunSnonWpstDb";
			PlayerSlowF = "AdvePercMrunSnonWpstDf";
			PlayerSlowLF = "AdvePercMrunSnonWpstDfl";
			PlayerSlowRF = "AdvePercMrunSnonWpstDfr";
			PlayerSlowL = "AdvePercMrunSnonWpstDl";
			PlayerSlowR = "AdvePercMrunSnonWpstDr";
			PlayerSlowLB = "AdvePercMrunSnonWpstDbl";
			PlayerSlowRB = "AdvePercMrunSnonWpstDbr";
			PlayerSlowB = "AdvePercMrunSnonWpstDb";
			FastF = "AdvePercMsprSnonWpstDf";
			FastLF = "AdvePercMrunSnonWpstDfl";
			FastRF = "AdvePercMrunSnonWpstDfr";
			FastL = "AdvePercMrunSnonWpstDl";
			FastR = "AdvePercMrunSnonWpstDr";
			FastLB = "AdvePercMrunSnonWpstDbl";
			FastRB = "AdvePercMrunSnonWpstDbr";
			FastB = "AdvePercMrunSnonWpstDb";
			TactF = "AdvePercMtacSnonWpstDf";
			TactLF = "AdvePercMtacSnonWpstDfl";
			TactRF = "AdvePercMtacSnonWpstDfr";
			TactL = "AdvePercMtacSnonWpstDl";
			TactR = "AdvePercMtacSnonWpstDr";
			TactLB = "AdvePercMtacSnonWpstDbl";
			TactRB = "AdvePercMtacSnonWpstDbr";
			TactB = "AdvePercMtacSnonWpstDb";
			PlayerTactF = "AdvePercMtacSnonWpstDf";
			PlayerTactLF = "AdvePercMtacSnonWpstDfl";
			PlayerTactRF = "AdvePercMtacSnonWpstDfr";
			PlayerTactL = "AdvePercMtacSnonWpstDl";
			PlayerTactR = "AdvePercMtacSnonWpstDr";
			PlayerTactLB = "AdvePercMtacSnonWpstDbl";
			PlayerTactRB = "AdvePercMtacSnonWpstDbr";
			PlayerTactB = "AdvePercMtacSnonWpstDb";
			stopDive = "AmovPercMstpSrasWpstDnon";
			StartDive = "AdvePercMstpSnonWpstDnon";
			SurfaceDive = "AsdvPercMstpSnonWpstDnon";
			BottomDive = "AbdvPercMstpSnonWpstDnon";
			swimUp = "AdvePercMstpSnonWpstDnon_goup";
			swimDown = "AdvePercMstpSnonWpstDnon_goDown";
			GetInSDV = "AdvePercMstpSnonWpstDnon_GetInSDV";
			GetOutSDV = "AdvePercMstpSnonWpstDnon_GetOutSDV";
		};
		class DivingPistolActionsGoingOut: DivingPistolActions
		{
			upDegree = "ManPosGoingFromWater";
			Stop = "AmovPercMstpSrasWpstDnon";
			Combat = "AmovPercMstpSrasWpstDnon";
			Default = "AmovPercMstpSrasWpstDnon";
		};
		class DivingPistolActionsFastF: DivingPistolActions
		{
			StartDive = "AdvePercMsprSnonWpstDf";
			SurfaceDive = "AsdvPercMsprSnonWpstDf";
			BottomDive = "AbdvPercMsprSnonWpstDf";
		};
		class DivingPistolActionsRunF: DivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDf";
			SurfaceDive = "AsdvPercMrunSnonWpstDf";
			BottomDive = "AbdvPercMrunSnonWpstDf";
		};
		class DivingPistolActionsRunFL: DivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDfl";
			SurfaceDive = "AsdvPercMrunSnonWpstDfl";
			BottomDive = "AbdvPercMrunSnonWpstDfl";
		};
		class DivingPistolActionsRunFR: DivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDfr";
			SurfaceDive = "AsdvPercMrunSnonWpstDfr";
			BottomDive = "AbdvPercMrunSnonWpstDfr";
		};
		class DivingPistolActionsRunB: DivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDb";
			SurfaceDive = "AsdvPercMrunSnonWpstDb";
			BottomDive = "AbdvPercMrunSnonWpstDb";
		};
		class DivingPistolActionsRunBR: DivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDbr";
			SurfaceDive = "AsdvPercMrunSnonWpstDbr";
			BottomDive = "AbdvPercMrunSnonWpstDbr";
		};
		class DivingPistolActionsRunBL: DivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDbl";
			SurfaceDive = "AsdvPercMrunSnonWpstDbl";
			BottomDive = "AbdvPercMrunSnonWpstDbl";
		};
		class DivingPistolActionsRunL: DivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDl";
			SurfaceDive = "AsdvPercMrunSnonWpstDl";
			BottomDive = "AbdvPercMrunSnonWpstDl";
		};
		class DivingPistolActionsRunR: DivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDr";
			SurfaceDive = "AsdvPercMrunSnonWpstDr";
			BottomDive = "AbdvPercMrunSnonWpstDr";
		};
		class DivingPistolActionsWlkF: DivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDf";
			SurfaceDive = "AsdvPercMwlkSnonWpstDf";
			BottomDive = "AbdvPercMwlkSnonWpstDf";
		};
		class DivingPistolActionsWlkFL: DivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDfl";
			SurfaceDive = "AsdvPercMwlkSnonWpstDfl";
			BottomDive = "AbdvPercMwlkSnonWpstDfl";
		};
		class DivingPistolActionsWlkFR: DivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDfr";
			SurfaceDive = "AsdvPercMwlkSnonWpstDfr";
			BottomDive = "AbdvPercMwlkSnonWpstDfr";
		};
		class DivingPistolActionsWlkB: DivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDb";
			SurfaceDive = "AsdvPercMwlkSnonWpstDb";
			BottomDive = "AbdvPercMwlkSnonWpstDb";
		};
		class DivingPistolActionsWlkBR: DivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDbr";
			SurfaceDive = "AsdvPercMwlkSnonWpstDbr";
			BottomDive = "AbdvPercMwlkSnonWpstDbr";
		};
		class DivingPistolActionsWlkBL: DivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDbl";
			SurfaceDive = "AsdvPercMwlkSnonWpstDbl";
			BottomDive = "AbdvPercMwlkSnonWpstDbl";
		};
		class DivingPistolActionsWlkL: DivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDl";
			SurfaceDive = "AsdvPercMwlkSnonWpstDl";
			BottomDive = "AbdvPercMwlkSnonWpstDl";
		};
		class DivingPistolActionsWlkR: DivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDr";
			SurfaceDive = "AsdvPercMwlkSnonWpstDr";
			BottomDive = "AbdvPercMwlkSnonWpstDr";
		};
		class DivingPistolActionsTacF: DivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDf";
			SurfaceDive = "AsdvPercMtacSnonWpstDf";
			BottomDive = "AbdvPercMtacSnonWpstDf";
		};
		class DivingPistolActionsTacFL: DivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDfl";
			SurfaceDive = "AsdvPercMtacSnonWpstDfl";
			BottomDive = "AbdvPercMtacSnonWpstDfl";
		};
		class DivingPistolActionsTacFR: DivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDfr";
			SurfaceDive = "AsdvPercMtacSnonWpstDfr";
			BottomDive = "AbdvPercMtacSnonWpstDfr";
		};
		class DivingPistolActionsTacB: DivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDb";
			SurfaceDive = "AsdvPercMtacSnonWpstDb";
			BottomDive = "AbdvPercMtacSnonWpstDb";
		};
		class DivingPistolActionsTacBR: DivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDbr";
			SurfaceDive = "AsdvPercMtacSnonWpstDbr";
			BottomDive = "AbdvPercMtacSnonWpstDbr";
		};
		class DivingPistolActionsTacBL: DivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDbl";
			SurfaceDive = "AsdvPercMtacSnonWpstDbl";
			BottomDive = "AbdvPercMtacSnonWpstDbl";
		};
		class DivingPistolActionsTacL: DivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDl";
			SurfaceDive = "AsdvPercMtacSnonWpstDl";
			BottomDive = "AbdvPercMtacSnonWpstDl";
		};
		class DivingPistolActionsTacR: DivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDr";
			SurfaceDive = "AsdvPercMtacSnonWpstDr";
			BottomDive = "AbdvPercMtacSnonWpstDr";
		};

		class SurfaceDivingActions: NoActions
		{	
			SecondaryWeapon = "AsdvPercMstpSnonWpstDnon";
		};
		class SurfaceDivingPistolActions: SurfaceDivingActions
		{
			relax = "AsdvPercMstpSnonWpstDnon_relax";
			stop = "AsdvPercMstpSnonWpstDnon";
			Civil = "AsdvPercMstpSnonWnonDnon";
			default = "AsdvPercMstpSnonWpstDnon";
			stopRelaxed = "AsdvPercMstpSnonWpstDnon";
			turnL = "AsdvPercMstpSnonWpstDnon_turnL";
			turnR = "AsdvPercMstpSnonWpstDnon_turnR";
			putDown = "AsdvPercMstpSnonWpstDnon_AsdvPercMstpSnonWpstDnon_putDown";
			WalkF = "AsdvPercMwlkSnonWpstDf";
			WalkLF = "AsdvPercMwlkSnonWpstDfl";
			WalkRF = "AsdvPercMwlkSnonWpstDfr";
			WalkL = "AsdvPercMwlkSnonWpstDl";
			WalkR = "AsdvPercMwlkSnonWpstDr";
			WalkLB = "AsdvPercMwlkSnonWpstDbl";
			WalkRB = "AsdvPercMwlkSnonWpstDbr";
			WalkB = "AsdvPercMwlkSnonWpstDb";
			LimpF = "AsdvPercMwlkSnonWpstDf";
			LimpLF = "AsdvPercMwlkSnonWpstDfl";
			LimpRF = "AsdvPercMwlkSnonWpstDfr";
			LimpL = "AsdvPercMwlkSnonWpstDl";
			LimpR = "AsdvPercMwlkSnonWpstDr";
			LimpLB = "AsdvPercMwlkSnonWpstDbl";
			LimpRB = "AsdvPercMwlkSnonWpstDbr";
			LimpB = "AsdvPercMwlkSnonWpstDb";
			PlayerWalkF = "AsdvPercMwlkSnonWpstDf";
			PlayerWalkLF = "AsdvPercMwlkSnonWpstDfl";
			PlayerWalkRF = "AsdvPercMwlkSnonWpstDfr";
			PlayerWalkL = "AsdvPercMwlkSnonWpstDl";
			PlayerWalkR = "AsdvPercMwlkSnonWpstDr";
			PlayerWalkLB = "AsdvPercMwlkSnonWpstDbl";
			PlayerWalkRB = "AsdvPercMwlkSnonWpstDbr";
			PlayerWalkB = "AsdvPercMwlkSnonWpstDb";
			SlowF = "AsdvPercMrunSnonWpstDf";
			SlowLF = "AsdvPercMrunSnonWpstDfl";
			SlowRF = "AsdvPercMrunSnonWpstDfr";
			SlowL = "AsdvPercMrunSnonWpstDl";
			SlowR = "AsdvPercMrunSnonWpstDr";
			SlowLB = "AsdvPercMrunSnonWpstDbl";
			SlowRB = "AsdvPercMrunSnonWpstDbr";
			SlowB = "AsdvPercMrunSnonWpstDb";
			PlayerSlowF = "AsdvPercMrunSnonWpstDf";
			PlayerSlowLF = "AsdvPercMrunSnonWpstDfl";
			PlayerSlowRF = "AsdvPercMrunSnonWpstDfr";
			PlayerSlowL = "AsdvPercMrunSnonWpstDl";
			PlayerSlowR = "AsdvPercMrunSnonWpstDr";
			PlayerSlowLB = "AsdvPercMrunSnonWpstDbl";
			PlayerSlowRB = "AsdvPercMrunSnonWpstDbr";
			PlayerSlowB = "AsdvPercMrunSnonWpstDb";
			FastF = "AsdvPercMsprSnonWpstDf";
			FastLF = "AsdvPercMrunSnonWpstDfl";
			FastRF = "AsdvPercMrunSnonWpstDfr";
			FastL = "AsdvPercMrunSnonWpstDl";
			FastR = "AsdvPercMrunSnonWpstDr";
			FastLB = "AsdvPercMrunSnonWpstDbl";
			FastRB = "AsdvPercMrunSnonWpstDbr";
			FastB = "AsdvPercMrunSnonWpstDb";
			TactF = "AsdvPercMtacSnonWpstDf";
			TactLF = "AsdvPercMtacSnonWpstDfl";
			TactRF = "AsdvPercMtacSnonWpstDfr";
			TactL = "AsdvPercMtacSnonWpstDl";
			TactR = "AsdvPercMtacSnonWpstDr";
			TactLB = "AsdvPercMtacSnonWpstDbl";
			TactRB = "AsdvPercMtacSnonWpstDbr";
			TactB = "AsdvPercMtacSnonWpstDb";
			PlayerTactF = "AsdvPercMtacSnonWpstDf";
			PlayerTactLF = "AsdvPercMtacSnonWpstDfl";
			PlayerTactRF = "AsdvPercMtacSnonWpstDfr";
			PlayerTactL = "AsdvPercMtacSnonWpstDl";
			PlayerTactR = "AsdvPercMtacSnonWpstDr";
			PlayerTactLB = "AsdvPercMtacSnonWpstDbl";
			PlayerTactRB = "AsdvPercMtacSnonWpstDbr";
			PlayerTactB = "AsdvPercMtacSnonWpstDb";
			stopDive = "AmovPercMstpSrasWpstDnon";
			SurfaceDive = "AsdvPercMstpSnonWpstDnon";
			StartDive = "AdvePercMstpSnonWpstDnon";
			BottomDive = "AbdvPercMstpSnonWpstDnon";
			swimUp = "AsdvPercMstpSnonWpstDnon_goup";
			swimDown = "AsdvPercMstpSnonWpstDnon_goDown";
			GetInSDV = "AsdvPercMstpSnonWpstDnon_GetInSDV";
			GetOutSDV = "AsdvPercMstpSnonWpstDnon_GetOutSDV";
		};
		class SurfaceDivingPistolActionsGoingOut: SurfaceDivingPistolActions
		{
			upDegree = "ManPosGoingFromWater";
			Stop = "AmovPercMstpSrasWpstDnon";
			Combat = "AmovPercMstpSrasWpstDnon";
			Default = "AmovPercMstpSrasWpstDnon";
		};
		class SurfaceDivingPistolActionsFastF: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMsprSnonWpstDf";
			SurfaceDive = "AsdvPercMsprSnonWpstDf";
			BottomDive = "AbdvPercMsprSnonWpstDf";
		};
		class SurfaceDivingPistolActionsRunF: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDf";
			SurfaceDive = "AsdvPercMrunSnonWpstDf";
			BottomDive = "AbdvPercMrunSnonWpstDf";
		};
		class SurfaceDivingPistolActionsRunFL: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDfl";
			SurfaceDive = "AsdvPercMrunSnonWpstDfl";
			BottomDive = "AbdvPercMrunSnonWpstDfl";
		};
		class SurfaceDivingPistolActionsRunFR: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDfr";
			SurfaceDive = "AsdvPercMrunSnonWpstDfr";
			BottomDive = "AbdvPercMrunSnonWpstDfr";
		};
		class SurfaceDivingPistolActionsRunB: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDb";
			SurfaceDive = "AsdvPercMrunSnonWpstDb";
			BottomDive = "AbdvPercMrunSnonWpstDb";
		};
		class SurfaceDivingPistolActionsRunBR: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDbr";
			SurfaceDive = "AsdvPercMrunSnonWpstDbr";
			BottomDive = "AbdvPercMrunSnonWpstDbr";
		};
		class SurfaceDivingPistolActionsRunBL: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDbl";
			SurfaceDive = "AsdvPercMrunSnonWpstDbl";
			BottomDive = "AbdvPercMrunSnonWpstDbl";
		};
		class SurfaceDivingPistolActionsRunL: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDl";
			SurfaceDive = "AsdvPercMrunSnonWpstDl";
			BottomDive = "AbdvPercMrunSnonWpstDl";
		};
		class SurfaceDivingPistolActionsRunR: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDr";
			SurfaceDive = "AsdvPercMrunSnonWpstDr";
			BottomDive = "AbdvPercMrunSnonWpstDr";
		};
		class SurfaceDivingPistolActionsWlkF: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDf";
			SurfaceDive = "AsdvPercMwlkSnonWpstDf";
			BottomDive = "AbdvPercMwlkSnonWpstDf";
		};
		class SurfaceDivingPistolActionsWlkFL: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDfl";
			SurfaceDive = "AsdvPercMwlkSnonWpstDfl";
			BottomDive = "AbdvPercMwlkSnonWpstDfl";
		};
		class SurfaceDivingPistolActionsWlkFR: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDfr";
			SurfaceDive = "AsdvPercMwlkSnonWpstDfr";
			BottomDive = "AbdvPercMwlkSnonWpstDfr";
		};
		class SurfaceDivingPistolActionsWlkB: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDb";
			SurfaceDive = "AsdvPercMwlkSnonWpstDb";
			BottomDive = "AbdvPercMwlkSnonWpstDb";
		};
		class SurfaceDivingPistolActionsWlkBR: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDbr";
			SurfaceDive = "AsdvPercMwlkSnonWpstDbr";
			BottomDive = "AbdvPercMwlkSnonWpstDbr";
		};
		class SurfaceDivingPistolActionsWlkBL: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDbl";
			SurfaceDive = "AsdvPercMwlkSnonWpstDbl";
			BottomDive = "AbdvPercMwlkSnonWpstDbl";
		};
		class SurfaceDivingPistolActionsWlkL: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDl";
			SurfaceDive = "AsdvPercMwlkSnonWpstDl";
			BottomDive = "AbdvPercMwlkSnonWpstDl";
		};
		class SurfaceDivingPistolActionsWlkR: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDr";
			SurfaceDive = "AsdvPercMwlkSnonWpstDr";
			BottomDive = "AbdvPercMwlkSnonWpstDr";
		};
		class SurfaceDivingPistolActionsTacF: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDf";
			SurfaceDive = "AsdvPercMtacSnonWpstDf";
			BottomDive = "AbdvPercMtacSnonWpstDf";
		};
		class SurfaceDivingPistolActionsTacFL: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDfl";
			SurfaceDive = "AsdvPercMtacSnonWpstDfl";
			BottomDive = "AbdvPercMtacSnonWpstDfl";
		};
		class SurfaceDivingPistolActionsTacFR: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDfr";
			SurfaceDive = "AsdvPercMtacSnonWpstDfr";
			BottomDive = "AbdvPercMtacSnonWpstDfr";
		};
		class SurfaceDivingPistolActionsTacB: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDb";
			SurfaceDive = "AsdvPercMtacSnonWpstDb";
			BottomDive = "AbdvPercMtacSnonWpstDb";
		};
		class SurfaceDivingPistolActionsTacBR: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDbr";
			SurfaceDive = "AsdvPercMtacSnonWpstDbr";
			BottomDive = "AbdvPercMtacSnonWpstDbr";
		};
		class SurfaceDivingPistolActionsTacBL: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDbl";
			SurfaceDive = "AsdvPercMtacSnonWpstDbl";
			BottomDive = "AbdvPercMtacSnonWpstDbl";
		};
		class SurfaceDivingPistolActionsTacL: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDl";
			SurfaceDive = "AsdvPercMtacSnonWpstDl";
			BottomDive = "AbdvPercMtacSnonWpstDl";
		};
		class SurfaceDivingPistolActionsTacR: SurfaceDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDr";
			SurfaceDive = "AsdvPercMtacSnonWpstDr";
			BottomDive = "AbdvPercMtacSnonWpstDr";
		};

		class BottomDivingActions: NoActions
		{
			SecondaryWeapon = "AbdvPercMstpSnonWpstDnon";
		};
		class BottomDivingPistolActions: BottomDivingActions
		{
			relax = "AbdvPercMstpSnonWpstDnon_relax";
			stop = "AbdvPercMstpSnonWpstDnon";
			default = "AbdvPercMstpSnonWpstDnon";
			stopRelaxed = "AbdvPercMstpSnonWpstDnon";
			turnL = "AbdvPercMstpSnonWpstDnon_turnL";
			turnR = "AbdvPercMstpSnonWpstDnon_turnR";
			putDown = "AbdvPercMstpSnonWpstDnon_AbdvPercMstpSnonWpstDnon_putDown";
			WalkF = "AbdvPercMwlkSnonWpstDf";
			WalkLF = "AbdvPercMwlkSnonWpstDfl";
			WalkRF = "AbdvPercMwlkSnonWpstDfr";
			WalkL = "AbdvPercMwlkSnonWpstDl";
			WalkR = "AbdvPercMwlkSnonWpstDr";
			WalkLB = "AbdvPercMwlkSnonWpstDbl";
			WalkRB = "AbdvPercMwlkSnonWpstDbr";
			WalkB = "AbdvPercMwlkSnonWpstDb";
			LimpF = "AbdvPercMwlkSnonWpstDf";
			LimpLF = "AbdvPercMwlkSnonWpstDfl";
			LimpRF = "AbdvPercMwlkSnonWpstDfr";
			LimpL = "AbdvPercMwlkSnonWpstDl";
			LimpR = "AbdvPercMwlkSnonWpstDr";
			LimpLB = "AbdvPercMwlkSnonWpstDbl";
			LimpRB = "AbdvPercMwlkSnonWpstDbr";
			LimpB = "AbdvPercMwlkSnonWpstDb";
			PlayerWalkF = "AbdvPercMwlkSnonWpstDf";
			PlayerWalkLF = "AbdvPercMwlkSnonWpstDfl";
			PlayerWalkRF = "AbdvPercMwlkSnonWpstDfr";
			PlayerWalkL = "AbdvPercMwlkSnonWpstDl";
			PlayerWalkR = "AbdvPercMwlkSnonWpstDr";
			PlayerWalkLB = "AbdvPercMwlkSnonWpstDbl";
			PlayerWalkRB = "AbdvPercMwlkSnonWpstDbr";
			PlayerWalkB = "AbdvPercMwlkSnonWpstDb";
			SlowF = "AbdvPercMrunSnonWpstDf";
			SlowLF = "AbdvPercMrunSnonWpstDfl";
			SlowRF = "AbdvPercMrunSnonWpstDfr";
			SlowL = "AbdvPercMrunSnonWpstDl";
			SlowR = "AbdvPercMrunSnonWpstDr";
			SlowLB = "AbdvPercMrunSnonWpstDbl";
			SlowRB = "AbdvPercMrunSnonWpstDbr";
			SlowB = "AbdvPercMrunSnonWpstDb";
			PlayerSlowF = "AbdvPercMrunSnonWpstDf";
			PlayerSlowLF = "AbdvPercMrunSnonWpstDfl";
			PlayerSlowRF = "AbdvPercMrunSnonWpstDfr";
			PlayerSlowL = "AbdvPercMrunSnonWpstDl";
			PlayerSlowR = "AbdvPercMrunSnonWpstDr";
			PlayerSlowLB = "AbdvPercMrunSnonWpstDbl";
			PlayerSlowRB = "AbdvPercMrunSnonWpstDbr";
			PlayerSlowB = "AbdvPercMrunSnonWpstDb";
			FastF = "AbdvPercMsprSnonWpstDf";
			FastLF = "AbdvPercMrunSnonWpstDfl";
			FastRF = "AbdvPercMrunSnonWpstDfr";
			FastL = "AbdvPercMrunSnonWpstDl";
			FastR = "AbdvPercMrunSnonWpstDr";
			FastLB = "AbdvPercMrunSnonWpstDbl";
			FastRB = "AbdvPercMrunSnonWpstDbr";
			FastB = "AbdvPercMrunSnonWpstDb";
			TactF = "AbdvPercMtacSnonWpstDf";
			TactLF = "AbdvPercMtacSnonWpstDfl";
			TactRF = "AbdvPercMtacSnonWpstDfr";
			TactL = "AbdvPercMtacSnonWpstDl";
			TactR = "AbdvPercMtacSnonWpstDr";
			TactLB = "AbdvPercMtacSnonWpstDbl";
			TactRB = "AbdvPercMtacSnonWpstDbr";
			TactB = "AbdvPercMtacSnonWpstDb";
			PlayerTactF = "AbdvPercMtacSnonWpstDf";
			PlayerTactLF = "AbdvPercMtacSnonWpstDfl";
			PlayerTactRF = "AbdvPercMtacSnonWpstDfr";
			PlayerTactL = "AbdvPercMtacSnonWpstDl";
			PlayerTactR = "AbdvPercMtacSnonWpstDr";
			PlayerTactLB = "AbdvPercMtacSnonWpstDbl";
			PlayerTactRB = "AbdvPercMtacSnonWpstDbr";
			PlayerTactB = "AbdvPercMtacSnonWpstDb";
			stopDive = "AmovPercMstpSrasWpstDnon";
			StartDive = "AdvePercMstpSnonWpstDnon";
			SurfaceDive = "AsdvPercMstpSnonWpstDnon";
			BottomDive = "AbdvPercMstpSnonWpstDnon";
			swimUp = "AbdvPercMstpSnonWpstDnon_goup";
			swimDown = "AbdvPercMstpSnonWpstDnon_goDown";
			GetInSDV = "AbdvPercMstpSnonWpstDnon_GetInSDV";
			GetOutSDV = "AbdvPercMstpSnonWpstDnon_GetOutSDV";
		};
		class BottomDivingPistolActionsGoingOut: BottomDivingPistolActions
		{
			upDegree = "ManPosGoingFromWater";
			Stop = "AmovPercMstpSrasWpstDnon";
			Combat = "AmovPercMstpSrasWpstDnon";
			Default = "AmovPercMstpSrasWpstDnon";
		};
		class BottomDivingPistolActionsFastF: BottomDivingPistolActions
		{
			StartDive = "AdvePercMsprSnonWpstDf";
			SurfaceDive = "AsdvPercMsprSnonWpstDf";
			BottomDive = "AbdvPercMsprSnonWpstDf";
		};
		class BottomDivingPistolActionsRunF: BottomDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDf";
			SurfaceDive = "AsdvPercMrunSnonWpstDf";
			BottomDive = "AbdvPercMrunSnonWpstDf";
		};
		class BottomDivingPistolActionsRunFL: BottomDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDfl";
			SurfaceDive = "AsdvPercMrunSnonWpstDfl";
			BottomDive = "AbdvPercMrunSnonWpstDfl";
		};
		class BottomDivingPistolActionsRunFR: BottomDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDfr";
			SurfaceDive = "AsdvPercMrunSnonWpstDfr";
			BottomDive = "AbdvPercMrunSnonWpstDfr";
		};
		class BottomDivingPistolActionsRunB: BottomDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDb";
			SurfaceDive = "AsdvPercMrunSnonWpstDb";
			BottomDive = "AbdvPercMrunSnonWpstDb";
		};
		class BottomDivingPistolActionsRunBR: BottomDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDbr";
			SurfaceDive = "AsdvPercMrunSnonWpstDbr";
			BottomDive = "AbdvPercMrunSnonWpstDbr";
		};
		class BottomDivingPistolActionsRunBL: BottomDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDbl";
			SurfaceDive = "AsdvPercMrunSnonWpstDbl";
			BottomDive = "AbdvPercMrunSnonWpstDbl";
		};
		class BottomDivingPistolActionsRunL: BottomDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDl";
			SurfaceDive = "AsdvPercMrunSnonWpstDl";
			BottomDive = "AbdvPercMrunSnonWpstDl";
		};
		class BottomDivingPistolActionsRunR: BottomDivingPistolActions
		{
			StartDive = "AdvePercMrunSnonWpstDr";
			SurfaceDive = "AsdvPercMrunSnonWpstDr";
			BottomDive = "AbdvPercMrunSnonWpstDr";
		};
		class BottomDivingPistolActionsWlkF: BottomDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDf";
			SurfaceDive = "AsdvPercMwlkSnonWpstDf";
			BottomDive = "AbdvPercMwlkSnonWpstDf";
		};
		class BottomDivingPistolActionsWlkFL: BottomDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDfl";
			SurfaceDive = "AsdvPercMwlkSnonWpstDfl";
			BottomDive = "AbdvPercMwlkSnonWpstDfl";
		};
		class BottomDivingPistolActionsWlkFR: BottomDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDfr";
			SurfaceDive = "AsdvPercMwlkSnonWpstDfr";
			BottomDive = "AbdvPercMwlkSnonWpstDfr";
		};
		class BottomDivingPistolActionsWlkB: BottomDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDb";
			SurfaceDive = "AsdvPercMwlkSnonWpstDb";
			BottomDive = "AbdvPercMwlkSnonWpstDb";
		};
		class BottomDivingPistolActionsWlkBR: BottomDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDbr";
			SurfaceDive = "AsdvPercMwlkSnonWpstDbr";
			BottomDive = "AbdvPercMwlkSnonWpstDbr";
		};
		class BottomDivingPistolActionsWlkBL: BottomDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDbl";
			SurfaceDive = "AsdvPercMwlkSnonWpstDbl";
			BottomDive = "AbdvPercMwlkSnonWpstDbl";
		};
		class BottomDivingPistolActionsWlkL: BottomDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDl";
			SurfaceDive = "AsdvPercMwlkSnonWpstDl";
			BottomDive = "AbdvPercMwlkSnonWpstDl";
		};
		class BottomDivingPistolActionsWlkR: BottomDivingPistolActions
		{
			StartDive = "AdvePercMwlkSnonWpstDr";
			SurfaceDive = "AsdvPercMwlkSnonWpstDr";
			BottomDive = "AbdvPercMwlkSnonWpstDr";
		};
		class BottomDivingPistolActionsTacF: BottomDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDf";
			SurfaceDive = "AsdvPercMtacSnonWpstDf";
			BottomDive = "AbdvPercMtacSnonWpstDf";
		};
		class BottomDivingPistolActionsTacFL: BottomDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDfl";
			SurfaceDive = "AsdvPercMtacSnonWpstDfl";
			BottomDive = "AbdvPercMtacSnonWpstDfl";
		};
		class BottomDivingPistolActionsTacFR: BottomDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDfr";
			SurfaceDive = "AsdvPercMtacSnonWpstDfr";
			BottomDive = "AbdvPercMtacSnonWpstDfr";
		};
		class BottomDivingPistolActionsTacB: BottomDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDb";
			SurfaceDive = "AsdvPercMtacSnonWpstDb";
			BottomDive = "AbdvPercMtacSnonWpstDb";
		};
		class BottomDivingPistolActionsTacBR: BottomDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDbr";
			SurfaceDive = "AsdvPercMtacSnonWpstDbr";
			BottomDive = "AbdvPercMtacSnonWpstDbr";
		};
		class BottomDivingPistolActionsTacBL: BottomDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDbl";
			SurfaceDive = "AsdvPercMtacSnonWpstDbl";
			BottomDive = "AbdvPercMtacSnonWpstDbl";
		};
		class BottomDivingPistolActionsTacL: BottomDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDl";
			SurfaceDive = "AsdvPercMtacSnonWpstDl";
			BottomDive = "AbdvPercMtacSnonWpstDl";
		};
		class BottomDivingPistolActionsTacR: BottomDivingPistolActions
		{
			StartDive = "AdvePercMtacSnonWpstDr";
			SurfaceDive = "AsdvPercMtacSnonWpstDr";
			BottomDive = "AbdvPercMtacSnonWpstDr";
		};
	};
};
