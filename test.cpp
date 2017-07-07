#include "aa/template.h"

class classB {
    Template<double> t;
};
class classC : public Template<double> {};

void fun() {
    Template<double> b;
    //class classB;
    //class classC;
}