//NR. PALINDROM

#include <iostream>

using namespace std;

int main()
{
    int numar,inv=0,x;

    cout<<"Introduceti numarul: ";cin>>numar;
    
    x=numar;

    while(x!=0)
    {
        inv=inv*10+x%10;
        x=x/10;
    }

    if(numar==inv)
        cout<<"Numarul "<<numar<<" este palindrom."<<endl<<endl;
    else
        cout<<"Numarul "<<numar<<" NU este palindrom."<<endl<<endl;

    return 0;
}
