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

int doxor(int a, int b, int n){

    if(n == 0)
        return a;
    else if(n == 1)
        return b;
    else 
        return doxor(a,b,n-1) + doxor(a,b,n-2);

}

void solve(){

    int a, b, n;
    cin>>a>>b>>n;

    int res = doxor(a, b, n);
    cout<<res<<endl;

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;