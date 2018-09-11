#include <iostream>

using namespace std;

int divisiones(int a);

int main()
{
    cout<<divisiones(20);

    return 0;
}
int divisiones(int a)
{
    int con=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            con++;
        }
    }
    return con;
}
