#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; ++i){
            cin>>a[i];
        }

        int i=0, j=n-1, mini=1, maxi=n;
        
        while(1){
            if(i>=j){
                cout<<-1<<endl;
                break;
            }
            
            int out = 1;
            if(a[i]==mini){
                ++i, ++mini;
                out=0;
            }
            else if(a[i]==maxi){
                ++i, --maxi;
                out=0;
            }
            
            if(a[j]==mini){
                --j, ++mini;
                out=0;
            }
            else if(a[j]==maxi){
                --j, --maxi;
                out=0;
            }

            if(out){
                cout<<i+1<<" "<<j+1<<endl;
                break;
            }
        }
    }

    return 0;
}
