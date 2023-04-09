#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin>>t;

    for(int i=1; i<=t; ++i){
        int m, n, k;
        cin>>m>>n>>k;

        cout<<"Case "<<i<<": ";
        if(n*k <= m)
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }

    return 0;
}