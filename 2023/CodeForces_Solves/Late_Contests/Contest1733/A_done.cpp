#include <bits/stdc++.h>
using namespace std;

#define shuru int_fast32_t main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(n) for(int i=0;i<n;++i)
#define spc " "
typedef long long int lli;
#define int lli

void solve(){

    int n, k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
        if(i<k)
            continue;
        if(a[i]>a[i%k])
            a[i%k] = a[i];
    }

    int sum = 0;

    for(int i=0; i<k; ++i)
        sum+=a[i];

    cout<<sum<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;