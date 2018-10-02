#include <iostream>

using namespace std;

int funcionx(int x);
int main()
{
    
    for(int i=1;i<=5;i++)
        cout<<i<<"\t"<<funcionx(i)<<endl;
        

    return 0;
}
int funcionx(int x){
    if(x==0)
        return 1;
        else if(x==1)
            return 1;
            else if(x>1)
                return x*funcionx(x-1); 
                

    
}
