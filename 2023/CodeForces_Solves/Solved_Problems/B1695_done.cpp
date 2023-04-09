#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long int lli;

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n, mini = INT_MAX, ind, passed = 0;
        cin>>n;

        int a[n];
        for(int i=0; i<n; ++i){
            cin>>a[i];
            if(i!=0 && a[i]!=a[i-1])
                passed=1;
        }

        if(n%2){
            cout<<"Mike"<<endl;
            continue;
        }
        else if(!passed){
            cout<<"Joe"<<endl;
            continue;
        }

        for(int i=0; i<n; ++i){
            if(a[i]<mini){
                ind = i;
                mini = a[i];
            }
        }

        if((ind+1)%2)
            cout<<"Joe"<<endl;
        else    
            cout<<"Mike"<<endl;
    }

    return 0;
}