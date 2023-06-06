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

    string st;
    cin>>st;

    int result = 1;

    if(st[0] == '0'){
        cout<<"0"<<endl;
        return;
    }

    lp(0, st.size(), 1){

        if(i==0 and st[i]=='?')
            result*=9;
        else if(st[i]=='?')
            result*=10;
    }

    cout<<result<<endl;

}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;