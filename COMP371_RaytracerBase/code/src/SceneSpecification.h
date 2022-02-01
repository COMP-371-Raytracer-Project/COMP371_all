#pragma once
#include <string>
#include <Eigen/Dense>

class Geometry {

public:
	Geometry(std::string type, float ka, float kd, float ks, float pc, float(&ac)[3], float(&dc)[3], float(&sc)[3], Eigen::Matrix4f transform);
	std::string getType();
	float getKa();
	float getKd();
	float getKs();
	float getPc();
	float* getAc();
	float* getDc();
	float* getSc();
	Eigen::Matrix4f getTransform();
private:
	std::string type;
	float ka, kd, ks, pc;
	float(&ac)[3], (&dc)[3], (&sc)[3];
	Eigen::Matrix4f transform;
};

class Light {

public:
	Light(std::string type, float(&id)[3], float(&is)[3], Eigen::Matrix4f transform);
	std::string getType();
	float* getId();
	float* getIs();
	Eigen::Matrix4f getTransform();
private:
	std::string type;
	float(&id)[3], (&is)[3];
	Eigen::Matrix4f transform;
};

class Output {

public:
	Output(std::string filename, unsigned int(&size)[2], float fov, Eigen::Vector3f up, Eigen::Vector3f lookat, float(&ai)[3], float(&bkc)[3], unsigned int (&rayperpixel)[2], unsigned int speedup = 0, bool antialiasing = false, bool twosiderender = false, bool globalillum = false);
	std::string getFilename();
	unsigned int* getSize();
	float getFov();
	Eigen::Vector3f getUp();
	Eigen::Vector3f getLookat();
	float* getAi();
	float* getBkc();
	unsigned int* getRayPerPixel();
	unsigned int getSpeedup();
	bool isAntiAliasing();
	bool isTwoSideRender();
	bool isGlobalIllum();
private:
	std::string filename;
	unsigned int(&size)[2], (&rayperpixel)[2];
	float fov;
	Eigen::Vector3f up, lookat;
	float(&ai)[3], (&bkc)[3];
	unsigned int speedup;
	bool antialiasing, twosiderender, globalillum;
};