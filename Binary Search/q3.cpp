//Book alocation problem (Advance problem)

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int num, int arr[], int stu, int mid){
    int stuCount = 1;
    int pageSum = 0;

    for (int i=0; i<num; i++){ 

        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            stuCount++;
            if (stuCount > stu || arr[i] > mid){
                return false;
            }
            pageSum += arr[i];
        }
    }
    return true;
}

int allocate(int num, int arr[], int sum, int stu){
    int start = 0;
    int end = sum;
    int mid = (start+end)/2;
    int ans = -1;

    while (start<=end){

        if (isPossible(num,arr,stu,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = (start+end)/2;
    }
    return ans;
}



int main(){
    int num;
    cout<<"number of books: ";
    cin>>num;

    int stu;
    cout<<"number of students: ";
    cin>>stu;

    int arr[num];
    int sum = 0;
    for(int i=0; i<num; i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }

    int min = allocate(num,arr,sum,stu);
    cout<<"Minimun number of pages per student: "<<min;
}
