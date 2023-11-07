//Binary Search using recursion
//Find index of key

#include<bits/stdc++.h>
using namespace std;

int binary(int arr[], int start, int end, int key){
    int mid = start+((end-start/2));
    //base case
    //not found
    if(start>end){
        return -1;
    }
    //found
    if(arr[mid]==key){
        return mid;
    }
    
    if(arr[mid]>key){
        return binary(arr,0,mid-1,key);
    }
    else{
        return binary(arr,mid+1,end,key);
    }
}


int main(){
    int size = 9;
    int arr[size] = {1,2,3,4,5,6,7,8,9};
    int key = 8;
    int start = 0;
    int end = size-1;

    int index = binary(arr,start,end,key);
    cout<<index;
}