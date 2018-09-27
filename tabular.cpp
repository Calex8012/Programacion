#include <iostream>
#include <math.h>

using namespace std;

void tabular(int inferior, int superior);
float funcion(float x);
int main()
{
    int inferior,superior,x;
    cout<<"Ingrese limite inferior ";
    cin>>inferior;
    cout<<"Ingrese limite superior ";
    cin>>superior;
    tabular(inferior,superior);
    return 0;
}
float funcion(float x){
    
    if (x>0){
        x=((pow(x,3)-2*x)/(3*x))+(6*x);
        return x;
    }
    else{
        x=(sqrt(pow(x,2)-x)/2.0);
        return x;
    } 
        
}
void tabular(int inferior, int superior){
    
    for(int x=inferior; x<=superior; x++){
        cout<<x<<"     "<<funcion(x)<<endl;
    }
    
}
