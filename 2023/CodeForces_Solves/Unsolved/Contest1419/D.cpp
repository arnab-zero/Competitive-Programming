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

    lli n;
    cin>>n;
    lli a[n];
    lp(0,n,1){
        cin>>a[i];
    }

    sort(a, a+n);

    if(n & 1)
        cout<<n/2<<endl;
    else 
        cout<<n/2-1<<endl;

    lp(1,n,2){
        cout<<a[i]<<spc<<a[i-1]<<spc;
    }

    if(n & 1)
        cout<<a[n-1]<<spc;

    cout<<endl;
}



shuru;
fastio;

solve();

shesh;