#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lp(n) for(int i=0;i<n;++i)
#define spc " "
typedef long long int lli;

void solve(){

    int n, bef,af;
    cin>>n>>bef>>af;

    int highest = bef-af;
    int avg = af/(n-1);
    int rem = af%(n-1), done=rem+1;

    while(rem--){
        cout<<avg+1<<spc;
    }

    cout<<highest<<spc;

    for(int i=0; i<n-done; ++i)
        cout<<avg<<spc;

    cout<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;