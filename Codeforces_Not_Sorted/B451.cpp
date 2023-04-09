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
#define tab "\t"
#define nl cout<<endl
#define RZ return 0
typedef long long int lli;



shuru;

int n;
cin>>n;

int start = -1, fin = -1, on = 0;

int a[n];
for(int i=0; i<n; ++i)
    cin>>a[i];

for(int i=1; i<n; ++i){
    if(a[i]<a[i-1] && !on)
        start = i-1, on = 1;
    else if(a[i-1] < a[i] && on){
        fin = i-1;
        break;
    }
}

if(fin == -1)
    fin = n-1;

if(on)
    sort(a+start, a+fin+1);

for(int i=1; i<n; ++i){
    if(a[i-1] > a[i])
    {
        cout<<"no";
        RZ;
    }
}

cout<<"yes"<<endl;
if(!on)
    cout<<1<<spc<<1<<endl;
else
    cout<<start+1<<spc<<fin+1<<endl;

shesh;
