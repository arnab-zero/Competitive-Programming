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
#define llp(x,n,d) for(lli i=x;i<n;i+=d)
#define spc " "
typedef long long int lli;

void solve(){

    int n;
    cin>>n;
    lli a[n], b[n];

    lp(0, n, 1){
        cin>>a[i];
        b[i] = a[i];
    }

    sort(a, a+n);

    lli max1 = a[n-1], max2 = a[n-2];

    lp(0, n, 1){
        if(b[i]!=max1)
            cout<<b[i]-max1<<spc;
        else 
            cout<<max1-max2<<spc;
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