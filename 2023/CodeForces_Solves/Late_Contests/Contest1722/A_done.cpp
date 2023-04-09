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

    int n;
    cin>>n;
    string st;
    cin>>st;

    if(st.size() != 5){
        cout<<"NO"<<endl;
        return;
    }

    sort(st.begin(), st.end());

    //cout<<"now: "<<st<<spc<<st.size()<<endl;

    if(st == "Timru"){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;