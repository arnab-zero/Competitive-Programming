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

    lli n, res ;
    cin>>n;

    lli a[n-1];
    lp(0,n-1,1)
        cin>>a[i];
    
    sort(a,a+n);

    lp(0,n-1,1){
        if(a[i]+1 != a[i+1]){
            res = a[i]+1;
            break;
        }
    }

    if(res <= n){
        cout<<res;
    }
    else    
        cout<<1;

}



shuru;
fastio;

solve();

shesh;