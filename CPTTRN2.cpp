#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int r,c,i,j,tt;
    cin>>tt;
    char v[2]={'*','.'};
    while(tt--)
    {
    cin>>r>>c;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++)
            cout<<".*"[(i==1||j==1||i==r||j==c)];
        cout<<endl;}
    }
    return 0;
}
