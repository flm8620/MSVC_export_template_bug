#pragma once
#include "config.h"
#include "template.h"

class AA_API classA : public Template<double> {
public:
    classA();
    void m_fun(Template<double> t);
};

class AA_API classAA {
public:
    int funAA() { return 10; };
};