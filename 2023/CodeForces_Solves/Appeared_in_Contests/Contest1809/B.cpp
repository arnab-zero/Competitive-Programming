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

    n = n-1;

    n = n/4 + 1;

    if(n & 1)
        cout<<2*n<<endl;
    else 
        cout<<n<<endl;



}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;