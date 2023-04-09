#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(n) for(int i=0;i<n;++i)
#define spc " "
typedef long long int lli;

void solve(){
    int n, res=0;
    cin>>n;
    vi v;
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        v.pb(x);
    }

    vi ar;

    for(int i=0; i<n; ++i){
        if(v[i]>0){
            ar.pb(v[i]);
            continue;
        }

        if(v[i]==0 && ar.empty())
            continue;

        sort(ar.begin(), ar.end());
        res+=ar[ar.size()-1];
        ar.pop_back();
    }

    cout<<res<<endl;
    return;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;