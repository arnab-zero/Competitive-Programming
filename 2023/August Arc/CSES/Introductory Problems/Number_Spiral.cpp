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

    lli a, b;
    cin>>a>>b;

    lli ca=0, cb=0, res;
    
    if(a>=b){
        if(a&1){
            ca = (a-1)*(a-1)+1;
        }
        else 
            ca = a*a;
    }
    else{
        if(b&1){
            cb = b*b;
        }
        else 
            cb = (b-1)*(b-1)+1;
    }

    if(ca){
        res = ca + b - 1;
    }
    else if(cb){
        res = cb + a - 1;
    }

    cout<<res<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;