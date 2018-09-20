#include <iostream>
#include <stdio.h>
using namespace std;
void histograma(int n);
int main()
{
    histograma(5);
    histograma(10);

    return 0;
}
void histograma(int n){
    for (int i=1;i<=n;i++)
    {
        cout<<"*";
        
    }
    cout<<endl;
}
