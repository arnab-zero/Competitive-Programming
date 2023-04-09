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
    string a, b;
    cin>>n>>a>>b;

    lp(0, n, 1){
        if(a[i]=='B')
            a[i] = 'G';
        if(b[i]=='B')
            b[i]='G';
    }

    //cout<<"now: "<<a<<spc<<b<<endl;

    if(a==b){
        cout<<"YES"<<endl;
    }
    else 
        cout<<"NO"<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;