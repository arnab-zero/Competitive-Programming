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
    lli n;
    cin>>n;

    lli a[n];
    for(int i=0;i<n; ++i){
        cin>>a[i];
    }

    sort(a, a+n);

    lli left = a[0], right = 0;

    for(int i=0; i<n; ++i){

        if(i+1>=n-i-1){
            cout<<"NO"<<endl;
            return;
        }

        left += a[i+1];
        right += a[n-i-1];

        if(left<right){
            // cout<<left<<spc<<right<<endl;
            cout<<"YES"<<endl;
            return;
        }
    }
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;