#include <iostream>
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

int liebre();
int tortuga();
int random();
int main()
{
    srand(time(0));
    int tortu=0,lie=0;
    while(lie<80 && tortu<80){
        tortu=tortu+tortuga();
        lie=lie+liebre();
        
        cout<<"Tortuga "<<" "<<tortuga<<" Liebre "<< Liebre <<endl;
    
    }
    
    return 0;
}
int random()
{
    int saltos;
    saltos=1+rand()%10;
   
    return saltos;
}
int liebre(){
    int saltos=random();
    
    if (saltos<=3){
        return 1;
    }
    else if (saltos<=5){
        return 9;
    }
    else if (saltos==6){
        return -10;
    }    
    else if (saltos <=8)
        return -2;
    else 
        return 0;
}
int tortuga(){
    int saltos=random();
    if (saltos <=4){
        return 3;
    }
    else if (saltos <= 7){
        return -6
    }
    else 
        return 1;
    }
    
}
