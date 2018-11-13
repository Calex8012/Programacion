#include <iostream>
#include <string>
using namespace std;
int largo(char cad[]);
void funcion(char cad[]);
int main()
{
    char name[30];
    cin.getline(name, 30, '\n');
    cout<<name;
    cout<<"\n\n como vector \n";
    for(int i=0;name[i];i++)
        cout<<name[i]<<" ";
        
    cout<<largo(name);
    funcion(name);
    cout<<endl;
    cout<<name;
    
    
    return 0;
}

int largo(char cad[]){
    int i;
    for(i=0;cad[i];i++);
    return i;
}
void funcion(char cad[]){
    int s='a'-'A';
    for(int i=0;cad[i];i++)
        if(cad[i]>=97 && cad[i]<='z')
                cad[i]-=s;
    
}
