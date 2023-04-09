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

    if(n & 1){
        cout<<n<<spc;
        n-=1;
    }

    int diff = n/2;
    lp(diff+1,n+1,1){
        cout<<i<<spc<<i-diff<<spc;
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