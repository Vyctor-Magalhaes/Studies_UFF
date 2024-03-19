#include <iostream>
#include <new>
#include <ctime>

class Oscilografia
{
    private:
        float *fTensao;
        float *fCorrente;
        int nData;

    public:
        Oscilografia(float fTensao, float fCorrente);
        ~Oscilografia();
        void setTamanho();
        void getObterdados()
};

