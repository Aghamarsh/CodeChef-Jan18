#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
        
        ll t; 
        cin>>t;
        ll a,b,c,d;
        
        for(ll i=0;i<t;i++)
        {
        		cin>>a>>b>>c>>d;
                
                if(a==b && c==d)
                cout<<"YES"<<endl;
                else if(a==c && b==d)
                cout<<"YES"<<endl;
                else if(a==d && b==c)
                cout<<"YES"<<endl;
                else 
                cout<<"NO"<<endl;
        }
       
}