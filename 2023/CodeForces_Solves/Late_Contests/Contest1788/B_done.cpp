#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define spc " "

pair<int, int> solve(int n){
    if(n%10 != 9){
        pair<int, int> p = make_pair(min(n/2, n-n/2), max(n/2, n-n/2));
        return p;
    }
    else{
        pair<int, int> p = solve(n/10);

        int temp = p.first;
        p.first = p.second*10+4;
        p.second = temp*10+5;
        return p;
    }
}

int main(void){
    fastio;

    lli t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        pair<int, int> ans = solve(n);
        cout<<ans.first<<spc<<ans.second<<endl;
    }

    return 0;
}