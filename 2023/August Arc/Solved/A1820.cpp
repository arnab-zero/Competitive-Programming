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

    string st;
    cin>>st;

    int count = 0;
    
    lp(1,st.size(),1){
        if(st[i]=='_' and st[i-1]=='_')
            ++count;
    }

    if(st[0]!='^')
        ++count;
    if(st[st.size()-1]!='^' or st.size()==1)
        ++count;

    cout<<count<<endl;

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;