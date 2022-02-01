#pragma once
#include "SceneObject.h"

Point::Point(Eigen::Vector3f centre) : 
	centre(centre) {}

Eigen::Vector3f Point::getCentre() {
	return centre;
}

Area::Area(Eigen::Vector3f p1, Eigen::Vector3f p2, Eigen::Vector3f p3, Eigen::Vector3f p4) :
	p1(p1), p2(p2), p3(p3), p4(p4) {}

Eigen::Vector3f Area::getP1() {
	return p1;
}

Eigen::Vector3f Area::getP2() {
	return p2;
}

Eigen::Vector3f Area::getP3() {
	return p3;
}

Eigen::Vector3f Area::getP4() {
	return p4;
}