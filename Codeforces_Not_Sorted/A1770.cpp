#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(void){
    lli t, n, m;
    cin>>t;

    while(t--){
        cin>>n>>m;
        lli a[n], b[m];
        lli sa = 0, sb = 0;

        for(lli i=0; i<n; ++i)
            cin>>a[i], sa += a[i];

        for(lli j=0; j<m; ++j)
            cin>>b[j], sb += b[j];

        
        if(n>=m){
            sort(a, a+n);
            for(lli i=m; i<n; ++i){
                sb += a[i];
            }
            cout<<sb<<endl;
        }
        else{
            sort(b, b+m);
            for(lli i=0; i<m-n; ++i)
                sb -= b[i];
            cout<<sb<<endl;
        }
    }

    return 0;
}
