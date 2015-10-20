#include "pch_script.h"
#include "Artefact.h"
#include "ElectricBall.h"
#include "GraviArtifact.h"
#include "cta_game_artefact.h"

using namespace luabind;

#pragma optimize("s",on)
void CArtefact::script_register(lua_State *L)
{
	module(L)
	[
		class_<CArtefact			,CGameObject>("CArtefact")
		.def(						constructor<>() )
		.def("FollowByPath",		&CArtefact::FollowByPath)
		.def("SwitchVisibility",	&CArtefact::SwitchVisibility)
		.def("GetAfRank",			&CArtefact::GetAfRank),

		class_<CElectricBall		,CArtefact>("CElectricBall").def		(constructor<>()),
		class_<CGraviArtefact		,CArtefact>("CGraviArtefact").def		(constructor<>())
	];
}
