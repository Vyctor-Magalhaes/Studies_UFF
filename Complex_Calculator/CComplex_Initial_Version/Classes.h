#include <iostream>
#include <cmath>
#include <new>

class Ccomplex
{

    public:
    
        double real;
        double imag;
    
        Ccomplex();
        Ccomplex(double real, double imag)
        {
            this-> real = real;
            this-> imag = imag;
        }
        Ccomplex(double mod, double arg, bool polar)
        {
            if (polar)
            {
                this->real = mod * cos(arg);
                this->imag = mod * sin(arg);
            }
        }
        //Mudar para a página principal
        Ccomplex operator+(Ccomplex& A)
        {
            return Ccomplex(this->real + A.real, this->imag + A.imag);
        }

        Ccomplex operator-(Ccomplex& A)
        {
            return Ccomplex(this->real - A.real, this->imag - A.imag);
        }

        Ccomplex operator*(Ccomplex& A)
        {
            return Ccomplex(this->real * A.real - this->imag * A.imag, this->real * A.imag + this->imag * A.real);
        }

        Ccomplex operator/(Ccomplex& A)
        {
            return Ccomplex((this->real * A.real + this->imag * A.imag) / (A.real * A.real + A.imag * A.imag), (this->imag * A.real - this->real * A.imag) / (A.real * A.real + A.imag * A.imag));
        }

};