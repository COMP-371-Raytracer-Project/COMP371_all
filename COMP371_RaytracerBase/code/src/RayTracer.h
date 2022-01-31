
#pragma once
#include <test_ppm.cpp>
#include "SceneSpecification.h"
#include "SceneObject.h"

class RayTracer {

public:
	RayTracer(nlohmann::json j);
	void run();
};