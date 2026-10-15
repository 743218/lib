#pragma once
#include <Windows.h>
#include <cmath>

using boolean = bool;
using integer = int;

class LocalPlayer;

//include SDK headers here
//#include "../../..."

class QQlib {
public:

//Floating point error prevention
inline boolean isEqualTo(float input, float input2) {
  return (std::fabs(input - input2)) < 0.0001f); 
}

inline float getAbsoluteValueFloat(float input) {
  return std::fabs(input);
}

inline integer getAbsoluteValueInt(integer input) {
  return std::fabs(input);
}

inline boolean isZero(float input) {
  return std::fabs(input) < 0.0001f;
}

};
