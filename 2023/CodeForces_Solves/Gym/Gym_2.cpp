#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin>>t;

    while(t--){
        int a, b, i;
        string sa, sb;

        cin>>a>>b>>sa>>sb;

        for(i=1; i<=min(a,b); ++i){
            if(sa[a-i] != sb[b-i])
                break;
        }

        cout<<i-1<<endl;
    }

    return 0;
}