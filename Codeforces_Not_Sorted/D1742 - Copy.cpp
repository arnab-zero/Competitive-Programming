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


int gcd(int x, int y){
    while(1){
        if(x%y == 0)
            return y;
        else{
            int temp = x%y;
            x = y;
            y = temp;
        }
    }
}

/*
    if(x%y == 0)
        return y;
    else{
        int temp = x%y;
        x = y;
        y = temp;
        gcd(x, y);
*/


shuru;

int t, n;
cin>>t;

while(t--){
    cin>>n;
    int a[n];
    set<int> s;
    int out = 0, mi = 1, br = 0;
    for(int i=0; i<n; ++i)
        cin>>a[i];

    for(int i=n-1; i>=0; --i){
        if(mi-i>n-1){
            //br = 1;
            break;
        }

        if(s.find(a[i]) != s.end())
            continue;
        else
            s.insert(a[i]);

        for(int j=n-1; j>=i; --j)
        {
            if(gcd(a[i], a[j]) == 1 && i+j>mi)
            {
                mi = i+j;
                out = 1;
            }
        }
        //if(out)
          //  break;
    }
    
    if(!out)
        cout<<-1<<endl;
    else 
        cout<<mi+2<<endl;
}

shesh;