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

    vi v;
    lp(0,n,1){
        int x;
        cin>>x;
        v.pb(x);
    }

    int diff=INT_MAX, index;
    lp(0,n-1,1){
        if(v[i+1]-v[i] < 0){
            cout<<0<<endl;
            return;
        }
        if(v[i+1]-v[i] < diff)
            index = i+1, diff = v[i+1]-v[i];
    }

    ++diff;

    if(diff&1)
        cout<<diff/2+1<<endl;
    else 
        cout<<diff/2<<endl;

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;