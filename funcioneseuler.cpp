using namespace std;
int factorial(int fac);
int potencia(int base, int potencia);
int main()
{
    
    int numero,limite;
    float suma=0;
    cout<<"dame x ";
    cin>>numero;
    cout<<"Ingrese el limite ";
    cin>>limite;
    for(int i=1;i<=limite;i++)
    {
        suma+=(float)potencia(numero,i)/fac(i);
    }
  return 0;
}
    
    int potencia(int base, int potencia)
    {
        for(int i=1;i<=potencia;i++)
        {
            total*=numero;
        }
    }
    int factorial(int fac)
    {
        for(int i=1;i<=limite;i++)
        {
            fac*=1;
        }
        return fac;
    }
