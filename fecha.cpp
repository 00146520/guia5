#include "iostream"
using namespace std;
bool bs(int a)
{
    return((a % 4)==0 && (a % 100)!=1)||((a%400)==0);
}
int dm(int m, int a)
{
    int dias=31;
    if (m==4||m==6||m==9||m==11)
    {
        dias=30;
    }
    else if (m==2)
    {
        if (bs(a))
        {
            dias==29;
        }
        else
        {
            dias==28;
        }
    }
    return dias;
}
int main()
{
    int d,m,a;
    cout<<endl<<"fecha en formato dd/mm/aa"<<endl;
    cout<<endl<<"ingrese dia: "; cin>>d;
    cout<<"ingrese mes: "; cin>>m;
    cout<<"ingrese anho: "; cin>>a;
    d++;
    if (d>dm(m,a))
    {
        d=1;
        m++;
        if (m>12)
        {
            m=1;
            a++;
        } 
    }
  cout<<d<<"/"<<m<<"/"<<a<<endl;
}