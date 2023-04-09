#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(void){
    fastio;

    lli t;
    cin>>t;

    while(t--){
        lli f, s, n, m;

        cin>>f>>s>>n>>m;

        if(n<m+1){
            if(n*s < n*f){
                cout<<n*s<<endl;
            }
            else
                cout<<n*f<<endl;
        }
        else if(n==m+1){
            if(n*s <= m*f){
                cout<<n*s<<endl;
            }
            else 
                cout<<m*f<<endl;
        }
        else if(n> m+1){
            if((m+1)*s < m*f){
                cout<<n*s<<endl;
            }
            else if((m+1)*s == m*f){
                cout<<n*s<<endl;
            }
            else{
                if(s<f)
                    cout<<(n/(m+1))*m*f + (n%(m+1))*s<<endl; 
                else if(s>=f)
                    cout<<(n/(m+1))*m*f + (n%(m+1))*f<<endl;
            }
        }
    }

    return 0;
}