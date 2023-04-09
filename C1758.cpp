#include <bits/stdc++.h>
using namespace std;

#define shuru int main(void){
#define shesh return 0;}
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define pob pop_back
#define mpr make_pair
#define spc " "
#define nl cout<<endl
typedef long long int lli;


int check(int n, int x)
{
    float qf = (float)n/x;
    int qi = (int)n/x;
    
    float lgf = (float)log2(qi);
    int lgi = (int)log2(qi);

    return (lgf-lgi>0)? 1:0;
}


shuru;

int t, n, x;
cin>>t;

while(t--){
    cin>>n>>x;

    if(n%x!=0)
    {
        cout<<"-1"<<endl;
        continue;
    }

    int det = check(n, x);

    int a[n+1] = {0};

    cout<<x<<spc;
    a[x] = 1;

    if(!det){
        for(int i=2; i<n; ++i)
        {
            if(a[i]!=1)
            {
                cout<<i<<spc;
                a[i] = 1;
            }
            else
            {
                cout<<2*i<<spc;
                a[2*i] = 1;
            }
        }
    }
    else{
        for(int i=2; i<n; ++i){
            if(i==x)
                cout<<n<<spc;
            else
                cout<<i<<spc;
        }
    }

    cout<<1<<endl;


}

shesh;