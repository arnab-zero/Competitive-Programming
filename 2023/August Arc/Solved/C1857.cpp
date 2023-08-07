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

    int size, n;
    cin>>size;
    n = (size*(size-1))/2;
    //cout<<"size: "<<n<<endl;
    int a[n];
    lp(0,n,1)
        cin>>a[i];

    sort(a,a+n);

    int diff = size;
    vi v;

    for(int i=0; i<n; ){
        cout<<a[i]<<spc;
        int j=i;
        i += (--diff);
        if(diff<=0 or j>i or i>=n)
            break;
    }

    cout<<a[n-1]<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;