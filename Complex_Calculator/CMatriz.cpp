#include <iostream>
#include <cmath>
#include <new>
#include "Ccomplex.h"

class CMatriz: public Ccomplex::Ccomplex
{

    private:
        int nLin;
        int nCol;
        int *pnt1, *pnt2;
        int **matrizA, **matrizB, **matrizC;
    
    public:
    // Soma e subtração, linhas e colunas iguais
    // Multiplicaçao, linhas da primeira matriz igual ao numero de colunas da segunda matriz
        CMatriz();
        CMatriz(int nLin, int nCol)
        {

            this->nLin = nLin;
            this->nCol = nCol;
            this->matrizA = new int*[nLin];
            for(int i = 0; i < nLin; i++)
            {
                this->matrizA[i] = new int[nCol];
            }
            for(int i=0; i<nLin; i++){
                for(int j=0; j<nCol; j++){
                    std::cout<<"Digite o termo "<<i<<j<<" da matriz"<<std::endl;
                    std::cin>>this->matrizA[i][j];
                }
            }

        }
        void Subtracao(){
            this->matrizC = new int*[nLin];
            for(int i = 0; i < nLin; i++)
            {
                this->matrizC[i] = new int[nCol];
            }
            for(int i=0; i<nLin; i++){
                for(int j=0; j<nCol; j++){
                    this->matrizC[i][j] = this->matrizA[i][j] - this->matrizB[i][j];
                }
            }
        }
        void Soma(int nLin, int nCol)
        {
            this->matrizB = new int*[nLin];
            for(int i = 0; i < nLin; i++)
            {
                this->matrizB[i] = new int[nCol];
            }
            for(int i=0; i<nLin; i++){
                for(int j=0; j<nCol; j++){
                    std::cout<<"Digite o termo "<<i<<j<<" da matrizB"<<std::endl;
                    std::cin>>this->matrizB[i][j];
                }
            }
        }
        void Multiplicacao(int nLin, int nCol)
        {
            this->matrizB = new int*[nLin];
            for(int i = 0; i < nLin; i++)
            {
                this->matrizB[i] = new int[nCol];
            }
            for(int i=0; i<nLin; i++){
                for(int j=0; j<nCol; j++){
                    std::cout<<"Digite o termo "<<i<<j<<" da matrizB"<<std::endl;
                    std::cin>>this->matrizB[i][j];
                }
            }
            this->matrizC = new int*[nLin];
            for(int i = 0; i < nLin; i++)
            {
                this->matrizC[i] = new int[nCol];
            }
            for(int i=0; i<nLin; i++){
                for(int j=0; j<nCol; j++){
                    this->matrizC[i][j] = this->matrizA[i][j] * this->matrizB[i][j];
                }
            }
        }
        void ImprimeMatriz()
        {
            for(int i=0; i<nLin; i++){
                for(int j=0; j<nCol; j++){
                    std::cout<<this->matrizC[i][j]<<" ";
                }
                std::cout<<std::endl;
            }
        }
                ~CMatriz()
        {
            for(int i = 0; i < nLin; i++)
            {
                delete[] this->matrizA[i];
            }
            delete[] this->matrizA;
        }
};

int main()
{
    CMatriz A(2,2);
    CMatriz B(2,2);
    A.Soma(2,2);
    A.ImprimeMatriz();
    return 0;
}