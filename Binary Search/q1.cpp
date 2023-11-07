//Finding first and last occurence of an element in an array using binary search

#include<bits/stdc++.h>
using namespace std;

int first_occur(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    int first=-1;

    while(start<=end){

        mid = (start+end)/2;
        
        if(arr[mid]==key){
            first = mid;
            end = mid-1;
        }

        else if(arr[mid]>key){
            end = mid-1;
        }

        else{
            start = mid+1;
        }
    }
    return first;
}

int last_occur(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    int last=-1;

    while(start<=end){

        mid = (start+end)/2;
        
        if(arr[mid]==key){
            last = mid;
            start = mid+1;
        }

        else if(arr[mid]>key){
            end = mid-1;
        }

        else{
            start = mid+1;
        }
    }
    return last;
}

int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int key;
    cout<<"Enter the number to find"<<endl;
    cin>>key;

    int arr[size];
    cout<<"Enter elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int first = first_occur(arr,size,key);
    int last = last_occur(arr,size,key);
    cout<<"First occurence of "<<key<<" is = "<<first<<endl; 
    cout<<"last occurence of "<<key<<" is = "<<last<<endl;
    cout<<"Total number of occrences are = "<<(last-first+1);
}