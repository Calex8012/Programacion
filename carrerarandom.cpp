#include <iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
int lanzardado();
int correr();
int main()
{
    int a=0,b=0;
    srand(time(0));
    while(a<100 && b<100)
    {
        a=correr()+a;
        b=correr()+b;
        cout<<"Corredor A "<<" "<<a<<" Corredor B "<< b <<endl;
        
    }

    return 0;
}
int lanzardado()
{
    int dado;
    dado=rand()%6+1;
   
    return dado;
}
int correr()
{
    int dado;
    dado=lanzardado();
    if(dado>=4 && dado <=6 )
    return 2;
        if(dado<=2)
        return 1;
          else 
            return 3;
}
