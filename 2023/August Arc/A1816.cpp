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

    int a, b;
    cin>>a>>b;

    if(a==1 or b==1){
        cout<<1<<endl;
        cout<<a<<spc<<b<<endl;
        return;
    }

    cout<<2<<endl;
    cout<<a-1<<spc<<1<<endl;
    cout<<a<<spc<<b<<endl;

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;

