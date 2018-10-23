#include <iostream>
#include <time.h>

using namespace std;
int lanzardado();

int main()
{
    int vector[101];
    int j1=0,j2=0;
    int llenar vector(vector, 101);
    while(j1<100 && j2<100)
    {
        j1+=lanzardado();
        if(j1<100){
        j1+=vector[j1];
        }
        j2+=lanzardado();
        if(j2<100){
        j2+=vector[j2];
        }
    }

    return 0;
}
int lanzardado()
{
    int dado;
    srand(time(0)); 
    dado=rand()%6+1;
   
    return dado;
}
