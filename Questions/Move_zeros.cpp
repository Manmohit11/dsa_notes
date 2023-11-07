//Move the zeroes to the right

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[8] = {1,2,0,0,3,0,4,0};

    int ptr = 0;
    for (int i=0; i<8; i++){
        if (arr[i]!=0){
            swap(arr[i],arr[ptr]);
            ptr++;
        }
    }

    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
}

