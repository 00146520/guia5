#include "iostream"
using namespace std;
int main()
{
int h, m, s;
cout<<endl<<"reloj en formato 24h"<<endl;
cout<<endl<<"ingrese la hora: "<<endl; cin>>h;
cout<<"ingrese los minutos: "<<endl; cin>>m;
cout<<"ingrese los segundos: "<<endl; cin>>s;
    s=s+1;
    if (s>=60)
    {
        s=0;
        m= m+1;
        if (m>=60)
        {
            m=0;
            h=h+1;
            if (h>=24)
            {
                h=0;  
            }
    }
    }
    cout<<endl<<h<<":";   
    cout<<m<<":";
    cout<<s;    
}
