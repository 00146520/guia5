#include "iostream"
#include "conio.h"
using namespace std;
//operacion para sacar el minimo comun divisor
int cd(int may, int men, int res)
{
    do{
        res = may%men;
        if (res!=0)
        {
            may=men;
            men=res;
        }
    } while (res!=0);
    {
        cout<<endl<<"El mcd resultante es: "<<men<<endl;
    }
    
}
// perdir datos al usuario
int main()
{
    int may, men, res, resp;
    cout<<endl<<"mcd de dos numeros enteros"<<endl;
    cout<<endl<<"ingrese el numero mas alto"<<endl; cin>>may;
    cout<<"ingrese el numero menor"<<endl; cin>>men;
    resp = cd(may, men, res);
}
