#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long int lli;
 
int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int it=0, bef=0, af=0, all=0, unit=0;
        int x, y;

        while(n--){
            cin>>x>>y;
            if(x==k and k==y)
                ++unit, ++it;
            else if(x<=k-1 and k+1<=y){
                ++all;
                ++it;
            }
            else if(x==k and k+1<=y)
                ++af, ++it;
            else if(x<=k-1 and k==y){
                ++bef;
                ++it;
            }
        }

        if(n==1 and unit){
            cout<<"YES"<<endl;
            continue;
        }
        else if(n==1 and !unit){
            cout<<"NO"<<endl;
            continue;
        }

        
        if(unit)
            cout<<"YES"<<endl;
        else if(bef and af)
            cout<<"YES"<<endl;
        else if(bef or af){
            cout<<"NO"<<endl;
        }
        else 
            cout<<"NO"<<endl;
    }

    return 0;

}