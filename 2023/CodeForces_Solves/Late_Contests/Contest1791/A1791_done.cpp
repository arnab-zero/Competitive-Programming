#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> v(26, 0);
    string st = "codeforces";
    for(int i=0; i<st.length(); ++i){
        v[st[i]-'a'] = 1;
    }

    int t;
    char ch;

    cin>>t;

    while(t--){
        cin>>ch;
        if(v[ch-'a'])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}