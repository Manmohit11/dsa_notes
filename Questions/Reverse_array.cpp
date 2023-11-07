//Reversing an array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Size of the array"<<endl;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int start = 0;
    int end = n-1;

    for(int i=0; i<=n/2; i++){
           swap(arr[start], arr[end]);
           start++;
           end--;
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}