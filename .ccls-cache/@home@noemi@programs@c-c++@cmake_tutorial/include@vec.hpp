#pragma once

struct Vec {
	 float x;
	 float y;

	 Vec() = default;
	 Vec(float _x, float _y) : x(_x), y(_y) {}

	 static float dist(Vec v0, Vec v1);
};
