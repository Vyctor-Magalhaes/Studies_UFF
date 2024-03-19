#include "Classes.h"

Ccomplex::Ccomplex(double mod, double arg, bool polar)
        {
            if (polar)
            {
                this->real = mod * cos(arg);
                this->imag = mod * sin(arg);
            }
        }

int main()
{
    Ccomplex A(-1,1,1);
    //A.get_complex();
    //Ccomplex B(4,-2);
    //Ccomplex C(0,0);
    //C = A+B;
    std::cout<<A.real<<" + "<<A.imag<<"i"<<std::endl;
    return 0;
}