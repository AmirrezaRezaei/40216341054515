#include <iostream>
using namespace std;


int main()

{ int i,p[100];
        for(i=0;i<=99;i++)
            cin>>p[i];
        for (i=99;i>=0;i--)
            cout<<p[i] << " " ;
}