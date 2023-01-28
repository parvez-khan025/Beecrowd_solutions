#include<bits/stdc++.h>
using namespace std;
int main()
{   
    #ifndef PK
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

        char name[100];
    double a, b,c;
    
    cin>>name;
    cin>>a>>b;
    
    c=a+(b*0.15);

    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<c<<endl;

    return 0;
}
