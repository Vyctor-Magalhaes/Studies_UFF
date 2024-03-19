#include "Ccomplex.h"

Ccomplex::Ccomplex(double dado1, double dado2, bool polar)
        {
            this->polar = polar;
            if (!this->polar) 
            {
                this->real = dado1;
                this->imag = dado2;
                this->polar = false;
            }
            else
            {
                this->mod = dado1;
                this->arg = dado2;
                this->polar = true;
                this->angulo1 = (this->arg*M_PI)/180;
            }
        }

Ccomplex Ccomplex::operator+(Ccomplex& A)
{
    if(!polar)
    {
        this->real = this->real + A.real;
        this->imag = this->imag + A.imag;
        return Ccomplex(this->real, this->imag,false);
    }
    else
    {
        this->real = mod * cos(this->angulo1);
        this->imag = mod * sin(this->angulo1);
        A.mod = A.mod * cos(A.angulo2);
        A.imag = A.mod * sin(A.angulo2);
        this->real = this->real + A.real;
        this->imag = this->imag + A.imag;
        return Ccomplex(this->real, this->imag,false);
    }
}

Ccomplex Ccomplex::operator-(Ccomplex& A)
{
    if(!polar)
    {
        this->real = this->real - A.real;
        this->imag = this->imag - A.imag;
        return Ccomplex(this->real , this->imag,false);
    }
    else
    {
        this->real = mod * cos(this->angulo1);
        this->imag = mod * sin(this->angulo1);
        A.mod = A.mod * cos(A.angulo2);
        A.imag = A.mod * sin(A.angulo2);
        this->real = this->real - A.real;
        this->imag = this->imag - A.imag;
        return Ccomplex(this->real , this->imag,false);
    }

}

Ccomplex Ccomplex::operator*(Ccomplex& A)
{
    if(!polar)
    {
        this->real = this->real * A.real - this->imag * A.imag;
        this->imag = this->real * A.imag + this->imag * A.real;
        return Ccomplex(this->real , this->imag,false);
    }
    else
    {
        this->mod = this->mod * A.mod;
        this->arg = this->arg + A.arg;
        return Ccomplex(this->mod , this->arg,true);
    }
}

Ccomplex Ccomplex::operator/(Ccomplex& A)
{
    if(!polar)
    {
        this->real = ((this->real * A.real) + (this->imag * A.imag)) / ((A.real * A.real) + (A.imag * A.imag));
        this->imag = ((this->imag * A.real) - (this->real * A.imag)) / ((A.real * A.real) + (A.imag * A.imag));
        return Ccomplex(this->real , this->imag,false);
    }
    else
    {
        this->mod = this->mod / A.mod;
        this->arg = this->arg - A.arg;
        return Ccomplex(this->mod , this->arg,true);
    }
}

int main()
{
    //Ccomplex A(4,20,false); // Se tiver o terceiro parâmetro é polar. Se for false está em polar e será convertido para retangular, se for true será reconhecido como polar. 
    //Ccomplex B(2,25,true);
    //Ccomplex C = A.operator+(B);
    //std::cout<<C.get_real()<<" + "<<C.get_imag()<<"i"<<std::endl;
    //std::cout<<C.get_mod()<<" (cos("<<C.get_arg()<<")+ isen("<<C.get_arg()<<"))"<<std::endl;
    return 0;
}