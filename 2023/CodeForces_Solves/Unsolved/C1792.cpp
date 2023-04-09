#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define pb push_back
#define spc " "
#define tab "\t"
typedef long long int lli;

void solve(){
    
}

int main(void){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n+1];

        for(int i=1; i<n; ++i){
            int x;
            cin>>x;
            a[x]=i;
        }

        int x, y, count=0;

        (n%2)?(x=n/2+1):(x=n/2);

        if(n & 1)
            y=x;
        else 
            y=x+1;

        int ix=a[x], iy=a[y], out=0;

        if(ix>iy)
            ++count;
        
        while(1){
            --x, ++y;
            
            if(x<1 and y>n){
                cout<<count<<endl;
                out=1;
                break;
            }

            if(a[x]<ix and a[y]>iy){
                ix=a[x];
                iy=a[y];
                continue;
            }
            else{
                --ix;
                ++iy;
                ++count;
            }
        }

        if(out)
            continue;

        cout<<count<<endl;
    }

    return 0;
}