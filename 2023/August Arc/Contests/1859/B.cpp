#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(x,n,d) for(int i=x;i<n;i+=d)
#define spc " "
#define nl cout<<endl;
typedef long long int lli;

void solve(){

    lli l;
    cin>>l;

    vector<pii> v;
    
    lp(0,l,1){
        lli n;
        cin>>n;
        lli a[n];
        for(int j=0; j<n; ++j)
            cin>>a[j];
        sort(a,a+n);

        v.pb({a[1],a[0]});
    }

    sort(v.begin(),v.end());

    lli minia = v[0].second, minib = v[0].first, res = v[0].first;

    for(int i=1; i<l; ++i){
        res += v[i].first;
        if(minia > v[i].second)
            minia = v[i].second;
        if(minib > v[i].first)
            minib = v[i].first;
    }

    // cout<<"res"<<endl;
    // cout<<"mini "<<mini<<endl;
    // for(auto i:v){
    //     cout<<i.first<<spc<<i.second<<endl;
    // }

    cout<<res+minia-minib<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;