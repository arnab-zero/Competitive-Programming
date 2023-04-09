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

    vector<string> v(3*n), sv(3*n);

    lp(0,3*n,1){
        cin>>v[i];
        sv[i] = v[i];
    }

    sort(sv.begin(), sv.end());

    map<string, int> m;

    int i=0;
    while(i<3*n){

        if(sv[i]==sv[i+1] && sv[i+1]==sv[i+2])
            m[sv[i]] = 0, i+=3;
        else if(sv[i]==sv[i+1]){
            m[sv[i]] = 1;
            i+=2;
        }
        else {
            m[sv[i]] = 3;
            ++i;
        }
    }

    int pa=0, pb=0, pc=0;

    // lp(0, 3*n, 1){
    //     cout<<sv[i]<<spc;
    // }
    // cout<<endl;

    // lp(0, 3*n, 1){
    //     cout<<v[i]<<spc<<m[v[i]]<<spc;
    // }
    // cout<<endl;

    lp(0, n, 1){
        pa+=m[v[i]];
    }

    lp(n, 2*n, 1){
        pb+=m[v[i]];
    }

    lp(2*n, 3*n, 1){
        pc+=m[v[i]];
    }

    cout<<pa<<spc<<pb<<spc<<pc<<endl;
}



shuru;
fastio;

int t;
cin>>t;

while(t--)
    solve();

shesh;