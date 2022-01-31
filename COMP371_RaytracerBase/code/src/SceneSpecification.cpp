#pragma once
#include "SceneSpecification.h"

Geometry::Geometry(std::string type, float ka, float kd, float ks, float pc, float(&ac)[3], float(&dc)[3], float(&sc)[3], Eigen::Matrix4f transform) :
	type(type), ka(ka), kd(kd), ks(ks), pc(pc), ac(ac), dc(dc), sc(sc), transform(transform)
{
}

Light::Light(std::string type, float(&id)[3], float(&is)[3], Eigen::Matrix4f transform) :
	type(type), id(id), is(is), transform(transform)
{
}

Output::Output(std::string filename, unsigned int(&size)[2], float fov, Eigen::Vector3f up, Eigen::Vector3f lookat, float(&ai)[3], float(&bkc)[3], unsigned int(&rayperpixel)[2], unsigned int speedup, bool antialiasing, bool twosiderender, bool globalillum) :
	filename(filename), size(size), fov(fov), up(up), lookat(lookat), ai(ai), bkc(bkc), rayperpixel(rayperpixel), speedup(speedup), antialiasing(antialiasing), twosiderender(twosiderender), globalillum(globalillum)
{
}