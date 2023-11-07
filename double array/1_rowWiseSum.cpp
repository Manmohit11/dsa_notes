// row wise sum of an double array

#include <bits/stdc++.h>
using namespace std;

void RWS(int arr[][3], int rowsum[], int n){
    for (int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum = sum+arr[i][j];
        }
        rowsum[i]=sum;
    }
}

int main(){
     int n;
     cout<<"size of the array"<<endl;
     cin>>n;

    int arr[n][3];
    for (int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    int rowsum[n];
    RWS(arr,rowsum,n);

    for(int i=0; i<n; i++){
        cout<<rowsum[i]<<endl;
    }
}