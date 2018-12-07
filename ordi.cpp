#include <iostream>

using namespace std;
void llenarmatriz(int mat[][5],int r);
void mostrarmatriz(int mat[][5],int r);
void dprimario(int mat[][5], int r);
void dsecundaria(int mat[][5], int r);
void matrizvolteada(int mat[][5], int r);
void matrizsecunvolteada(int mat[][5], int r);

int main()
{
    int matriz[5][5],r=5;
    cout<<"--------------Matriz-------------";
    cout<<endl;
    llenarmatriz(matriz,r);
    mostrarmatriz(matriz,r);
    cout<<"---------Diagonal primera------------";
    cout<<endl;
    dprimario(matriz,r);
    cout<<endl;
    cout<<"---------Diagonal secundaria------------";
    cout<<endl;
    dsecundaria(matriz,r);
    cout<<endl;
    cout<<"----------Matriz Volteada-------------";
    cout<<endl;
    matrizvolteada(matriz,r);
    cout<<endl;
    mostrarmatriz(matriz,r);
    cout<<endl;
    cout<<"----------Matriz Secundaria Volteada--------";
    matrizsecunvolteada(matriz,r);
    cout<<endl;
    mostrarmatriz(matriz,r);
    
    return 0;
}
void llenarmatriz(int mat[][5], int r){
    int num=1;
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++){
            mat[r][c]=num++;
        }
    }
}
void mostrarmatriz(int mat[][5],int r){
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++){
            cout<<mat[r][c] <<"\t";
        }
        cout<<endl;
    }
}
void dprimario(int mat[][5],int r){
    for(int r=0;r<5;r++){
        cout<<mat[r][r];
    }
}
void dsecundaria(int mat[][5],int r){
    for(int r=0,c=4;r<5;r++,c--){
        cout<<mat[r][c];
    }
}

void matrizvolteada(int mat[][5],int r){
    int aux=0;
    for(int c=0;c<4;c++){
        for(int r=c+1;r<5;r++){
            aux=mat[r][c];
            mat[r][c]=mat[c][r];
            mat[c][r]=aux;
        }
    }
}
void matrizsecunvolteada(int mat[][5], int r){
    int c2,r2,aux;
    for(int c=4;c>0;c--){
        for(r=5-c;r<5;r++){
            c2=5-r-1;
            r2=5-c-1;
            aux=mat[r][c];
            mat[r][c]=mat[r2][c2];
            mat[r2][c2]=aux;
        }
    }
}
