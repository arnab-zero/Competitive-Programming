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
    string st;

    cin>>n>>st;

    vector<int> v(n+1, 1);

    for(int i=0; i<n; ++i){

        if(st[i] == '>'){
            v[i+1] = v[i] - 1;
        }
        else if(st[i] == '<'){
            v[i+1] = v[i] + 1;
        }

    }

    sort(v.begin(), v.end());

    int count = 1;

    for(int i=1; i<n+1; ++i){
        if(v[i] != v[i-1])
            ++count;
    }

    cout<<count<<endl;
    
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;