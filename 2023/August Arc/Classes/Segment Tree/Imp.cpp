#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;

const int N = 1e5+5;
int tree[4*N];
int A[N];

int merge(int a, int b){
    return a+b;
}

void build(int rt, int l, int r){
    if(l==r){
        tree[rt] = A[l];
        return;
    }

    int lc = rt << 1, rc = lc + 1, m = (l+r)/2;
    build(lc, l, m);
    build(rc, m+1, r);
    tree[rt] = merge(tree[lc], tree[rc]);
}

void update(int rt, int l, int r, int idx, int v){

}

int query(int rt, int l, int r, int b, int e){

    if(r<b or l>e or b>e)
        return 0;
    
    if(l>=b and r<=e)
        return tree[rt];
    
    int lc = rt << 1, rc = lc | 1, m = l + r >> 1;
    return merge(query(lc, l, m, b, e), query(rc, m+1, r, b, e));
}


int main(void){
    
}

