#include "include/vec.hpp"
#include <cmath>

static float Vec::dist(Vec v0, Vec v1) {
	 return sqrt((v0.x - v1.x) * (v0.x - v1.x) - (v0.y - v1.y) * (v0.y - v1.y));
}
