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
        int temp = arr[i];
        int j=i-1;
        for( int j=i-1; j>=0; j--){
            if (arr[j]>arr[i]){
                arr[j]=arr[j+1];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}