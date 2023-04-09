#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mpr make_pair
#define lpn for(int i=0;i<n;++i)
#define spc " "
typedef long long int lli;

void solve(){

    lli n, maxi=0;
    cin>>n;
    lli a[n];
    lpn{
        cin>>a[i];
        (a[i]>maxi)?(maxi=a[i]):(maxi=maxi);
    }

    int cnt=0, maxcnt=0;

    lpn{
        if(a[i]==maxi)
            ++cnt;
        else if(cnt>0){
            if(cnt>maxcnt)
                maxcnt=cnt;
            cnt=0;
        }
    }

    if(cnt>maxcnt)
        maxcnt=cnt;

    cout<<maxcnt<<endl;
}



shuru;
fastio;

solve();

shesh;