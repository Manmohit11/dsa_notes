// Space Complexity = O(n)
// Time Complexity = O(n^2)


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}