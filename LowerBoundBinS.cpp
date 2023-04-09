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
#define nl cout<<endl;
#define N 1e9
typedef long long int lli;


int getLowerBound(int a[], int x, int startIndex, int endIndex){      //returns an index for every x, st: a[index] >= x 
    int mid = (startIndex+endIndex)/2;

    if(startIndex>endIndex)
        return endIndex;
    else if(mid==0 && a[mid]>=x)
        return mid;
    else if(a[mid]>=x && a[mid-1]<x)
        return mid;
    
    if(a[mid]<x)
        return getLowerBound(a, x, mid+1, endIndex);
    else if(a[mid]>=x)
        return getLowerBound(a, x, startIndex, mid);
}

lli calcRoot(lli n, lli start, lli end){
    lli mid = (start+end)/2;

    if(mid*mid == n)
        return mid;
    else if(mid*mid < n)
        return calcRoot(n, mid+1, end);
    else 
        return calcRoot(n, start, mid-1);
}

lli sqRoot(lli n){
    return calcRoot(n, 1, N);
}


shuru;

//int a[12] = {2, 2, 3, 3, 5, 7, 8, 8, 10, 12, 15, 21};
//int size = 12;

lli t, x;
cin>>t;

while(t--){
    cin>>x;
    cout<<"Square root: "<<sqRoot(x);
    nl;
}

shesh;