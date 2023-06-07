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

    int n, sum=0;
    cin>>n;

    int a[n];

    vi pos, neg;

    lp(0, n, 1){
        cin>>a[i];
        sum += a[i];

        if(a[i]>0)
            pos.pb(a[i]);
        else 
            neg.pb(a[i]);
    }

    if(sum == 0){
        cout<<"NO"<<endl;
        return;
    }
    else 
        cout<<"YES"<<endl;
    
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    if(sum > 0){
        for(auto i:pos)
            cout<<i<<spc;
        for(auto i:neg)
            cout<<i<<spc;
    }
    else {
        for(auto i:neg)
            cout<<i<<spc;
        for(auto i:pos)
            cout<<i<<spc;
    }

    cout<<endl;

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;