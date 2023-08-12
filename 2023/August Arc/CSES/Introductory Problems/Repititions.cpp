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
    lli n = st.size();

    int maxi = 1, count = 1;

    lp(1,n,1){
        if(st[i]!=st[i-1]){
            maxi = max(count,maxi);
            count = 1;
        }
        else 
            ++count;
    }

    maxi = max(maxi, count);

    cout<<maxi<<endl;

}



shuru;
fastio;

solve();

shesh;