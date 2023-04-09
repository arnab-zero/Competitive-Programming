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

    lli l, r, d;
    cin>>l>>r>>d;

    if(l%d==0 and l-d>0){
        cout<<l-d<<endl;
    }
    else if(r%d==0){
        cout<<r+d<<endl;
    }
    else{
        lli q1 = l/d, q2 = r/d;

        if(q1*d>0)
            cout<<q1*d<<endl;
        else 
            cout<<++q2*d<<endl;
    }
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;