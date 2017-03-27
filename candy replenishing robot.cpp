#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> c(t);
    for(int c_i = 0; c_i < t; c_i++){
       cin >> c[c_i];
    }
    // your code goes here
    int tc=n,nc=0;
    for(int i=0;i<t-1;i++){
        if(tc-c[i]<5){
            nc=nc+n-(tc-c[i]);
            tc=n;
        }
        else
            tc=tc-c[i];
    }
    cout<<nc;
    return 0;
}

