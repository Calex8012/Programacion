#include <iostream>
#include <math.h>

using namespace std;

int fg(int a, int b, int c, float &x1, float &x2);

int main()
{
    int a,b,c;
    float x1,x2;
    cout<<"Ingrese valor de a ";
    cin>>a;
    cout<<"Ingrese valor de b ";
    cin>>b;
    cout<<"Ingrese valor de c ";
    cin>>c;
    if(fg(a,b,c,x1,x2)==0)
        cout<<"Hay error!";
    else 
        cout<<x1<<x2;

    return 0;
}
int fg(int a, int b, int c, float &x1, float &x2)
{
    x1=(-b+sqrt(pow(b,2)-(4*a*c))/(2*a));
    x2=(-b-sqrt(pow(b,2)-(4*a*c))/(2*a));
    return x1,x2;
    
}
