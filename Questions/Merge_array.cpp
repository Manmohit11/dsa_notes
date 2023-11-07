//Merging two sorted in a new sorted array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cout<<"size of the array 1"<<endl;
    cin>>n1;
    cout<<"size of the array 2"<<endl;
    cin>>n2;

    int arr1[n1], arr2[n2];
    cout<<"elements of arrayn 1"<<endl;
    for (int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    cout<<"elements of arrayn 2"<<endl;
    for (int i=0; i<n2; i++){
        cin>>arr2[i];
    }

    int arr3[n1+n2];
    int a=0, b=0, k=0;

    while (a<n1 || b<n2){
            if (arr1[a]<arr2[b]){
                arr3[k]=arr1[a];
                a++;
                k++;
            }
            else{
                arr3[k]=arr2[b];
                b++;
                k++;
            }
            
    }

    while (a<n1){
        arr3[k++]=arr1[a++];
    }

    while (b<n2){
        arr3[k++]=arr2[b++];
    }

    for (int i=0; i<n1+n2; i++){
        cout<<arr3[i]<<" ";
    }
}