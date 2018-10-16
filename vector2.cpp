#include <iostream>

using namespace std;
void llenar(int vector[], int tam, int valor);
int mostrar(int vector[], int tam);
int suma(int vector[], int tam);
int mostrarinverso(int vector[], int tam);
int girararriba(int vector[], int tam);

int main()
{
    int vector[10], tam=10, valor;
    cout<<"Dame un valor ";
    cin>>valor;
    llenar(vector, tam, valor);
    mostrar(vector, tam);
    suma(vector, tam);
    cout<<"La suma es "<<suma(vector, tam)<<endl;
    cout<<"Inverso"<<endl;
    mostrarinverso(vector,tam);
    //girararriba(vector[],tam);
    return 0;
}

void llenar(int vector[], int tam, int valor){
    for(int i=0;i<tam;i++)
    {
        vector[i]=valor;
        valor++;
    }
}
int mostrar(int vector[], int tam){
    for(int i=0;i<10;i++)
    cout<<"["<<i<<"]"<<vector[i]<<endl;
}
int suma(int vector[], int tam){
    int suma=0;
    for(int i=0;i<tam;i++){
    suma=suma+vector[i];
    }
    return suma;
}
int mostrarinverso(int vector[], int tam){
    for(int i=tam-1;i>=0;i--){
        cout<<"["<<i<<"]"<<vector[i]<<endl;
    }
}
