#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define RZ return 0;
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define mpr make_pair
#define lp(n) for(int i=0; i<n; ++i)
#define spc " "
#define nl cout<<endl
typedef long long int lli;



shuru;

int t, n, mi, ind;
cin>>t;

while(t--){
    cin>>n;
    map<int, int> m;
    int x;

    for(int i=0; i<n; ++i){
        cin>>x;
        m.insert(pair<int, int>(x, i+1));
        
    }
cout<<"de"<<endl;
    for(auto i = m.begin(); i!=m.end(); ++i)
        cout<<i->first<<spc<<i->second<<endl;
cout<<"dend"<<endl;

    int a[n+1] = {0};
    int first = 1, y, count = 0;

    for(auto i=m.begin(); i!=m.end(); ++i){
        if(first){
            y = i->first;
            --first;
            continue;
        }

        x = y;
        y = i->first;

        if(y%x != 0)
        {
            int temp = a[i->second] = x - y%x;
            y = y+temp;
            ++count;
        }
    }

    cout<<count<<endl;

    if(count){
        for(int i=1; i<n+1; ++i){
            if(a[i]!=0)
                cout<<i+1<<spc<<a[i]<<endl;
        }
    }

}

shesh;