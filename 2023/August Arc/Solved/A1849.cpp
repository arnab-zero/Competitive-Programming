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

    int b, c, h;
    cin>>b>>c>>h;

    int ch = c+h;

    if(ch >= b-1){
        cout<<2*b-1<<endl;
    }
    else if(ch < b-1){
        cout<<2*ch+1<<endl;
    }

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;