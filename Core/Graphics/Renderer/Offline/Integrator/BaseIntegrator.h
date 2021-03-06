//========================================================================
// Copyright (c) Yann Clotioloman Yeo, 2018
//
//	Author					: Yann Clotioloman Yeo
//	E-Mail					: nebularender@gmail.com
//========================================================================

#pragma once

#include "Helpers.h"
#include "Scene/BaseScene.h"
#include "../Intersector/BaseIntersector.h"
#include <atomic>

namespace Graphics { namespace Renderer { namespace Offline { namespace Integrator
{
struct BaseIntegrator
{
protected:
	static Math::Generator::RandomNumberGenerator<nbFloat32> s_nbGenerator;
};
}}}}