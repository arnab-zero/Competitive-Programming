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

    int n, x;
    cin>>n;

    map<int,int> m;

    lp(0,n,1){
        cin>>x;
        m[x] = i+1;
    }

    int count=0;

    lp(1,n+1,1){
        if(m[i-1] > m[i])
            ++count;
    }

    cout<<count<<endl;
}



shuru;
fastio;

// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

int t;
cin>>t;

while(t--)
    solve();

shesh;