#include "HeadOsciloscopio.h"


Oscilografia::Oscilografia(fTensao, fCorrente)   // Construtor
{
    fTensao = new float;
    fCorrente = new float;
    *fTensao = fTensao;
    *fCorrente = fCorrente;
}

void setTamanho() 
{
    std::cout << "Digite o tamanho do registro: " << std::endl;
    std::cin >> valor;
    std::cout<<"Tamnho do registro: "<<valor<<std::endl;
}

Oscilografia::Oscilografia(Oscilografia &obj)  // Construtor de cópia
{
    fTensao = new float;
    fCorrente = new float;
    *fTensao = *obj.fTensao;
    *fCorrente = *obj.fCorrente;
}

void getObterdados(){
    std::cout << *fTensao << std::endl;
    std::cout << *fCorrente << std::endl;
}

Oscilografia::~Oscilografia()  //Destrutor
{
    delete fTensao;
    delete fCorrente;
}	


int main()
{
    std::time_t nData = std::time(nullptr); //armazena o tempo em segundos
    Oscilografia registro1(3.1, 0.7);
    registro1.setTamanho();
    registro1.getObterdados();

    Oscilografia registro2 = registro1;
    registro2.getObterdados();
    return 0;
}