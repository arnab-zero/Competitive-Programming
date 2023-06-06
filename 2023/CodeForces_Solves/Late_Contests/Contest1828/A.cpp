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
typedef long long int lli;

void solve(){

    int n;
    cin>>n;

    if(n&1){
        for(int i=1; i<=n; ++i)
            cout<<i<<spc;
        cout<<endl;
    }
    else{
        for(int i=1; i<=n; ++i)
            cout<<2*i<<spc;
        cout<<endl;
    }

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;