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

    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if(b>d){
        //cout<<1<<spc;
        cout<<-1<<endl;
        return;
    }

    int diff = d-b, new_a = a+diff;

    if(new_a < c){
        //cout<<2<<spc;
        cout<<-1<<endl;
        return;
    }

    diff += (new_a-c);

    cout<<diff<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;
