//works only on monotonous function, increasing or decreasing

#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start<end){
        mid = (start+end)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int value = binary_search(arr,n,key);
     
}