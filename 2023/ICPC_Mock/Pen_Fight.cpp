#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(void){
    lli t, n, q;
    cin>>t;

    while(t--){
        cin>>n;
        lli point[n], pen[n];
        vector<lli> player(n, 1);

        for(int i=0; i<n; ++i){
            cin>>point[i];
            pen[n] = i+1;
        }

        cin>>q;

        while(q--){
            int type, b, a;
            cin>>type;

            if(type == 1){
                cin>>a>>b;
                if(point[a] > point[b]){
                    player[a] += player[b];
                    point[a] += point[b];
                }
                else if(point[a] < point[b]){
                    player[b] += player[a];
                    point[b] += point[a];
                }
                

            }
            else 
                cin>>
        }

    }
}