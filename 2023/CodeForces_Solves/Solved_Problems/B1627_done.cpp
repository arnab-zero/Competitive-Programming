#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long int lli;

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        vector<int> v;

        int i=1, j=1;

        while(i<=n){

            if(j>m){
                ++i;
                j=1;
                continue;
            }

            int opt = max({abs(i+j-2), abs(m-i+n-j), abs(i-1)+abs(j-m), abs(j-1)+abs(i-n)});
            v.push_back(opt);

            ++j;
        }

        sort(v.begin(), v.end());

        for(auto p:v){
            cout<<p<<" ";
        }
        cout<<endl;
    }

    return 0;
}