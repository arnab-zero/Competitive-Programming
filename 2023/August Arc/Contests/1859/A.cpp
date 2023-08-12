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

    lli n;
    cin>>n;
    lli a[n];
    lp(0,n,1)
        cin>>a[i];
    
    sort(a,a+n);

    lli maxi = a[n-1];
    lli count = 0;

    for(int i=n-1; i>=0; --i){
        if(a[i]==maxi)
            ++count;
        else 
            break;
    }

    if(n==count){
        cout<<-1<<endl;
        return;
    }
    else {
        cout<<n-count<<spc<<count<<endl;
        lp(0,n-count,1)
            cout<<a[i]<<spc;
        cout<<endl;
        lp(0,count,1){
            cout<<maxi<<spc;
        }
        cout<<endl;
    }

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;