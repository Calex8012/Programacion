#include <iostream>

using namespace std;
void llenar(int vector[], int tam, int valor);
int mostrar(int vector[], int tam);
int suma(int vector[], int tam);
int mostrarinverso(int vector[], int tam);
int girararriba(int vector[], int tam);
int girarabajo(int vector[], int tam);
int invertir(int vector[], int tam);

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
    mostrarinverso(vector, tam);
    cout<<"Girar arriba"<<endl;
    girararriba(vector, tam);
    mostrar(vector, tam);
    cout<<"Girar abajo"<<endl;
    girarabajo(vector, tam);
    mostrar(vector, tam);
    cout<<"Invertir"<<endl;
    invertir(vector, tam);
    mostrar(vector, tam);
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
int girararriba(int vector[], int tam){
    int aux=vector[0];
    for(int i=0;i<tam-1;i++){
        vector[i]=vector[i+1];
    }
    vector[tam-1]=aux;
}
int girarabajo(int vector[], int tam){
    int aux=vector[tam-1];
    for(int i=tam-1;i>0;i--){
        vector[i]=vector[i-1];
    }
    vector[0]=aux;
}
int invertir(int vector[], int tam){
    int aux=vector[0];
    for(int i=0,j=tam-1;i<tam/2;i++,j--){
        aux=vector[i];
        vector[i]=vector[j];
        vector[j]=aux;
    }
}
