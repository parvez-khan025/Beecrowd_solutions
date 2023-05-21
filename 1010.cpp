#include<bits/stdc++.h>
using namespace std;
int main() 
    {
        int a,b,x,y;
        double m,n,ans;

        cin>>a>>b>>m;
        cin>>x>>y>>n;

        ans=(b*m)+(y*n);

        cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<ans<<endl;



        return 0; 
        
    }    
