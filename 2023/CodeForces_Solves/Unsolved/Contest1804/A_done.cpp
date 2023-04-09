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

    int a, b;
    cin>>a>>b;

    int temp = abs(a);
    a = max(abs(b),temp);
    b = min(abs(b),temp);

    //cout<<a<<spc<<b<<endl;

    if(a-b>0)
        cout<<2*b+1+2*(a-b-1)<<endl;
    else 
        cout<<2*b<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;