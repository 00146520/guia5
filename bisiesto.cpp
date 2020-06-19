#include "iostream"
using namespace std;

//son bisiestos si cumplen ciertas normas
//divisible entre 400
//divisible entre 4 y no divisible entre 100
bool bs(int a)
{
    return((a % 4)==0 && (a % 100)!=1)||((a%400)==0);
}
int main()
{
    int a,b=0;
    cout<<endl<<"Conozca si es anho bisiesto"<<endl;
    cout<<"Ingrese el anho: "<<endl; cin>>a;
    
    if (b=bs(a))
    {
       cout<<"El anho es bisiesto";
    }
    else
    {
        cout<<"El anho no es bisiesto";
    }

    
}