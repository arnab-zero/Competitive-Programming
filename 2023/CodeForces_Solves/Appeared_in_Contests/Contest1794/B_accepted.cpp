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

    int n;
    cin>>n;

    lli a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }

    if(a[0]==1){
        ++a[0];
    }

    for(int i=1; i<n; ++i){
        if(a[i]==1)
            ++a[i];
        if(a[i]%a[i-1]==0)
            ++a[i];
    }

    for(int i=0; i<n; ++i){
        cout<<a[i]<<spc;
    }
    cout<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;