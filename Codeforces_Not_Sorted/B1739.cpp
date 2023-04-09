#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define vi vector<int>
#define vlli vector<long long int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define mpr make_pair
#define spc " "
#define nl cout<<endl
typedef long long int lli;

shuru;

lli t, n;
cin>>t;
while(t--){
    cin>>n;
    lli x, out = 0;
    vlli v;
    for(lli i=0; i<n; ++i)
        cin>>x, v.pb(x);

    if(n==1)
    {
        cout<<v[0]<<endl;
        continue;
    }

    vlli res;
    res.pb(v[0]);
    for(lli i=1; i<n; ++i)
    {
        lli a = res[i-1]+v[i];
        res.pb(a);
        if(res[i-1]-v[i]>=0 && res[i-1]-v[i]!=a)
        {
            out = 1;
            break;
        }
    }

    if(out)
    {
        cout<<"-1"<<endl;
        continue;
    }

    for(lli i=0; i<n; ++i)
        cout<<res[i]<<spc;
    nl;
}

shesh;