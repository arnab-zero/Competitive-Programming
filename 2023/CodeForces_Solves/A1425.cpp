#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long int lli;

lli solve(lli n){
    if(n<=0)
        return 0;
    else if(n==1)
        return 1;
    else if(n%2){
        lli np = n-1;
        if(np%2){
            return 1+solve(np-1);
        }
        else
            return 1+solve(np-np/2);
    }
    else if(n%2 == 0){
        lli np = n-n/2;
        if(np%2){
            return n/2+solve(np-1);
        }
        else    
            return n/2 +solve(np-np/2);
    }
}

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        lli n;
        cin>>n;
        cout<<solve(n)<<endl;
    }

    return 0;
}