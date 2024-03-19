#include <iostream>
#include <new>

using namespace std;

int nLin1,nCol1,nLin2,nCol2;
int *pnt1, *pnt2,**MatA, **MatB;

int EntradaDados()
{
    cout<<"Digite a quantidade de linhas e colunas da primeira matriz sequencialmente: "<<endl;
    cin>>nLin1;
    cin>>nCol1;
    cout<<"Digite a quantidade de linhas e colunas da segunda matriz sequencialmente: "<<endl;
    cin>>nLin2;
    cin>>nCol2;
    if(nCol1==nLin2){
        return 0;
    }else{
        return 1;
    }
}
int PreencherMat(int nLin1,int nCol1,int nLin2,int nCol2)
{
    int **MatA = new(nothrow) int *[nLin1];
    int **MatB = new(nothrow) int *[nLin2];
    pnt1 = new(nothrow) int [nLin1];
    pnt2 = new(nothrow) int [nLin2];
    if(!pnt1||!pnt2||!MatA||!MatB){
        cout<< "Erro durante a alocacao de memoria dinamica.";
    }
    for(int i=0; i<nLin1;i++){
        for(int j = 0; j<nLin2;j++){
        MatA[i] = new int [nCol1];
        MatB[j] = new int [nCol2];
        }
    }
    for(int i=0 ; i<nCol1;i++){
        for(int j = 0; j<nLin2;j++){
                cout<<"Digite o termo "<<i<<j<<" da matrizA"<<endl;
                cin>>MatA[i][j];
        }
    }
    for(int i=0 ; i<nCol1;i++){
        for(int j = 0; j<nLin2;j++){
                cout<<" Digite o termo "<<i<<j<<" da matrizB"<<endl;
                cin>>MatB[i][j];
        }
    }
    return 0;
}

void Deletar()
{
    for(int i=0; i<nLin1;i++){
        for(int j = 0; j<nLin2;j++){
        delete[] MatA[i];
        delete[] MatB[j];
        }
    }
}

int OperacaoEImpressao()
{
    int MatR[nCol1][nLin2];
    for(int k=0;k<nCol1;k++){
        for(int q=0;q<nLin2;q++){
            for(int l=0;l<nCol1+1;l++){
                MatR[k][q]= MatR[k][q] + MatA[k][l] * MatB[l][k];
            }
        }

    }
    for(int i=0;i<nCol1;i++){
            cout<<endl;
        for(int j=0; j<nLin2; j++){
            cout<<"Valor "<<i<<j<<"da MatR " <<MatR[i][j];
        }
    }
    return 0;
}

int main()
{
    int nVar; //Variavel que ira armazenar o valor retornado pela função anterior.
    nVar = EntradaDados();

    if(nVar==0){
        PreencherMat(nLin1,nCol1,nLin2,nCol2);
        OperacaoEImpressao();


    }
    return 0;
}
