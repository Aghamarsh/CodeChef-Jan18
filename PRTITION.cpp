#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll max_sum(ll a[],ll s,ll n)
{
    ll max=INT_MIN;
    ll mt=0;
    
    for(ll i=0;i<s;i++)
    {
        mt+=a[i%n];
        
        if(max<mt)
        max=mt;
        
        if(mt<0)
        mt=0;
    }
    return max;
}
int main() {
	
	ll t;
	cin>>t;
	ll n,k,sum;
	
	for(ll i=0;i<t;i++)
	{
	    sum=0;
	    cin>>n>>k;
	    
	    ll a[n];
	    
	    for(ll j=0;j<n;j++)
	    {
	        cin>>a[j];
	        sum+=a[j];
	    }
	  
	        if(sum<=0)
	        {
	            if(k==1)
	            cout<<max_sum(a,n,n)<<endl;
	            else
	            cout<<max_sum(a,2*n,n)<<endl;
	        }
	        else
	        {
	            if(k==1)
	            cout<<max_sum(a,n,n)<<endl;
	            else
	            {
	                ll res=sum*(k-2);
	                res=res+max_sum(a,2*n,n);
	                cout<<res<<endl;
	            }
	        }
    }
}