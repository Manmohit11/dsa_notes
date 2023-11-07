// can take one step or two steps at a time.
// find total no. of ways for reaching n th stair.

#include<bits/stdc++.h>
using namespace std;

int recFunc(int n){
    if (n<0){
        return 0;
    }
    if (n==0){
        return 1;
    }
    int ans = recFunc(n-1) + recFunc(n-2);
    return ans;
}

int main(){
    int nStair;
    cin>>nStair;

    int ans = recFunc(nStair);
    cout << ans;
}