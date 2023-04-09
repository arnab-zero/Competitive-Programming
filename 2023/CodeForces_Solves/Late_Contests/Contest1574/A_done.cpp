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

    string st = "";
    lp(0, n, 1){
        st += "()";
    }

    cout<<st<<endl;

    for(int z=1; z<n; ++z){
        lp(0, 2*n, 1){
            if(st[i]==')' and st[i+1]=='('){
                st[i]='(', st[i+1]=')';
                break;
            }
        }

        cout<<st<<endl;
    }
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;