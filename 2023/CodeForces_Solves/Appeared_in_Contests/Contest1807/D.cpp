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

    int n, q;
    cin>>n>>q;

    lli a[n], sum[n];
    lli total = 0;

    lp(0, n, 1){
        cin>>a[i];
        total += a[i];

        if(i==0)
            sum[i] = a[i];
        else 
            sum[i] = sum[i-1] + a[i];
    }
    

    while(q--){
        int l, r;
        lli x;
        cin>>l>>r>>x;

        l = l-1;
        r = r-1;

        lli res = total - sum[r] + (r-l+1)*x;

        if(l-1 >= 0)
            res += sum[l-1];

        if(res & 1)
            cout<<"YES"<<endl;
        else 
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