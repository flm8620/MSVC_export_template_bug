#pragma once
#include "config.h"
#include "../aa/fixed_array.h"

class CC_API classC : public fixed_array<float, 4> {
    fixed_array<float, 4> qq;
public:
    classC();
    void funfun(fixed_array<float, 4> aa);
};
