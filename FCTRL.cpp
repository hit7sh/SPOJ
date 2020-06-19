#include<bits/stdc++.h>                                                     
#define ll long long
using namespace std;
int count(ll n)
{
    if(n/5==0)return 0;
    return n/5+count(n/5);
}
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int tt;cin>>tt;
    while(tt--)
    {
       ll n;
       cin>>n;
        cout<<count(n)<<endl;  
    }
    return 0;
}
