#pragma once
#include "config.h"
#include "../aa/fixed_array.h"

template class fixed_array<float, 4>;
class BB_API classB : public fixed_array<float, 4> {
    fixed_array<float, 4> qq;
public:
    classB();
    void funfun(fixed_array<float, 4> aa);
};



//class BB_API classAA {
//public:
//    int funAA() { return 20; }
//};