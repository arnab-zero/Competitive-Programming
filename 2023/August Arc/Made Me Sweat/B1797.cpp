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

    int n, k;
    cin>>n>>k;
    int a[n*n];
    lp(0,n*n,1){
        cin>>a[i];
    }

    int count = 0, limit = (n*n)/2, size = n*n;

    if(n==1){
        cout<<"YES"<<endl;
        return;
    }

    lp(0,limit,1){
        if(a[i]!=a[size-1-i]){
            ++count;
        }
    }
    
    if(count>k){
        cout<<"NO"<<endl;
        return;
    }

    if(n%2){
        cout<<"YES"<<endl;
        return;
    }

    //cout<<k<<spc<<count<<spc;

    if((count%2)==(k%2)){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;