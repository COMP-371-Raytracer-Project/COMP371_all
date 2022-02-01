#pragma once
#include "SceneSpecification.h"

Geometry::Geometry(std::string type, float ka, float kd, float ks, float pc, float(&ac)[3], float(&dc)[3], float(&sc)[3], Eigen::Matrix4f transform) :
	type(type), ka(ka), kd(kd), ks(ks), pc(pc), ac(ac), dc(dc), sc(sc), transform(transform) {}

std::string Geometry::getType() {
	return type;
}

float Geometry::getKa() {
	return ka;
}

float Geometry::getKd() {
	return kd;
}

float Geometry::getKs() {
	return ks;
}

float Geometry::getPc() {
	return pc;
}

float* Geometry::getAc() {
	return ac;
}

float* Geometry::getDc() {
	return dc;
}

float* Geometry::getSc() {
	return sc;
}

Eigen::Matrix4f Geometry::getTransform() {
	return transform;
}

Light::Light(std::string type, float(&id)[3], float(&is)[3], Eigen::Matrix4f transform) :
	type(type), id(id), is(is), transform(transform) {}

std::string Light::getType() {
	return type;
}

float* Light::getId() {
	return id;
}

float* Light::getIs() {
	return is;
}

Eigen::Matrix4f Light::getTransform() {
	return transform;
}

Output::Output(std::string filename, unsigned int(&size)[2], float fov, Eigen::Vector3f up, Eigen::Vector3f lookat, float(&ai)[3], float(&bkc)[3], unsigned int(&rayperpixel)[2], unsigned int speedup, bool antialiasing, bool twosiderender, bool globalillum) :
	filename(filename), size(size), fov(fov), up(up), lookat(lookat), ai(ai), bkc(bkc), rayperpixel(rayperpixel), speedup(speedup), antialiasing(antialiasing), twosiderender(twosiderender), globalillum(globalillum) {}

std::string Output::getFilename() {
	return filename;
}

unsigned int* Output::getSize() {
	return size;
}

float Output::getFov() {
	return fov;
}

Eigen::Vector3f Output::getUp() {
	return up;
}

Eigen::Vector3f Output::getLookat() {
	return lookat;
}

float* Output::getAi() {
	return ai;
}

float* Output::getBkc() {
	return bkc;
}

unsigned int* Output::getRayPerPixel() {
	return rayperpixel;
}

unsigned int Output::getSpeedup() {
	return speedup;
}

bool Output::isAntiAliasing() {
	return antialiasing;
}

bool Output::isTwoSideRender() {
	return twosiderender;
}
bool Output::isGlobalIllum() {
	return globalillum;
}