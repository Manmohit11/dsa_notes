// space complexity = O(1)
//time complexity = O(n^2)


#include <bits/stdc++.h>
using namespace std;

int selection_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int min = arr[i];
        for (int j=i+1; j<n; j++){
            if (arr[j] < min){
                swap(min, arr[j]);
            }
        }
        return min;
    }
}

int main(){
    int n;
    cout<<"Size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min_value = selection_sort(arr,n);
    cout<<min_value;
}