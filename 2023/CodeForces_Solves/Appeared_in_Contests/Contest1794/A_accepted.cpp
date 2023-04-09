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

    int n, one=0;
    cin>>n;

    string a, b, st;

    for(int i=0; i<2*(n-1); ++i){
        cin>>st;
        if(st.size()==n-1 and one==0)
            a=st, one=1;
        else if(st.size()==n-1 and one==1)
            b=st;
    }

    // cout<<a<<spc<<b<<endl;
    // cout<<a.size()<<spc<<b.size()<<endl;

    for(int i=0; i<=n-2; ++i){
        if(a[i]!=b[n-2-i]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
    
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;