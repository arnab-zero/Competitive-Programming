#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(n) for(int i=0;i<n;++i)
#define spc " "
typedef long long int lli;

void solve(){

    int n;
    string st;
    cin>>n>>st;
    
    if(n==2 and st[0]>=st[1]){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl<<2<<endl;
    cout<<st[0]<<spc;
    for(int i=1; i<n; ++i)
        cout<<st[i];
    cout<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;