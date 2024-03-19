#include <iostream>
#include <cmath>
#include <new>

class Ccomplex
{

    private:
    
        double real;
        double imag;
        double mod;
        double arg;
        bool polar;
        double angulo1;
        double angulo2 = (arg*M_PI)/180;
        

    public:
        Ccomplex();
        Ccomplex(double dado1, double dado2, bool polar);

        Ccomplex operator+(Ccomplex& A);

        Ccomplex operator-(Ccomplex& A);

        Ccomplex operator*(Ccomplex& A);

        Ccomplex operator/(Ccomplex& A);

        double get_real()
        {
            if(!polar)
            {
                return this->real;
            }
            else
            {
                
                this->real = this->mod * cos(this->angulo1);
                return this->real;
            }
        }

        double get_imag()
        {
            if(!polar)
            {
                return this->imag;
            }
            else
            {
                this->imag = this->mod * sin(this->angulo1);
                return this->imag;
            }
        }

        double get_mod()
        {
            if(!polar)
            {
                this->mod = sqrt((this->real * this->real) + (this->imag * this->imag));
                return this->mod;
            }
            else
            {
                return this->mod;
            }
        }

        double get_arg()
        {
            if(!polar)
            {
                double angulo;
                angulo = atan2(this->imag,this->real);
                this->arg = (angulo*180)/M_PI;
                return this->arg;
            }
            else
            {
                return this->arg;
            }
        }
        
        ~Ccomplex()
        {
            delete this;
        }
};
