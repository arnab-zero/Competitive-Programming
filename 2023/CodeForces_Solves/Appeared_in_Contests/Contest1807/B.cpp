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

    int n, ev=0, od=0;
    cin>>n;
    int a[n];
    lp(0, n, 1){
        cin>>a[i];
        if(a[i] & 1)
            od+=a[i];
        else 
            ev+=a[i];
    }

    if(ev>od)
        cout<<"YES"<<endl;
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