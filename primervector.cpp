#include <iostream>

using namespace std;

int main()
{
    int vector[10];
    int suma=0,num;
    cout<<"ingrese un numero ";
    cin>>num;
    for(int i=0;i<10;i++){
        vector[i]=num;
        num++;
    }
    for(int i=0;i<10;i++){
        suma=suma+vector[i];
    }
    for(int i=0;i<10;i++){
        cout<<i<<"="<<vector[i]<<endl;    
    }
    cout<<"-----------------------------------------------------------"<<endl;
    for(int i=9;i>=0;i--){
          cout<<i<<"="<<vector[i]<<endl; 
    }
    cout<<"La suma es "<<suma;

    return 0;
}
