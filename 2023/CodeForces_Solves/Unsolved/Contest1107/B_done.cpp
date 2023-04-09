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

    lli k, x;
    cin>>k>>x;

    lli res = x;

    for(lli i=1; i<k; ++i){
        res += 9;
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