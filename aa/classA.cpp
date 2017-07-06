#include "classA.h"
#include "RGB.h"
#include "fixed_array.h"
template class AA_API Template<double>;

classA::classA()
{
    RGBAColor cc;
    fixed_array<float, 4> aa;
}

void classA::m_fun(Template<double> t) {
    t.asd(5.0);
}
