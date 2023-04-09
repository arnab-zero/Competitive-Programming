#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n;
        string st;

        cin>>n>>st;

        int up=0, right=0, on=0;

        for(int i=0; i<n; ++i){
            if(st[i] == 'U')
                ++up;
            else if(st[i] == 'D')
                --up;
            else if(st[i] == 'R')
                ++right;
            else if(st[i] == 'L')
                --right;
            
            if(up == 1 && right == 1){
                cout<<"YES"<<endl;
                ++on;
                break;
            }
        }

        if(on)
            continue;
        
        cout<<"NO"<<endl;
    }

    return 0;
}