#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back
#define spc " "
#define tab "\t"
typedef long long int lli;


void make_set(int parent[], int size[], int i){
    parent[i] = i;
    size[i] = 1;
}


int ds_find(int parent[], int u){

    if(parent[u] == u)
        return u;
    else 
        return parent[u] = ds_find(parent, parent[u]);
}


void ds_union(int parent[], int size[], int u, int v){

    u = ds_find(parent, u);     // parent of u
    v = ds_find(parent, v);     // parent of v

    if(u==v)
        return;

    if(size[u] < size[v]){
        int temp = u;
        u = v;
        v = temp;
    }

    parent[v] = u;      // union of sets
    size[u] += size[v];
}


int main(void){

    int n;
    cin>>n;

    int ds[n], parent[n], size[n];

    for(int i=1; i<n+1; ++i){
        make_set(parent, size, i);
    } 

    // complete the rest of main function

}
