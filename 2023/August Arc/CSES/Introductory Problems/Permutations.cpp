#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(x,n,d) for(lli i=x;i<n;i+=d)
#define spc " "
#define nl cout<<endl;
typedef long long int lli;

void solve(){

    lli n;
    cin>>n;

    if(n==1){
        cout<<n<<endl;
        return;
    }

    if(n<4){
        cout<<"NO SOLUTION"<<endl;
        return;
    }

    lp(2,n,2)
        cout<<i<<spc;
    if(n%2==0)
        cout<<n<<spc;
    lp(1,n,2)
        cout<<i<<spc;
    if(n&1)
        cout<<n<<spc;

}



shuru;
fastio;

solve();

shesh;