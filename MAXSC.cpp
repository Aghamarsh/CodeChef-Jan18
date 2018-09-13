#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
int main() 
{        
        ll t;
        cin>>t;
        
        ll n;
        for(ll i=0;i<t;i++)
        {
            ll r;
            cin>>n;
            ll flag=0;
            ll a[n][n];
            
            for(ll j=0;j<n;j++)
            for(ll k=0;k<n;k++)
            cin>>a[j][k];
            
            for(ll j=0;j<n;j++)
            sort(a[j],a[j]+n);
            
            ll max=a[n-1][n-1];
            r=n-1;
            for(ll j=n-1;j>0;j--)
            {
                if(a[j-1][0]>a[j][r])
                {
                    flag=1;
                    break;
                }
                else
                {
                    for(ll p=n-1;p>=0;p--)
                    if(a[j-1][p]<a[j][r])
                    {
                        max+=a[j-1][p];
                        r=p;
                        break;
                    }
                }
            }
            
            if(flag==1)
            cout<<-1<<endl;
            else
            cout<<max<<endl;
        }
}