#pragma once
#include <Eigen/Dense>

class Sphere {

public:
	Sphere(float radius, Eigen::Vector3f centre);
private:
	float radius;
	Eigen::Vector3f centre;
};

class Rectangle {

public:
	Rectangle(Eigen::Vector3f p1, Eigen::Vector3f p2, Eigen::Vector3f p3, Eigen::Vector3f p4);
private:
	Eigen::Vector3f p1, p2, p3, p4;
};

class Point{

public:
	Point(Eigen::Vector3f centre);
	Eigen::Vector3f getCentre();
private:
	Eigen::Vector3f centre;
};

class Area{

public:
	Area(Eigen::Vector3f p1, Eigen::Vector3f p2, Eigen::Vector3f p3, Eigen::Vector3f p4);
	Eigen::Vector3f getP1();
	Eigen::Vector3f getP2();
	Eigen::Vector3f getP3();
	Eigen::Vector3f getP4();
private:
	Eigen::Vector3f p1, p2, p3, p4;
};