#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n;
        string st;
        cin>>n>>st;

        int a=0, b=n-1, i;

        for(i=0; i<n/2; ++i){
            if(st[a+i] == st[b-i]){
                break;
            }
        }

        cout<<n-2*i<<endl;
    }

    return 0;
}