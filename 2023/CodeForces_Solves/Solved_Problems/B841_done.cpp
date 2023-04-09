#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(void){
    fastio;

    lli n;
    int hasOdd=0;
    cin>>n;
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        if(x%2)
            ++hasOdd;
    }

    if(hasOdd)
        cout<<"First"<<endl;
    else 
        cout<<"Second"<<endl;

    return 0;
}