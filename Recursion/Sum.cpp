//Sum of an array using recusrion

#include<bits/stdc++.h>
using namespace std;

int rec(int arr[], int size){ 
    int sum = 0;
    if (size==0){
        return 0;
    }
    else{
        int ans = arr[0]+rec(arr+1,size-1);
        return ans;
    }
}

int main(){
    int size = 5;
    int arr[size]={3,2,1,6,4};
    int sum = rec(arr, size);
    cout<<sum;
}