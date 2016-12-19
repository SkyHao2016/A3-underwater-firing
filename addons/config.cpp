class CfgMovesBasic
{
	class NoActions {};
	class Actions
	{
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

class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	extended = "CfgExtendedAnimation";
	class States
	{
				class AmovPercMstpSrasWpstDnon {};
		class AmovPercMwlkSrasWpstDf_AdvePercMrunSnonWnonDf: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			file = "\A3\anims_f\data\Anim\sdr\mov\erc\wlk\ras\rfl\AmovPercMwlkSrasWpstDf_AdvePercMrunSnonWpstDf";
			interpolationSpeed = 7;
			interpolationRestart = 2;
			looped = 0;
			soundEdge[] = {0.5};
			duty = 0.06;
			disableWeapons = 1;
			limitGunMovement = 0;
			soundOverride = "swim";
			soundEnabled = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			canPullTrigger = 0;
			speed = 2.25;
			ConnectTo[] = {"AdvePercMrunSnonWnonDf",0.02};
			InterpolateTo[] = {"Unconscious",0.1,"AdvePercMstpSnonWnonDnon",0.02};
		};
		class AmovPercMwlkSnonWnonDf_AdvePercMrunSnonWnonDf: AmovPercMwlkSrasWpstDf_AdvePercMrunSnonWnonDf
		{
			file = "\A3\anims_f\data\Anim\sdr\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDf_AdvePercMrunSnonWnonDf";
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class AidlPercMstpSrasWpstDnon_G0S {};
		class AdvePercMstpSnonWpstDnon: AidlPercMstpSrasWpstDnon_G0S
		{
			variantsAI[] = {};
			actions = "DivingRifleActions";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon";
			InterpolationSpeed = 2.5;
			speed = 0.08;
			static = 1;
			relSpeedMin = 0.5;
			soundEdge[] = {0.5};
			legs = "legsNo";
			limitGunMovement = 1;
			soundOverride = "swim";
			soundEnabled = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mnon.p3d";
			aimPrecision = 2;
			ConnectTo[] = {"AdvePercMstpSnonWpstDnon",0.02,"AdvePercMstpSnonWpstDnon_turnL",0.05,"AdvePercMstpSnonWpstDnon_turnR",0.05};
			InterpolateTo[] = {"AdvePercMstpSnonWpstDnon_turnL",0.05,"AdvePercMstpSnonWpstDnon_turnR",0.05,"AdvePercMrunSnonWpstDf",0.02,"AdvePercMrunSnonWpstDfr",0.02,"AdvePercMrunSnonWpstDfl",0.02,"AdvePercMrunSnonWpstDb",0.02,"AdvePercMrunSnonWpstDbr",0.02,"AdvePercMrunSnonWpstDbl",0.02,"AdvePercMrunSnonWpstDr",0.02,"AdvePercMrunSnonWpstDl",0.02,"AdvePercMwlkSnonWpstDf",0.02,"AdvePercMwlkSnonWpstDfr",0.02,"AdvePercMwlkSnonWpstDfl",0.02,"AdvePercMwlkSnonWpstDb",0.02,"AdvePercMwlkSnonWpstDbr",0.02,"AdvePercMwlkSnonWpstDbl",0.02,"AdvePercMwlkSnonWpstDr",0.02,"AdvePercMwlkSnonWpstDl",0.02,"AdvePercMtacSnonWpstDf",0.02,"AdvePercMtacSnonWpstDfr",0.02,"AdvePercMtacSnonWpstDfl",0.02,"AdvePercMtacSnonWpstDb",0.02,"AdvePercMtacSnonWpstDbr",0.02,"AdvePercMtacSnonWpstDbl",0.02,"AdvePercMtacSnonWpstDr",0.02,"AdvePercMtacSnonWpstDl",0.02,"AdvePercMsprSnonWpstDf",0.02,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon_goup",0.02,"AdvePercMstpSnonWpstDnon_godown",0.02,"AdvePercMstpSnonWpstDnon_AdvePercMstpSnonWpstDnon_putDown",0.02,"AmovPknlMstpSrasWpstDnon",0.04,"AmovPknlMstpSlowWpstDnon",0.04,"AdvePercMstpSnonWpstDnon_relax",0.1,"Unconscious",0.1};
			enableBinocular = 0;
		};
		class AdvePercMstpSnonWpstDnon_AdvePercMstpSnonWpstDnon_putDown: AdvePercMstpSnonWpstDnon
		{
			looped = 0;
			static = 1;
			relSpeedMin = 0.5;
			canBlendStep = 0;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_invin";
			speed = 1.63636;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			leftHandIKCurve[] = {0,1,0.3,0};
			ConnectTo[] = {"AdvePercMstpSnonWpstDnon_putDown_AdvePercMstpSnonWpstDnon",0.02};
			InterpolateTo[] = {"Unconscious",0.01};
		};
		class AdvePercMstpSnonWpstDnon_putDown_AdvePercMstpSnonWpstDnon: AdvePercMstpSnonWpstDnon
		{
			looped = 0;
			static = 1;
			relSpeedMin = 0.5;
			canBlendStep = 0;
			minPlayTime = 0.75;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_invout";
			speed = 0.470588;
			leftHandIKCurve[] = {0.8,0,1,1};
		};
		class AdvePercMstpSnonWpstDnon_relax: AdvePercMstpSnonWpstDnon
		{
			speed = -5;
			ConnectTo[] = {"AdvePercMstpSnonWpstDnon",10.1};
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class AdvePercMstpSnonWpstDnon_GetInSDV: AdvePercMstpSnonWpstDnon
		{
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\non\AdvePercMstpSnonWnonDnon_GetInSDV";
			speed = 0.32;
			duty = 0.5;
			static = 1;
			relSpeedMin = 0.5;
			ConnectTo[] = {"AdvePercMstpSnonWpstDnon",0.2};
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class AdvePercMstpSnonWpstDnon_GetOutSDV: AdvePercMstpSnonWpstDnon
		{
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\non\AdvePercMstpSnonWnonDnon_GetOutSDV";
			speed = 0.32;
			duty = 0.5;
			static = 1;
			relSpeedMin = 0.5;
			ConnectTo[] = {"AdvePercMstpSnonWpstDnon",0.2};
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class AdvePercMstpSnonWpstDnon_goup: AdvePercMstpSnonWpstDnon
		{
			stamina = -0.1;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_goup";
			speed = 0.6;
			duty = 0.6;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdvePercMstpSnonWpstDnon",0.2,"Unconscious",0.1,"AsdvPercMstpSnonWpstDnon",0.2,"AbdvPercMstpSnonWpstDnon",0.2,"AsdvPercMstpSnonWpstDnon_goup",0.1,"AbdvPercMstpSnonWpstDnon_goup",0.1};
		};
		class AdvePercMstpSnonWpstDnon_godown: AdvePercMstpSnonWpstDnon
		{
			stamina = -0.1;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_godown";
			speed = 0.8;
			duty = 1.0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdvePercMstpSnonWpstDnon",0.2,"Unconscious",0.1,"AbdvPercMstpSnonWpstDnon",0.2,"AsdvPercMstpSnonWpstDnon",0.2,"AsdvPercMstpSnonWpstDnon_godown",0.1,"AbdvPercMstpSnonWpstDnon_godown",0.1};
		};
		class AmovPercMwlkSrasWpstDf_AdvePercMrunSnonWpstDf: AmovPercMstpSrasWpstDnon
		{
			variantsPlayer[] = {};
			variantsAI[] = {};
			file = "\A3\anims_f\data\Anim\sdr\mov\erc\wlk\ras\rfl\AmovPercMwlkSrasWpstDf_AdvePercMrunSnonWpstDf";
			interpolationSpeed = 7;
			interpolationRestart = 2;
			looped = 0;
			soundEdge[] = {0.5};
			duty = 0.06;
			disableWeapons = 1;
			limitGunMovement = 0;
			soundOverride = "swim";
			soundEnabled = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			canPullTrigger = 0;
			speed = 2.25;
			ConnectTo[] = {"AdvePercMrunSnonWpstDf",0.02};
			InterpolateTo[] = {"Unconscious",0.1,"AdvePercMstpSnonWpstDnon",0.02};
		};
		class AdvePercMstpSnonWpstDnon_turnL: AdvePercMstpSnonWpstDnon
		{
			speed = 0.171429;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = -0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMstpSnonWpstDnon",0.05,"AsdvPercMstpSnonWpstDnon_turnL",0.05,"AbdvPercMstpSnonWpstDnon_turnL",0.05};
		};
		class AdvePercMstpSnonWpstDnon_turnR: AdvePercMstpSnonWpstDnon
		{
			speed = 0.171429;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = -0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMstpSnonWpstDnon",0.05,"AsdvPercMstpSnonWpstDnon_turnR",0.05,"AbdvPercMstpSnonWpstDnon_turnR",0.05};
		};
		class AdvePercMwlkSnonWpstDf: AdvePercMstpSnonWpstDnon
		{
			aimPrecision = 4.0;
			stamina = -0.1;
			limitGunMovement = 0;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			actions = "DivingRifleActionsWlkF";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDf";
			speed = 0.122414;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = -0.2;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMsprSnonWpstDf",0.02,"AdvePercMrunSnonWpstDf",0.02,"AdvePercMtacSnonWpstDf",0.02,"AdvePercMwlkSnonWpstDfr",0.02,"AdvePercMwlkSnonWpstDfl",0.02,"AdvePercMwlkSnonWpstDl",0.02,"AdvePercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDf",0.02,"AsdvPercMwlkSnonWpstDf",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMwlkSnonWpstDfr: AdvePercMwlkSnonWpstDf
		{
			actions = "DivingRifleActionsWlkFR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfr";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMrunSnonWpstDfr",0.02,"AdvePercMtacSnonWpstDfr",0.02,"AdvePercMwlkSnonWpstDf",0.02,"AdvePercMwlkSnonWpstDfl",0.02,"AdvePercMwlkSnonWpstDl",0.02,"AdvePercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDfr",0.02,"AsdvPercMwlkSnonWpstDfr",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMwlkSnonWpstDfl: AdvePercMwlkSnonWpstDf
		{
			actions = "DivingRifleActionsWlkFL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfl";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMrunSnonWpstDfl",0.02,"AdvePercMtacSnonWpstDfl",0.02,"AdvePercMwlkSnonWpstDf",0.02,"AdvePercMwlkSnonWpstDfr",0.02,"AdvePercMwlkSnonWpstDl",0.02,"AdvePercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDfl",0.02,"AsdvPercMwlkSnonWpstDfl",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMwlkSnonWpstDb: AdvePercMwlkSnonWpstDf
		{
			leftHandIKCurve[] = {0};
			actions = "DivingRifleActionsWlkB";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDb";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMrunSnonWpstDb",0.02,"AdvePercMtacSnonWpstDb",0.02,"AdvePercMwlkSnonWpstDbr",0.02,"AdvePercMwlkSnonWpstDbl",0.02,"AdvePercMwlkSnonWpstDl",0.02,"AdvePercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDb",0.02,"AsdvPercMwlkSnonWpstDb",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMwlkSnonWpstDbr: AdvePercMwlkSnonWpstDb
		{
			actions = "DivingRifleActionsWlkBR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbr";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMrunSnonWpstDbr",0.02,"AdvePercMtacSnonWpstDbr",0.02,"AdvePercMwlkSnonWpstDb",0.02,"AdvePercMwlkSnonWpstDbl",0.02,"AdvePercMwlkSnonWpstDl",0.02,"AdvePercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDbr",0.02,"AsdvPercMwlkSnonWpstDbr",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMwlkSnonWpstDbl: AdvePercMwlkSnonWpstDb
		{
			actions = "DivingRifleActionsWlkBL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbl";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMrunSnonWpstDbl",0.02,"AdvePercMtacSnonWpstDbl",0.02,"AdvePercMwlkSnonWpstDb",0.02,"AdvePercMwlkSnonWpstDbr",0.02,"AdvePercMwlkSnonWpstDl",0.02,"AdvePercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDbl",0.02,"AsdvPercMwlkSnonWpstDbl",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMwlkSnonWpstDl: AdvePercMwlkSnonWpstDf
		{
			actions = "DivingRifleActionsWlkL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDl";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMrunSnonWpstDl",0.02,"AdvePercMtacSnonWpstDl",0.02,"AdvePercMwlkSnonWpstDfl",0.02,"AdvePercMwlkSnonWpstDbl",0.02,"AdvePercMwlkSnonWpstDl",0.02,"AdvePercMwlkSnonWpstDf",0.02,"AbdvPercMwlkSnonWpstDl",0.02,"AsdvPercMwlkSnonWpstDl",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMwlkSnonWpstDr: AdvePercMwlkSnonWpstDf
		{
			actions = "DivingRifleActionsWlkR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDr";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMrunSnonWpstDr",0.02,"AdvePercMtacSnonWpstDr",0.02,"AdvePercMwlkSnonWpstDfr",0.02,"AdvePercMwlkSnonWpstDbr",0.02,"AdvePercMwlkSnonWpstDr",0.02,"AdvePercMwlkSnonWpstDf",0.02,"AbdvPercMwlkSnonWpstDr",0.02,"AsdvPercMwlkSnonWpstDr",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMtacSnonWpstDf: AdvePercMstpSnonWpstDnon
		{
			aimPrecision = 4.0;
			limitGunMovement = 0;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			actions = "DivingRifleActionsTacF";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDf";
			speed = 0.122414;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = -0.2;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMsprSnonWpstDf",0.02,"AdvePercMwlkSnonWpstDf",0.02,"AdvePercMrunSnonWpstDf",0.02,"AdvePercMtacSnonWpstDfr",0.02,"AdvePercMtacSnonWpstDfl",0.02,"AdvePercMtacSnonWpstDl",0.02,"AdvePercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDf",0.02,"AsdvPercMtacSnonWpstDf",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMtacSnonWpstDfr: AdvePercMtacSnonWpstDf
		{
			actions = "DivingRifleActionsTacFR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfr";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDfr",0.02,"AdvePercMrunSnonWpstDfr",0.02,"AdvePercMtacSnonWpstDf",0.02,"AdvePercMtacSnonWpstDfl",0.02,"AdvePercMtacSnonWpstDl",0.02,"AdvePercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDfr",0.02,"AsdvPercMtacSnonWpstDfr",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMtacSnonWpstDfl: AdvePercMtacSnonWpstDf
		{
			actions = "DivingRifleActionsTacFL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfl";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDfl",0.02,"AdvePercMrunSnonWpstDfl",0.02,"AdvePercMtacSnonWpstDf",0.02,"AdvePercMtacSnonWpstDfr",0.02,"AdvePercMtacSnonWpstDl",0.02,"AdvePercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDfl",0.02,"AsdvPercMtacSnonWpstDfl",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMtacSnonWpstDb: AdvePercMtacSnonWpstDf
		{
			leftHandIKCurve[] = {0};
			actions = "DivingRifleActionsTacB";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDb";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDb",0.02,"AdvePercMrunSnonWpstDb",0.02,"AdvePercMtacSnonWpstDbr",0.02,"AdvePercMtacSnonWpstDbl",0.02,"AdvePercMtacSnonWpstDl",0.02,"AdvePercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDb",0.02,"AsdvPercMtacSnonWpstDb",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMtacSnonWpstDbr: AdvePercMtacSnonWpstDb
		{
			actions = "DivingRifleActionsTacBR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbr";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDbr",0.02,"AdvePercMrunSnonWpstDbr",0.02,"AdvePercMtacSnonWpstDb",0.02,"AdvePercMtacSnonWpstDbl",0.02,"AdvePercMtacSnonWpstDl",0.02,"AdvePercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDbr",0.02,"AsdvPercMtacSnonWpstDbr",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMtacSnonWpstDbl: AdvePercMtacSnonWpstDb
		{
			actions = "DivingRifleActionsTacBL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbl";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDbl",0.02,"AdvePercMrunSnonWpstDbl",0.02,"AdvePercMtacSnonWpstDb",0.02,"AdvePercMtacSnonWpstDbr",0.02,"AdvePercMtacSnonWpstDl",0.02,"AdvePercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDbl",0.02,"AsdvPercMtacSnonWpstDbl",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMtacSnonWpstDl: AdvePercMtacSnonWpstDf
		{
			actions = "DivingRifleActionsTacL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDl";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDl",0.02,"AdvePercMrunSnonWpstDl",0.02,"AdvePercMtacSnonWpstDfl",0.02,"AdvePercMtacSnonWpstDbl",0.02,"AdvePercMtacSnonWpstDl",0.02,"AdvePercMtacSnonWpstDf",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMtacSnonWpstDr: AdvePercMtacSnonWpstDf
		{
			actions = "DivingRifleActionsTacR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDr";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDr",0.02,"AdvePercMrunSnonWpstDr",0.02,"AdvePercMtacSnonWpstDfr",0.02,"AdvePercMtacSnonWpstDbr",0.02,"AdvePercMtacSnonWpstDr",0.02,"AdvePercMtacSnonWpstDf",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMrunSnonWpstDf: AdvePercMstpSnonWpstDnon
		{
			aimPrecision = 4.0;
			stamina = -0.1;
			limitGunMovement = 0;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			actions = "DivingRifleActionsRunF";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDf";
			speed = 0.122414;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = 0.6;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMsprSnonWpstDf",0.02,"AdvePercMwlkSnonWpstDf",0.02,"AdvePercMtacSnonWpstDf",0.02,"AdvePercMrunSnonWpstDfr",0.02,"AdvePercMrunSnonWpstDfl",0.02,"AdvePercMrunSnonWpstDl",0.02,"AdvePercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDf",0.02,"AsdvPercMrunSnonWpstDf",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMrunSnonWpstDfr: AdvePercMrunSnonWpstDf
		{
			actions = "DivingRifleActionsRunFR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfr";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDfr",0.02,"AdvePercMtacSnonWpstDfr",0.02,"AdvePercMrunSnonWpstDf",0.02,"AdvePercMrunSnonWpstDfl",0.02,"AdvePercMrunSnonWpstDl",0.02,"AdvePercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDfr",0.02,"AsdvPercMrunSnonWpstDfr",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMrunSnonWpstDfl: AdvePercMrunSnonWpstDf
		{
			actions = "DivingRifleActionsRunFL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfl";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDfl",0.02,"AdvePercMtacSnonWpstDfl",0.02,"AdvePercMrunSnonWpstDf",0.02,"AdvePercMrunSnonWpstDfr",0.02,"AdvePercMrunSnonWpstDl",0.02,"AdvePercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDfl",0.02,"AsdvPercMrunSnonWpstDfl",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMrunSnonWpstDb: AdvePercMrunSnonWpstDf
		{
			leftHandIKCurve[] = {0};
			actions = "DivingRifleActionsRunB";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDb";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDb",0.02,"AdvePercMtacSnonWpstDb",0.02,"AdvePercMrunSnonWpstDbr",0.02,"AdvePercMrunSnonWpstDbl",0.02,"AdvePercMrunSnonWpstDl",0.02,"AdvePercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDb",0.02,"AsdvPercMrunSnonWpstDb",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMrunSnonWpstDbr: AdvePercMrunSnonWpstDb
		{
			actions = "DivingRifleActionsRunBR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbr";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDbr",0.02,"AdvePercMtacSnonWpstDbr",0.02,"AdvePercMrunSnonWpstDb",0.02,"AdvePercMrunSnonWpstDbl",0.02,"AdvePercMrunSnonWpstDl",0.02,"AdvePercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDbr",0.02,"AsdvPercMrunSnonWpstDbr",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMrunSnonWpstDbl: AdvePercMrunSnonWpstDb
		{
			actions = "DivingRifleActionsRunBL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbl";
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDbl",0.02,"AdvePercMtacSnonWpstDbl",0.02,"AdvePercMrunSnonWpstDb",0.02,"AdvePercMrunSnonWpstDbr",0.02,"AdvePercMrunSnonWpstDl",0.02,"AdvePercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDbl",0.02,"AsdvPercMrunSnonWpstDbl",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMrunSnonWpstDl: AdvePercMrunSnonWpstDf
		{
			actions = "DivingRifleActionsRunL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDl";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDl",0.02,"AdvePercMtacSnonWpstDl",0.02,"AdvePercMrunSnonWpstDfl",0.02,"AdvePercMrunSnonWpstDbl",0.02,"AdvePercMrunSnonWpstDl",0.02,"AdvePercMrunSnonWpstDf",0.02,"AbdvPercMrunSnonWpstDl",0.02,"AsdvPercMrunSnonWpstDl",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMrunSnonWpstDr: AdvePercMrunSnonWpstDf
		{
			actions = "DivingRifleActionsRunR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDr";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMwlkSnonWpstDr",0.02,"AdvePercMtacSnonWpstDr",0.02,"AdvePercMrunSnonWpstDfr",0.02,"AdvePercMrunSnonWpstDbr",0.02,"AdvePercMrunSnonWpstDr",0.02,"AdvePercMrunSnonWpstDf",0.02,"AbdvPercMrunSnonWpstDr",0.02,"AsdvPercMrunSnonWpstDr",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AdvePercMsprSnonWpstDf: AdvePercMrunSnonWpstDf
		{
			aimPrecision = 6.0;
			stamina = -1;
			leftHandIKCurve[] = {0};
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\spr\non\rfl\AdvePercMsprSnonWpstDf";
			actions = "DivingRifleActionsFastF";
			speed = 0.14336;
			duty = 1.0;
			InterpolateTo[] = {"Unconscious",0.01,"AdvePercMrunSnonWpstDf",0.02,"AbdvPercMsprSnonWpstDf",0.02,"AsdvPercMsprSnonWpstDf",0.02,"AdvePercMrunSnonWpstDfl",0.02,"AdvePercMrunSnonWpstDfr",0.02,"AdvePercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};

		class AidlPercMstpSrasWpstDnon_G0S{};
		class AsdvPercMstpSnonWpstDnon: AidlPercMstpSrasWpstDnon_G0S
		{
			variantsAI[] = {};
			actions = "SurfaceDivingRifleActions";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\stp\non\rfl\AsdvPercMstpSnonWpstDnon";
			InterpolationSpeed = 2.5;
			speed = 0.08;
			static = 1;
			relSpeedMin = 0.5;
			soundEdge[] = {0.5};
			limitGunMovement = 1;
			soundOverride = "swim";
			soundEnabled = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mnon.p3d";
			aimPrecision = 2;
			ConnectTo[] = {"AsdvPercMstpSnonWpstDnon",0.02,"AsdvPercMstpSnonWpstDnon_turnL",0.05,"AsdvPercMstpSnonWpstDnon_turnR",0.05};
			InterpolateTo[] = {"AsdvPercMstpSnonWnonDnon",0.02,"AsdvPercMstpSnonWpstDnon_turnL",0.05,"AsdvPercMstpSnonWpstDnon_turnR",0.05,"AsdvPercMstpSnonWpstDnon",0.01,"AsdvPercMrunSnonWpstDf",0.02,"AsdvPercMrunSnonWpstDfr",0.02,"AsdvPercMrunSnonWpstDfl",0.02,"AsdvPercMrunSnonWpstDb",0.02,"AsdvPercMrunSnonWpstDbr",0.02,"AsdvPercMrunSnonWpstDbl",0.02,"AsdvPercMrunSnonWpstDr",0.02,"AsdvPercMrunSnonWpstDl",0.02,"AsdvPercMwlkSnonWpstDf",0.02,"AsdvPercMwlkSnonWpstDfr",0.02,"AsdvPercMwlkSnonWpstDfl",0.02,"AsdvPercMwlkSnonWpstDb",0.02,"AsdvPercMwlkSnonWpstDbr",0.02,"AsdvPercMwlkSnonWpstDbl",0.02,"AsdvPercMwlkSnonWpstDr",0.02,"AsdvPercMwlkSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDf",0.02,"AsdvPercMtacSnonWpstDfr",0.02,"AsdvPercMtacSnonWpstDfl",0.02,"AsdvPercMtacSnonWpstDb",0.02,"AsdvPercMtacSnonWpstDbr",0.02,"AsdvPercMtacSnonWpstDbl",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AsdvPercMsprSnonWpstDf",0.02,"AdvePercMstpSnonWpstDnon",0.01,"AbdvPercMstpSnonWpstDnon",0.01,"AsdvPercMstpSnonWpstDnon_goup",0.02,"AsdvPercMstpSnonWpstDnon_godown",0.02,"AsdvPercMstpSnonWpstDnon_AsdvPercMstpSnonWpstDnon_putDown",0.02,"AmovPknlMstpSrasWpstDnon",0.04,"AmovPknlMstpSlowWpstDnon",0.04,"AsdvPercMstpSnonWpstDnon_relax",0.1,"Unconscious",0.1};
		};
		class AsdvPercMstpSnonWpstDnon_AsdvPercMstpSnonWpstDnon_putDown: AsdvPercMstpSnonWpstDnon
		{
			looped = 0;
			static = 1;
			relSpeedMin = 0.5;
			canBlendStep = 0;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_invin";
			speed = 1.63636;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			leftHandIKCurve[] = {0,1,0.3,0};
			ConnectTo[] = {"AsdvPercMstpSnonWpstDnon_putDown_AsdvPercMstpSnonWpstDnon",0.02};
			InterpolateTo[] = {"Unconscious",0.01};
		};
		class AsdvPercMstpSnonWpstDnon_putDown_AsdvPercMstpSnonWpstDnon: AsdvPercMstpSnonWpstDnon
		{
			looped = 0;
			static = 1;
			relSpeedMin = 0.5;
			canBlendStep = 0;
			minPlayTime = 0.75;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_invout";
			speed = 0.470588;
			leftHandIKCurve[] = {0.8,0,1,1};
		};
		class AsdvPercMstpSnonWpstDnon_relax: AsdvPercMstpSnonWpstDnon
		{
			speed = -5;
			ConnectTo[] = {"AsdvPercMstpSnonWpstDnon",10.1};
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class AsdvPercMstpSnonWpstDnon_GetInSDV: AsdvPercMstpSnonWpstDnon
		{
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\non\AdvePercMstpSnonWnonDnon_GetInSDV";
			speed = 0.32;
			duty = 0.5;
			static = 1;
			relSpeedMin = 0.5;
			ConnectTo[] = {"AsdvPercMstpSnonWpstDnon",0.2};
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class AsdvPercMstpSnonWpstDnon_GetOutSDV: AsdvPercMstpSnonWpstDnon
		{
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\non\AdvePercMstpSnonWnonDnon_GetOutSDV";
			speed = 0.32;
			duty = 0.5;
			static = 1;
			relSpeedMin = 0.5;
			ConnectTo[] = {"AsdvPercMstpSnonWpstDnon",0.2};
			enableBinocular = 0;
		};
		class AsdvPercMstpSnonWpstDnon_goup: AsdvPercMstpSnonWpstDnon
		{
			stamina = -0.1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_goup";
			speed = 0.6;
			duty = 0.6;
			ConnectTo[] = {};
			InterpolateTo[] = {"AsdvPercMstpSnonWpstDnon",0.2,"Unconscious",0.1,"AdvePercMstpSnonWpstDnon",0.2,"AbdvPercMstpSnonWpstDnon",0.2,"AdvePercMstpSnonWpstDnon_goup",0.1,"AbdvPercMstpSnonWpstDnon_goup",0.1};
			enableBinocular = 0;
		};
		class AsdvPercMstpSnonWpstDnon_godown: AsdvPercMstpSnonWpstDnon
		{
			stamina = -0.1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_godown";
			speed = 0.8;
			duty = 1.0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AsdvPercMstpSnonWpstDnon",0.2,"Unconscious",0.1,"AbdvPercMstpSnonWpstDnon",0.2,"AdvePercMstpSnonWpstDnon",0.2,"AdvePercMstpSnonWpstDnon_godown",0.1,"AbdvPercMstpSnonWpstDnon_godown",0.1};
		};
		class AsdvPercMstpSnonWpstDnon_turnL: AsdvPercMstpSnonWpstDnon
		{
			speed = 0.171429;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = -0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMstpSnonWpstDnon",0.05,"AdvePercMstpSnonWpstDnon_turnL",0.05,"AbdvPercMstpSnonWpstDnon_turnL",0.05};
			enableBinocular = 0;
		};
		class AsdvPercMstpSnonWpstDnon_turnR: AsdvPercMstpSnonWpstDnon
		{
			speed = 0.171429;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = -0.1;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMstpSnonWpstDnon",0.05,"AdvePercMstpSnonWpstDnon_turnR",0.05,"AbdvPercMstpSnonWpstDnon_turnR",0.05};
			enableBinocular = 0;
		};
		class AsdvPercMwlkSnonWpstDf: AsdvPercMstpSnonWpstDnon
		{
			aimPrecision = 4.0;
			stamina = -0.1;
			limitGunMovement = 0;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			actions = "SurfaceDivingRifleActionsWlkF";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDf";
			speed = 0.122414;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = -0.2;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMsprSnonWpstDf",0.02,"AsdvPercMrunSnonWpstDf",0.02,"AsdvPercMtacSnonWpstDf",0.02,"AsdvPercMwlkSnonWpstDfr",0.02,"AsdvPercMwlkSnonWpstDfl",0.02,"AsdvPercMwlkSnonWpstDl",0.02,"AsdvPercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDf",0.02,"AdvePercMwlkSnonWpstDf",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
			enableBinocular = 0;
		};
		class AsdvPercMwlkSnonWpstDfr: AsdvPercMwlkSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsWlkFR";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDfr";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMrunSnonWpstDfr",0.02,"AsdvPercMtacSnonWpstDfr",0.02,"AsdvPercMwlkSnonWpstDf",0.02,"AsdvPercMwlkSnonWpstDfl",0.02,"AsdvPercMwlkSnonWpstDl",0.02,"AsdvPercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDfr",0.02,"AdvePercMwlkSnonWpstDfr",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMwlkSnonWpstDfl: AsdvPercMwlkSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsWlkFL";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDfl";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMrunSnonWpstDfl",0.02,"AsdvPercMtacSnonWpstDfl",0.02,"AsdvPercMwlkSnonWpstDf",0.02,"AsdvPercMwlkSnonWpstDfr",0.02,"AsdvPercMwlkSnonWpstDl",0.02,"AsdvPercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDfl",0.02,"AdvePercMwlkSnonWpstDfl",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMwlkSnonWpstDb: AsdvPercMwlkSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsWlkB";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDb";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMrunSnonWpstDb",0.02,"AsdvPercMtacSnonWpstDb",0.02,"AsdvPercMwlkSnonWpstDbr",0.02,"AsdvPercMwlkSnonWpstDbl",0.02,"AsdvPercMwlkSnonWpstDl",0.02,"AsdvPercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDb",0.02,"AdvePercMwlkSnonWpstDb",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMwlkSnonWpstDbr: AsdvPercMwlkSnonWpstDb
		{
			actions = "SurfaceDivingRifleActionsWlkBR";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDbr";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMrunSnonWpstDbr",0.02,"AsdvPercMtacSnonWpstDbr",0.02,"AsdvPercMwlkSnonWpstDb",0.02,"AsdvPercMwlkSnonWpstDbl",0.02,"AsdvPercMwlkSnonWpstDl",0.02,"AsdvPercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDbr",0.02,"AdvePercMwlkSnonWpstDbr",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMwlkSnonWpstDbl: AsdvPercMwlkSnonWpstDb
		{
			actions = "SurfaceDivingRifleActionsWlkBL";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDbl";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMrunSnonWpstDbl",0.02,"AsdvPercMtacSnonWpstDbl",0.02,"AsdvPercMwlkSnonWpstDb",0.02,"AsdvPercMwlkSnonWpstDbr",0.02,"AsdvPercMwlkSnonWpstDl",0.02,"AsdvPercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDbl",0.02,"AdvePercMwlkSnonWpstDbl",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMwlkSnonWpstDl: AsdvPercMwlkSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsWlkL";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDl";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMrunSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AsdvPercMwlkSnonWpstDfl",0.02,"AsdvPercMwlkSnonWpstDbl",0.02,"AsdvPercMwlkSnonWpstDl",0.02,"AsdvPercMwlkSnonWpstDf",0.02,"AbdvPercMwlkSnonWpstDl",0.02,"AdvePercMwlkSnonWpstDl",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMwlkSnonWpstDr: AsdvPercMwlkSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsWlkR";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDr";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMrunSnonWpstDr",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AsdvPercMwlkSnonWpstDfr",0.02,"AsdvPercMwlkSnonWpstDbr",0.02,"AsdvPercMwlkSnonWpstDr",0.02,"AsdvPercMwlkSnonWpstDf",0.02,"AbdvPercMwlkSnonWpstDr",0.02,"AdvePercMwlkSnonWpstDr",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMtacSnonWpstDf: AsdvPercMstpSnonWpstDnon
		{
			aimPrecision = 4.0;
			stamina = -0.1;
			limitGunMovement = 0;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			leftHandIKCurve[] = {0};
			actions = "SurfaceDivingRifleActionsTacF";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDf";
			speed = 0.122414;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = -0.2;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMsprSnonWpstDf",0.02,"AsdvPercMwlkSnonWpstDf",0.02,"AsdvPercMrunSnonWpstDf",0.02,"AsdvPercMtacSnonWpstDfr",0.02,"AsdvPercMtacSnonWpstDfl",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDf",0.02,"AdvePercMtacSnonWpstDf",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
			enableBinocular = 0;
		};
		class AsdvPercMtacSnonWpstDfr: AsdvPercMtacSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsTacFR";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDfr";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDfr",0.02,"AsdvPercMrunSnonWpstDfr",0.02,"AsdvPercMtacSnonWpstDf",0.02,"AsdvPercMtacSnonWpstDfl",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDfr",0.02,"AdvePercMtacSnonWpstDfr",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMtacSnonWpstDfl: AsdvPercMtacSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsTacFL";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDfl";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDfl",0.02,"AsdvPercMrunSnonWpstDfl",0.02,"AsdvPercMtacSnonWpstDf",0.02,"AsdvPercMtacSnonWpstDfr",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDfl",0.02,"AdvePercMtacSnonWpstDfl",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMtacSnonWpstDb: AsdvPercMtacSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsTacB";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDb";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDb",0.02,"AsdvPercMrunSnonWpstDb",0.02,"AsdvPercMtacSnonWpstDbr",0.02,"AsdvPercMtacSnonWpstDbl",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDb",0.02,"AdvePercMtacSnonWpstDb",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMtacSnonWpstDbr: AsdvPercMtacSnonWpstDb
		{
			actions = "SurfaceDivingRifleActionsTacBR";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDbr";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDbr",0.02,"AsdvPercMrunSnonWpstDbr",0.02,"AsdvPercMtacSnonWpstDb",0.02,"AsdvPercMtacSnonWpstDbl",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDbr",0.02,"AdvePercMtacSnonWpstDbr",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMtacSnonWpstDbl: AsdvPercMtacSnonWpstDb
		{
			actions = "SurfaceDivingRifleActionsTacBL";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDbl";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDbl",0.02,"AsdvPercMrunSnonWpstDbl",0.02,"AsdvPercMtacSnonWpstDb",0.02,"AsdvPercMtacSnonWpstDbr",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDbl",0.02,"AdvePercMtacSnonWpstDbl",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMtacSnonWpstDl: AsdvPercMtacSnonWpstDf
		{
			leftHandIKCurve[] = {1};
			actions = "SurfaceDivingRifleActionsTacL";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDl";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDl",0.02,"AsdvPercMrunSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDfl",0.02,"AsdvPercMtacSnonWpstDbl",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDf",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AdvePercMtacSnonWpstDl",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMtacSnonWpstDr: AsdvPercMtacSnonWpstDf
		{
			leftHandIKCurve[] = {1};
			actions = "SurfaceDivingRifleActionsTacR";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDr";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDr",0.02,"AsdvPercMrunSnonWpstDr",0.02,"AsdvPercMtacSnonWpstDfr",0.02,"AsdvPercMtacSnonWpstDbr",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AsdvPercMtacSnonWpstDf",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AdvePercMtacSnonWpstDr",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMrunSnonWpstDf: AsdvPercMstpSnonWpstDnon
		{
			aimPrecision = 4.0;
			stamina = -0.1;
			limitGunMovement = 0;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			actions = "SurfaceDivingRifleActionsRunF";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDf";
			speed = 0.122414;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = 0.4;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMsprSnonWpstDf",0.02,"AsdvPercMwlkSnonWpstDf",0.02,"AsdvPercMtacSnonWpstDf",0.02,"AsdvPercMrunSnonWpstDfr",0.02,"AsdvPercMrunSnonWpstDfl",0.02,"AsdvPercMrunSnonWpstDl",0.02,"AsdvPercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDf",0.02,"AdvePercMrunSnonWpstDf",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.05,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
			enableBinocular = 0;
		};
		class AsdvPercMrunSnonWpstDfr: AsdvPercMrunSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsRunFR";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDfr";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDfr",0.02,"AsdvPercMtacSnonWpstDfr",0.02,"AsdvPercMrunSnonWpstDf",0.02,"AsdvPercMrunSnonWpstDfl",0.02,"AsdvPercMrunSnonWpstDl",0.02,"AsdvPercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDfr",0.02,"AdvePercMrunSnonWpstDfr",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMrunSnonWpstDfl: AsdvPercMrunSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsRunFL";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDfl";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDfl",0.02,"AsdvPercMtacSnonWpstDfl",0.02,"AsdvPercMrunSnonWpstDf",0.02,"AsdvPercMrunSnonWpstDfr",0.02,"AsdvPercMrunSnonWpstDl",0.02,"AsdvPercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDfl",0.02,"AdvePercMrunSnonWpstDfl",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMrunSnonWpstDb: AsdvPercMrunSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsRunB";
			leftHandIKCurve[] = {0};
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDb";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDb",0.02,"AsdvPercMtacSnonWpstDb",0.02,"AsdvPercMrunSnonWpstDbr",0.02,"AsdvPercMrunSnonWpstDbl",0.02,"AsdvPercMrunSnonWpstDl",0.02,"AsdvPercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDb",0.02,"AdvePercMrunSnonWpstDb",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMrunSnonWpstDbr: AsdvPercMrunSnonWpstDb
		{
			actions = "SurfaceDivingRifleActionsRunBR";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDbr";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDbr",0.02,"AsdvPercMtacSnonWpstDbr",0.02,"AsdvPercMrunSnonWpstDb",0.02,"AsdvPercMrunSnonWpstDbl",0.02,"AsdvPercMrunSnonWpstDl",0.02,"AsdvPercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDbr",0.02,"AdvePercMrunSnonWpstDbr",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMrunSnonWpstDbl: AsdvPercMrunSnonWpstDb
		{
			actions = "SurfaceDivingRifleActionsRunBL";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDbl";
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDbl",0.02,"AsdvPercMtacSnonWpstDbl",0.02,"AsdvPercMrunSnonWpstDb",0.02,"AsdvPercMrunSnonWpstDbr",0.02,"AsdvPercMrunSnonWpstDl",0.02,"AsdvPercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDbl",0.02,"AdvePercMrunSnonWpstDbl",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMrunSnonWpstDl: AsdvPercMrunSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsRunL";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDl";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AsdvPercMrunSnonWpstDfl",0.02,"AsdvPercMrunSnonWpstDbl",0.02,"AsdvPercMrunSnonWpstDl",0.02,"AsdvPercMrunSnonWpstDf",0.02,"AbdvPercMrunSnonWpstDl",0.02,"AdvePercMrunSnonWpstDl",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMrunSnonWpstDr: AsdvPercMrunSnonWpstDf
		{
			actions = "SurfaceDivingRifleActionsRunR";
			file = "\A3\anims_f\data\Anim\sdr\sdv\erc\run\non\rfl\AsdvPercMrunSnonWpstDr";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMwlkSnonWpstDr",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AsdvPercMrunSnonWpstDfr",0.02,"AsdvPercMrunSnonWpstDbr",0.02,"AsdvPercMrunSnonWpstDr",0.02,"AsdvPercMrunSnonWpstDf",0.02,"AbdvPercMrunSnonWpstDr",0.02,"AdvePercMrunSnonWpstDr",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};
		class AsdvPercMsprSnonWpstDf: AsdvPercMrunSnonWpstDf
		{
			aimPrecision = 6.0;
			stamina = -1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\spr\non\rfl\AdvePercMsprSnonWpstDf";
			leftHandIKCurve[] = {0};
			actions = "SurfaceDivingRifleActionsFastF";
			speed = 0.14336;
			duty = 0.6;
			InterpolateTo[] = {"Unconscious",0.01,"AsdvPercMrunSnonWpstDf",0.02,"AbdvPercMsprSnonWpstDf",0.02,"AdvePercMsprSnonWpstDf",0.02,"AsdvPercMrunSnonWpstDfl",0.02,"AsdvPercMrunSnonWpstDfr",0.02,"AsdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03};
		};

		class AidlPercMstpSrasWpstDnon_G0S {};
		class AbdvPercMstpSnonWpstDnon: AidlPercMstpSrasWpstDnon_G0S
		{
			variantsAI[] = {};
			actions = "BottomDivingRifleActions";
			file = "\A3\anims_f\data\Anim\sdr\bdv\erc\stp\non\rfl\AbdvPercMstpSnonWpstDnon";
			InterpolationSpeed = 2.5;
			speed = 0.08;
			static = 1;
			relSpeedMin = 0.5;
			soundEdge[] = {0.5};
			legs = "legsNo";
			limitGunMovement = 1;
			soundOverride = "swim";
			soundEnabled = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mnon.p3d";
			aimPrecision = 2;
			ConnectTo[] = {"AbdvPercMstpSnonWpstDnon",0.02,"AbdvPercMstpSnonWpstDnon_turnL",0.05,"AbdvPercMstpSnonWpstDnon_turnR",0.05};
			InterpolateTo[] = {"AbdvPercMstpSnonWpstDnon_turnL",0.05,"AbdvPercMstpSnonWpstDnon_turnR",0.05,"AbdvPercMrunSnonWpstDf",0.02,"AbdvPercMrunSnonWpstDfr",0.02,"AbdvPercMrunSnonWpstDfl",0.02,"AbdvPercMrunSnonWpstDb",0.02,"AbdvPercMrunSnonWpstDbr",0.02,"AbdvPercMrunSnonWpstDbl",0.02,"AbdvPercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDl",0.02,"AbdvPercMwlkSnonWpstDf",0.02,"AbdvPercMwlkSnonWpstDfr",0.02,"AbdvPercMwlkSnonWpstDfl",0.02,"AbdvPercMwlkSnonWpstDb",0.02,"AbdvPercMwlkSnonWpstDbr",0.02,"AbdvPercMwlkSnonWpstDbl",0.02,"AbdvPercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDl",0.02,"AbdvPercMtacSnonWpstDf",0.02,"AbdvPercMtacSnonWpstDfr",0.02,"AbdvPercMtacSnonWpstDfl",0.02,"AbdvPercMtacSnonWpstDb",0.02,"AbdvPercMtacSnonWpstDbr",0.02,"AbdvPercMtacSnonWpstDbl",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AbdvPercMsprSnonWpstDf",0.02,"AsdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon_goup",0.02,"AbdvPercMstpSnonWpstDnon_godown",0.02,"AbdvPercMstpSnonWpstDnon_AbdvPercMstpSnonWpstDnon_putDown",0.02,"AmovPknlMstpSrasWpstDnon",0.04,"AmovPknlMstpSlowWpstDnon",0.04,"AbdvPercMstpSnonWpstDnon_relax",0.1,"Unconscious",0.1};
		};
		class AbdvPercMstpSnonWpstDnon_AbdvPercMstpSnonWpstDnon_putDown: AbdvPercMstpSnonWpstDnon
		{
			looped = 0;
			static = 1;
			relSpeedMin = 0.5;
			canBlendStep = 0;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_invin";
			speed = 1.63636;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			leftHandIKCurve[] = {0,1,0.3,0};
			ConnectTo[] = {"AbdvPercMstpSnonWpstDnon_putDown_AbdvPercMstpSnonWpstDnon",0.02};
			InterpolateTo[] = {"Unconscious",0.01};
		};
		class AbdvPercMstpSnonWpstDnon_putDown_AbdvPercMstpSnonWpstDnon: AbdvPercMstpSnonWpstDnon
		{
			looped = 0;
			static = 1;
			relSpeedMin = 0.5;
			canBlendStep = 0;
			minPlayTime = 0.75;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			interpolationRestart = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_invout";
			speed = 0.470588;
			leftHandIKCurve[] = {0.8,0,1,1};
		};
		class AbdvPercMstpSnonWpstDnon_relax: AbdvPercMstpSnonWpstDnon
		{
			speed = -5;
			ConnectTo[] = {"AbdvPercMstpSnonWpstDnon",10.1};
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class AbdvPercMstpSnonWpstDnon_GetInSDV: AbdvPercMstpSnonWpstDnon
		{
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\non\AdvePercMstpSnonWnonDnon_GetInSDV";
			speed = 0.32;
			duty = 0.06;
			static = 1;
			relSpeedMin = 0.5;
			ConnectTo[] = {"AbdvPercMstpSnonWpstDnon",0.2};
			InterpolateTo[] = {"Unconscious",0.1};
		};
		class AbdvPercMstpSnonWpstDnon_GetOutSDV: AbdvPercMstpSnonWpstDnon
		{
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\non\AdvePercMstpSnonWnonDnon_GetOutSDV";
			speed = 0.32;
			duty = 0.06;
			static = 1;
			relSpeedMin = 0.5;
			ConnectTo[] = {"AbdvPercMstpSnonWpstDnon",0.2};
			enableBinocular = 0;
		};
		class AbdvPercMstpSnonWpstDnon_goup: AbdvPercMstpSnonWpstDnon
		{
			stamina = -0.1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_goup";
			speed = 0.6;
			duty = 0.06;
			ConnectTo[] = {};
			InterpolateTo[] = {"AbdvPercMstpSnonWpstDnon",0.2,"Unconscious",0.1,"AsdvPercMstpSnonWpstDnon",0.2,"AdvePercMstpSnonWpstDnon",0.2,"AsdvPercMstpSnonWpstDnon_goup",0.1,"AdvePercMstpSnonWpstDnon_goup",0.1};
			enableBinocular = 0;
		};
		class AbdvPercMstpSnonWpstDnon_godown: AbdvPercMstpSnonWpstDnon
		{
			stamina = -0.1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_godown";
			speed = 0.8;
			duty = 0.06;
			ConnectTo[] = {};
			InterpolateTo[] = {"AbdvPercMstpSnonWpstDnon",0.2,"Unconscious",0.1,"AdvePercMstpSnonWpstDnon",0.2,"AsdvPercMstpSnonWpstDnon",0.2,"AsdvPercMstpSnonWpstDnon_godown",0.1,"AdvePercMstpSnonWpstDnon_godown",0.1};
			enableBinocular = 0;
		};
		class AbdvPercMstpSnonWpstDnon_turnL: AbdvPercMstpSnonWpstDnon
		{
			speed = 0.171429;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = 0.06;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMstpSnonWpstDnon",0.05,"AsdvPercMstpSnonWpstDnon_turnL",0.05,"AdvePercMstpSnonWpstDnon_turnL",0.05};
		};
		class AbdvPercMstpSnonWpstDnon_turnR: AbdvPercMstpSnonWpstDnon
		{
			speed = 0.171429;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = 0.06;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMstpSnonWpstDnon",0.05,"AsdvPercMstpSnonWpstDnon_turnR",0.05,"AdvePercMstpSnonWpstDnon_turnR",0.05};
		};
		class AbdvPercMwlkSnonWpstDf: AbdvPercMstpSnonWpstDnon
		{
			aimPrecision = 4.0;
			stamina = -0.1;
			limitGunMovement = 0;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			actions = "BottomDivingRifleActionsWlkF";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDf";
			speed = 0.122414;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = -0.2;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMsprSnonWpstDf",0.02,"AbdvPercMrunSnonWpstDf",0.02,"AbdvPercMtacSnonWpstDf",0.02,"AbdvPercMwlkSnonWpstDfr",0.02,"AbdvPercMwlkSnonWpstDfl",0.02,"AbdvPercMwlkSnonWpstDl",0.02,"AbdvPercMwlkSnonWpstDr",0.02,"AdvePercMwlkSnonWpstDf",0.02,"AsdvPercMwlkSnonWpstDf",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMwlkSnonWpstDfr: AbdvPercMwlkSnonWpstDf
		{
			actions = "BottomDivingRifleActionsWlkFR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfr";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMrunSnonWpstDfr",0.02,"AbdvPercMtacSnonWpstDfr",0.02,"AbdvPercMwlkSnonWpstDf",0.02,"AbdvPercMwlkSnonWpstDfl",0.02,"AbdvPercMwlkSnonWpstDl",0.02,"AbdvPercMwlkSnonWpstDr",0.02,"AdvePercMwlkSnonWpstDfr",0.02,"AsdvPercMwlkSnonWpstDfr",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
			enableBinocular = 0;
		};
		class AbdvPercMwlkSnonWpstDfl: AbdvPercMwlkSnonWpstDf
		{
			actions = "BottomDivingRifleActionsWlkFL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfl";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMrunSnonWpstDfl",0.02,"AbdvPercMtacSnonWpstDfl",0.02,"AbdvPercMwlkSnonWpstDf",0.02,"AbdvPercMwlkSnonWpstDfr",0.02,"AbdvPercMwlkSnonWpstDl",0.02,"AbdvPercMwlkSnonWpstDr",0.02,"AdvePercMwlkSnonWpstDfl",0.02,"AsdvPercMwlkSnonWpstDfl",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMwlkSnonWpstDb: AbdvPercMwlkSnonWpstDf
		{
			leftHandIKCurve[] = {0};
			actions = "BottomDivingRifleActionsWlkB";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDb";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMrunSnonWpstDb",0.02,"AbdvPercMtacSnonWpstDb",0.02,"AbdvPercMwlkSnonWpstDbr",0.02,"AbdvPercMwlkSnonWpstDbl",0.02,"AbdvPercMwlkSnonWpstDl",0.02,"AbdvPercMwlkSnonWpstDr",0.02,"AdvePercMwlkSnonWpstDb",0.02,"AsdvPercMwlkSnonWpstDb",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMwlkSnonWpstDbr: AbdvPercMwlkSnonWpstDb
		{
			actions = "BottomDivingRifleActionsWlkBR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbr";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMrunSnonWpstDbr",0.02,"AbdvPercMtacSnonWpstDbr",0.02,"AbdvPercMwlkSnonWpstDb",0.02,"AbdvPercMwlkSnonWpstDbl",0.02,"AbdvPercMwlkSnonWpstDl",0.02,"AbdvPercMwlkSnonWpstDr",0.02,"AdvePercMwlkSnonWpstDbr",0.02,"AsdvPercMwlkSnonWpstDbr",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
			enableBinocular = 0;
		};
		class AbdvPercMwlkSnonWpstDbl: AbdvPercMwlkSnonWpstDb
		{
			actions = "BottomDivingRifleActionsWlkBL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbl";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMrunSnonWpstDbl",0.02,"AbdvPercMtacSnonWpstDbl",0.02,"AbdvPercMwlkSnonWpstDb",0.02,"AbdvPercMwlkSnonWpstDbr",0.02,"AbdvPercMwlkSnonWpstDl",0.02,"AbdvPercMwlkSnonWpstDr",0.02,"AdvePercMwlkSnonWpstDbl",0.02,"AsdvPercMwlkSnonWpstDbl",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMwlkSnonWpstDl: AbdvPercMwlkSnonWpstDf
		{
			actions = "BottomDivingRifleActionsWlkL";
			leftHandIKCurve[] = {0};
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDl";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMrunSnonWpstDl",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AbdvPercMwlkSnonWpstDfl",0.02,"AbdvPercMwlkSnonWpstDbl",0.02,"AbdvPercMwlkSnonWpstDl",0.02,"AbdvPercMwlkSnonWpstDf",0.02,"AdvePercMwlkSnonWpstDl",0.02,"AsdvPercMwlkSnonWpstDl",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMwlkSnonWpstDr: AbdvPercMwlkSnonWpstDf
		{
			actions = "BottomDivingRifleActionsWlkR";
			leftHandIKCurve[] = {0};
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDr";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMrunSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDfr",0.02,"AbdvPercMwlkSnonWpstDbr",0.02,"AbdvPercMwlkSnonWpstDr",0.02,"AbdvPercMwlkSnonWpstDf",0.02,"AdvePercMwlkSnonWpstDr",0.02,"AsdvPercMwlkSnonWpstDr",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
			enableBinocular = 0;
		};
		class AbdvPercMtacSnonWpstDf: AbdvPercMstpSnonWpstDnon
		{
			aimPrecision = 4.0;
			stamina = -0.1;
			limitGunMovement = 0;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			actions = "BottomDivingRifleActionsTacF";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDf";
			speed = 0.122414;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = -0.2;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMsprSnonWpstDf",0.02,"AbdvPercMwlkSnonWpstDf",0.02,"AbdvPercMrunSnonWpstDf",0.02,"AbdvPercMtacSnonWpstDfr",0.02,"AbdvPercMtacSnonWpstDfl",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AdvePercMtacSnonWpstDf",0.02,"AsdvPercMtacSnonWpstDf",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMtacSnonWpstDfr: AbdvPercMtacSnonWpstDf
		{
			actions = "BottomDivingRifleActionsTacFR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfr";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDfr",0.02,"AbdvPercMrunSnonWpstDfr",0.02,"AbdvPercMtacSnonWpstDf",0.02,"AbdvPercMtacSnonWpstDfl",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AdvePercMtacSnonWpstDfr",0.02,"AsdvPercMtacSnonWpstDfr",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMtacSnonWpstDfl: AbdvPercMtacSnonWpstDf
		{
			actions = "BottomDivingRifleActionsTacFL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfl";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDfl",0.02,"AbdvPercMrunSnonWpstDfl",0.02,"AbdvPercMtacSnonWpstDf",0.02,"AbdvPercMtacSnonWpstDfr",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AdvePercMtacSnonWpstDfl",0.02,"AsdvPercMtacSnonWpstDfl",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
			enableBinocular = 0;
		};
		class AbdvPercMtacSnonWpstDb: AbdvPercMtacSnonWpstDf
		{
			leftHandIKCurve[] = {0};
			actions = "BottomDivingRifleActionsTacB";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDb";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDb",0.02,"AbdvPercMrunSnonWpstDb",0.02,"AbdvPercMtacSnonWpstDbr",0.02,"AbdvPercMtacSnonWpstDbl",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AdvePercMtacSnonWpstDb",0.02,"AsdvPercMtacSnonWpstDb",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMtacSnonWpstDbr: AbdvPercMtacSnonWpstDb
		{
			actions = "BottomDivingRifleActionsTacBR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbr";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDbr",0.02,"AbdvPercMrunSnonWpstDbr",0.02,"AbdvPercMtacSnonWpstDb",0.02,"AbdvPercMtacSnonWpstDbl",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AdvePercMtacSnonWpstDbr",0.02,"AsdvPercMtacSnonWpstDbr",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMtacSnonWpstDbl: AbdvPercMtacSnonWpstDb
		{
			actions = "BottomDivingRifleActionsTacBL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbl";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDbl",0.02,"AbdvPercMrunSnonWpstDbl",0.02,"AbdvPercMtacSnonWpstDb",0.02,"AbdvPercMtacSnonWpstDbr",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AdvePercMtacSnonWpstDbl",0.02,"AsdvPercMtacSnonWpstDbl",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
			enableBinocular = 0;
		};
		class AbdvPercMtacSnonWpstDl: AbdvPercMtacSnonWpstDf
		{
			actions = "BottomDivingRifleActionsTacL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDl";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDl",0.02,"AbdvPercMrunSnonWpstDl",0.02,"AbdvPercMtacSnonWpstDfl",0.02,"AbdvPercMtacSnonWpstDbl",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AbdvPercMtacSnonWpstDf",0.02,"AdvePercMtacSnonWpstDl",0.02,"AsdvPercMtacSnonWpstDl",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMtacSnonWpstDr: AbdvPercMtacSnonWpstDf
		{
			actions = "BottomDivingRifleActionsTacR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDr";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDfr",0.02,"AbdvPercMtacSnonWpstDbr",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDf",0.02,"AdvePercMtacSnonWpstDr",0.02,"AsdvPercMtacSnonWpstDr",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
			enableBinocular = 0;
		};
		class AbdvPercMrunSnonWpstDf: AbdvPercMstpSnonWpstDnon
		{
			aimPrecision = 4.0;
			stamina = -0.1;
			limitGunMovement = 0;
			disableWeaponsLong = 1;
			disableWeapons = 1;
			actions = "BottomDivingRifleActionsRunF";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDf";
			speed = 0.122414;
			relSpeedMax = 1.5;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Pswm_Mrun.p3d";
			duty = -0.2;
			ConnectTo[] = {};
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMsprSnonWpstDf",0.02,"AbdvPercMwlkSnonWpstDf",0.02,"AbdvPercMtacSnonWpstDf",0.02,"AbdvPercMrunSnonWpstDfr",0.02,"AbdvPercMrunSnonWpstDfl",0.02,"AbdvPercMrunSnonWpstDl",0.02,"AbdvPercMrunSnonWpstDr",0.02,"AdvePercMrunSnonWpstDf",0.02,"AsdvPercMrunSnonWpstDf",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
			enableBinocular = 0;
		};
		class AbdvPercMrunSnonWpstDfr: AbdvPercMrunSnonWpstDf
		{
			actions = "BottomDivingRifleActionsRunFR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfr";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDfr",0.02,"AbdvPercMtacSnonWpstDfr",0.02,"AbdvPercMrunSnonWpstDf",0.02,"AbdvPercMrunSnonWpstDfl",0.02,"AbdvPercMrunSnonWpstDl",0.02,"AbdvPercMrunSnonWpstDr",0.02,"AdvePercMrunSnonWpstDfr",0.02,"AsdvPercMrunSnonWpstDfr",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMrunSnonWpstDfl: AbdvPercMrunSnonWpstDf
		{
			actions = "BottomDivingRifleActionsRunFL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDfl";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDfl",0.02,"AbdvPercMtacSnonWpstDfl",0.02,"AbdvPercMrunSnonWpstDf",0.02,"AbdvPercMrunSnonWpstDfr",0.02,"AbdvPercMrunSnonWpstDl",0.02,"AbdvPercMrunSnonWpstDr",0.02,"AdvePercMrunSnonWpstDfl",0.02,"AsdvPercMrunSnonWpstDfl",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMrunSnonWpstDb: AbdvPercMrunSnonWpstDf
		{
			leftHandIKCurve[] = {0};
			actions = "BottomDivingRifleActionsRunB";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDb";
			speed = 0.1;
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDb",0.02,"AbdvPercMtacSnonWpstDb",0.02,"AbdvPercMrunSnonWpstDbr",0.02,"AbdvPercMrunSnonWpstDbl",0.02,"AbdvPercMrunSnonWpstDl",0.02,"AbdvPercMrunSnonWpstDr",0.02,"AdvePercMrunSnonWpstDb",0.02,"AsdvPercMrunSnonWpstDb",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMrunSnonWpstDbr: AbdvPercMrunSnonWpstDb
		{
			actions = "BottomDivingRifleActionsRunBR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbr";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDbr",0.02,"AbdvPercMtacSnonWpstDbr",0.02,"AbdvPercMrunSnonWpstDb",0.02,"AbdvPercMrunSnonWpstDbl",0.02,"AbdvPercMrunSnonWpstDl",0.02,"AbdvPercMrunSnonWpstDr",0.02,"AdvePercMrunSnonWpstDbr",0.02,"AsdvPercMrunSnonWpstDbr",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMrunSnonWpstDbl: AbdvPercMrunSnonWpstDb
		{
			actions = "BottomDivingRifleActionsRunBL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDbl";
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDbl",0.02,"AbdvPercMtacSnonWpstDbl",0.02,"AbdvPercMrunSnonWpstDb",0.02,"AbdvPercMrunSnonWpstDbr",0.02,"AbdvPercMrunSnonWpstDl",0.02,"AbdvPercMrunSnonWpstDr",0.02,"AdvePercMrunSnonWpstDbl",0.02,"AsdvPercMrunSnonWpstDbl",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMrunSnonWpstDl: AbdvPercMrunSnonWpstDf
		{
			actions = "BottomDivingRifleActionsRunL";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDl";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDl",0.02,"AbdvPercMtacSnonWpstDl",0.02,"AbdvPercMrunSnonWpstDfl",0.02,"AbdvPercMrunSnonWpstDbl",0.02,"AbdvPercMrunSnonWpstDl",0.02,"AbdvPercMrunSnonWpstDf",0.02,"AdvePercMrunSnonWpstDl",0.02,"AsdvPercMrunSnonWpstDl",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMrunSnonWpstDr: AbdvPercMrunSnonWpstDf
		{
			actions = "BottomDivingRifleActionsRunR";
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\run\non\rfl\AdvePercMrunSnonWpstDr";
			speed = 0.2;
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMwlkSnonWpstDr",0.02,"AbdvPercMtacSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDfr",0.02,"AbdvPercMrunSnonWpstDbr",0.02,"AbdvPercMrunSnonWpstDr",0.02,"AbdvPercMrunSnonWpstDf",0.02,"AdvePercMrunSnonWpstDr",0.02,"AsdvPercMrunSnonWpstDr",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMsprSnonWpstDf: AbdvPercMrunSnonWpstDf
		{
			aimPrecision = 6.0;
			stamina = -1;
			leftHandIKCurve[] = {0};
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\spr\non\rfl\AdvePercMsprSnonWpstDf";
			actions = "BottomDivingRifleActionsFastF";
			speed = 0.14336;
			duty = 0.6;
			InterpolateTo[] = {"Unconscious",0.01,"AbdvPercMrunSnonWpstDf",0.02,"AdvePercMsprSnonWpstDf",0.02,"AsdvPercMsprSnonWpstDf",0.02,"AbdvPercMrunSnonWpstDfl",0.02,"AbdvPercMrunSnonWpstDfr",0.02,"AbdvPercMstpSnonWpstDnon_relax",0.1,"AmovPercMstpSrasWpstDnon",0.03,"AbdvPercMstpSnonWpstDnon",0.03,"AdvePercMstpSnonWpstDnon",0.03,"AsdvPercMstpSnonWpstDnon",0.03};
		};
		class AbdvPercMstpSnonWpstDnon {};
		class AdvePercMstpSnonWpstDnon_AdvePercMstpSnonWnonDnon: AdvePercMstpSnonWpstDnon
		{
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_AdvePercMstpSnonWnonDnon";
			interpolationRestart = 1;
			speed = 0.42;
			leftHandIKCurve[] = {0,1,0.06,0};
			rightHandIKCurve[] = {0.04,1,0.12,0};
			static = 1;
			relSpeedMin = 0.5;
			looped = 0;
			aimPrecision = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {"AdvePercMstpSnonWnonDnon",0.2};
			InterpolateTo[] = {"AsdvPercMstpSnonWpstDnon_AsdvPercMstpSnonWnonDnon",0.1,"AbdvPercMstpSnonWpstDnon_AbdvPercMstpSnonWnonDnon",0.1};
		};
		class AdvePercMstpSnonWnonDnon_AdvePercMstpSnonWpstDnon: AdvePercMstpSnonWpstDnon
		{
			static = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\non\AdvePercMstpSnonWnonDnon_AdvePercMstpSnonWpstDnon";
			interpolationSpeed = 2.5;
			interpolationRestart = 2;
			speed = 0.33;
			leftHandIKCurve[] = {0.895,0,0.951,1};
			rightHandIKCurve[] = {0.362,0,0.434,1};
			looped = 0;
			minPlayTime = 0.9;
			aimPrecision = 1;
		};
		class AbdvPercMstpSnonWpstDnon_AbdvPercMstpSnonWnonDnon: AbdvPercMstpSnonWpstDnon
		{
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_AdvePercMstpSnonWnonDnon";
			speed = 0.32;
			leftHandIKCurve[] = {0,1,0.06,0};
			rightHandIKCurve[] = {0.04,1,0.12,0};
			static = 1;
			relSpeedMin = 0.5;
			looped = 0;
			disableWeaponsLong = 1;
			ConnectTo[] = {"AbdvPercMstpSnonWnonDnon",0.2};
			InterpolateTo[] = {"AsdvPercMstpSnonWpstDnon_AsdvPercMstpSnonWnonDnon",0.1,"AdvePercMstpSnonWpstDnon_AdvePercMstpSnonWnonDnon",0.1};
			enableBinocular = 0;
		};
		class AbdvPercMstpSnonWnonDnon_AbdvPercMstpSnonWpstDnon: AbdvPercMstpSnonWnonDnon
		{
			static = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\non\AdvePercMstpSnonWnonDnon_AdvePercMstpSnonWpstDnon";
			interpolationSpeed = 2.5;
			interpolationRestart = 2;
			speed = 0.33;
			leftHandIKCurve[] = {0.895,0,0.951,1};
			rightHandIKCurve[] = {0.362,0,0.434,1};
			looped = 0;
			minPlayTime = 0.9;
			aimPrecision = 1;
		};
		class AsdvPercMstpSnonWpstDnon_AsdvPercMstpSnonWnonDnon: AsdvPercMstpSnonWpstDnon
		{
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\rfl\AdvePercMstpSnonWpstDnon_AdvePercMstpSnonWnonDnon";
			speed = 0.32;
			leftHandIKCurve[] = {0,1,0.06,0};
			rightHandIKCurve[] = {0.04,1,0.12,0};
			static = 1;
			relSpeedMin = 0.5;
			looped = 0;
			aimPrecision = 1;
			disableWeaponsLong = 1;
			ConnectTo[] = {"AsdvPercMstpSnonWnonDnon",0.2};
			InterpolateTo[] = {"AdvePercMstpSnonWpstDnon_AdvePercMstpSnonWnonDnon",0.1,"AbdvPercMstpSnonWpstDnon_AbdvPercMstpSnonWnonDnon",0.1};
			enableBinocular = 0;
		};
		class AsdvPercMstpSnonWnonDnon_AsdvPercMstpSnonWpstDnon: AsdvPercMstpSnonWnonDnon
		{
			static = 1;
			file = "\A3\anims_f\data\Anim\sdr\dve\erc\stp\non\non\AdvePercMstpSnonWnonDnon_AdvePercMstpSnonWpstDnon";
			interpolationSpeed = 2.5;
			interpolationRestart = 2;
			speed = 0.33;
			leftHandIKCurve[] = {0.895,0,0.951,1};
			rightHandIKCurve[] = {0.362,0,0.434,1};
			looped = 0;
			aimPrecision = 1;
			minPlayTime = 0.9;
			enableBinocular = 0;
		};
	};
};