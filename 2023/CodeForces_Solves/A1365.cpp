#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long int lli;

int main(void){
    fastio;
    
    int t;
    cin>>t;

    while(t--){
        int m, n;
        cin>>m>>n;
        vector<int> row(m, 0), col(n, 0);
        int i=0, j=0, count = min(m, n);

        cout<<count<<" ";

        while(i<m){
            if(j==n){
                j=0;
                ++i;
                cout<<count<<" ";
                continue;
            }

            int x;
            cin>>x;

            if(x==1){
                if(!row[i] and !col[j])
                    --count;

                row[i]=1, col[j]=1;
            }
            
            ++j;
        }

        cout<<count<<" ";

        if(count%2)
            cout<<"Ashish"<<endl;
        else 
            cout<<"Vivek"<<endl;
    }

    return 0;
}