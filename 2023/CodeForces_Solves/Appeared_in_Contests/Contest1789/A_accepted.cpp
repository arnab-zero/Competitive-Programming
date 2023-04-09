#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define spc " "
#define pb push_back
typedef long long int lli;

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n, out=0;
        cin>>n;
        int a[n]; 
        for(int i=0; i<n; ++i)
            cin>>a[i];
            
        for(int i=0; i<n; ++i){
            for(int j=i+1; j<n; ++j){
                if(__gcd(a[i], a[j])<=2){
                    out=1;
                    break;
                }
            }
            if(out)
                break;
        }

        if(out){
            cout<<"Yes"<<endl;
            continue;
        }

        cout<<"No"<<endl;
    }

    return 0;
}