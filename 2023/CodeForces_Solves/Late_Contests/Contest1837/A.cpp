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

    int x, k;

    cin>>x>>k;

    if(x%k)
        cout<<1<<endl<<x<<endl;
    else 
        cout<<2<<endl<<x-1<<spc<<1<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;