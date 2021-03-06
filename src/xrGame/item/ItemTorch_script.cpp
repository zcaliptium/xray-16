#include "pch_script.h"
#include "ItemTorch.h"
#include "ItemPDA.h"
#include "ItemDetectorSimple.h"
#include "ItemDetectorElite.h"
#include "ItemDetectorAdvanced.h"

using namespace luabind;

#pragma optimize("s",on)
void CTorch::script_register	(lua_State *L)
{
	module(L)
	[
		class_<CTorch,CGameObject>("CTorch")
			.def(constructor<>()),
		class_<CPda,CGameObject>("CPda")
			.def(constructor<>()),
		class_<CScientificDetector,CGameObject>("CScientificDetector")
			.def(constructor<>()),
		class_<CEliteDetector,CGameObject>("CEliteDetector")
			.def(constructor<>()),
		class_<CAdvancedDetector,CGameObject>("CAdvancedDetector")
			.def(constructor<>()),
		class_<CSimpleDetector,CGameObject>("CSimpleDetector")
			.def(constructor<>())
	];
}
