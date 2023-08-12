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

    int n;
    bool sorted = true;
    cin>>n;
    lli a[n];
    lp(0,n,1)
        cin>>a[i];
    lp(1,n,1){
        if(a[i-1]>a[i])
            sorted = false;
    }

    if(sorted){
        cout<<0<<endl;
        return;
    }

    lli maxi = 0;
    lp(1,n,1){
        if(a[i-1]>a[i]){
            maxi = max(a[i-1],maxi);
        }
    }

    cout<<maxi<<endl;

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;