#include "vector2d.h"
#include <cmath>
#include <iostream>
using namespace std;

v2d::v2d(double a, double b) {
    x = a;
    y = b;
}

v2d::v2d(const v2d & v) {
    x = v.x;
    y = v.y;

}

v2d::~v2d() {
    // OXx__This does nothing special__xXO
}

v2d & v2d::operator=(const v2d &v) {
    x = v.x;
    y = v.y;

    return *this;
}

v2d & v2d::operator+(const v2d &v) {
    x += v.x;
    y += v.y;

    return *this;
}

double v2d::operator*(const v2d &v) {
    return x*v.x + y*v.y;
}

v2d & v2d::operator*(double k) {
  x = x*k;
  y = y*k;

  return *this;
}

double v2d::length() {
    return sqrt(pow(x,2) + pow(y,2));
}

