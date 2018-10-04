#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3,num4,num5,promedio;
    cout<<"ingrese 5 numeros ";
    cin>>num1>>num2>>num3>>num4>>num5;
    promedio=(num1+num2+num3+num4+num5)/5;
    cout<<promedio<<endl;
    if(num1>promedio)
    cout<<num1<<endl;
     if(num2>promedio)
    cout<<num2<<endl;
     if(num3>promedio)
    cout<<num3<<endl;
     if(num4>promedio)
    cout<<num4<<endl;
    if(num5>promedio)
    cout<<num5<<endl;
    return 0;
}
