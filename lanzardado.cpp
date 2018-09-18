#include <iostream>
#include<stdio.h>
#include<time.h>
using namespace std;
int lanzardado();
int main()
{
    cout<<lanzardado();

    return 0;
}
int lanzardado()
{
    int dado;
    srand(time(0)); 
    dado=rand()%6+1;
   
    return dado;
}
