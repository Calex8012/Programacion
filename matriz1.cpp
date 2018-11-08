#include <iostream>

using namespace std;
void llenarmatriz(int matriz[][5], int renglon);
void mostrarmatriz(int matriz[][5], int renglon);
void llenarinverso(int matriz[][5], int renglon);
void dprimaria(int matriz[][5], int renglon); 
void dsecundaria(int matriz[][5], int renglon);


int main()
{
    int matriz[5][5];
    cout<<"Matriz normal"<<endl;
    llenarmatriz(matriz,5);
    mostrarmatriz(matriz,5);
    cout<<"---------------------------------------"<<endl;
    cout<<"Matriz inversa"<<endl;
    llenarinverso(matriz,5);
    mostrarmatriz(matriz,5);
    
    cout<<"---------------------------------------"<<endl;
    //dprimaria(matriz,5);cout<<endl;
    //dsecundaria(matriz,5);

    return 0;
}
void llenarmatriz(int matriz[][5], int renglon){
    int num=1;
    for(int r=0;r<5;r++)
    {
        for(int c=0;c<5;c++)
        {
            matriz[r][c]=num++;
        }
    }
}
void mostrarmatriz(int matriz[][5], int renglon){
     for(int r=0;r<5;r++)
    {
        for(int c=0;c<5;c++)
        {
            cout<<matriz[r][c]<<"\t";
        }
    cout<<endl;
    }
}
void llenarinverso(int matriz[][5], int renglon){
      int num=1;
    for(int c=4;c>=0;c--)
    {
        for(int r=4;r>=0;r--)
        {
            matriz[r][c]=num++;
        }
    }
}
