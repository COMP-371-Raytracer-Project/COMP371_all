#pragma once
#include "Ray.h"

Ray::Ray() : origin(0, 0, 0, 1), dir(0, 0, 0, 0) {}

Ray::Ray(const Eigen::Vector3f& origin, const Eigen::Vector3f& dir) : origin(origin), dir(dir) {}

Eigen::Vector3f Ray::getOrigin()
{
	return origin;
}

Eigen::Vector3f Ray::getDirection()
{
	return dir;
}

Eigen::Vector3f Ray::at(double t)
{
	return origin + t*dir;
}
