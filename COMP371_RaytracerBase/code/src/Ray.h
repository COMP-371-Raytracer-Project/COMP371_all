#pragma once
#include <Eigen/Dense>

class Ray {

public:
	Ray();
	Ray(const Eigen::Vector3f& origin, const Eigen::Vector3f& dir);	
	Eigen::Vector3f getOrigin();
	Eigen::Vector3f getDirection();
	Eigen::Vector3f at(double t);
private:
	Eigen::Vector3f origin;
	Eigen::Vector3f dir;
};