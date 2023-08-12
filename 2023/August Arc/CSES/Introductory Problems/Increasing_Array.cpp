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

    lli n;
    cin>>n;
    lli a[n];
    lp(0,n,1)
        cin>>a[i];
    
    lli total = 0;

    lp(1,n,1){
        if(a[i-1]>a[i]){
            total += (a[i-1]-a[i]);
            a[i] = a[i-1];
        }
    }

    cout<<total<<endl;

}



shuru;
fastio;

solve();

shesh;