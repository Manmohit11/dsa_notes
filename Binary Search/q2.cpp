// Square root using binary search

#include<bits/stdc++.h>
using namespace std;

int sq_root_int(int num){
    int start = 0;
    int end = num;
    int mid = (start+end)/2;
    int ans = -1;

    while(start<=end){
        mid = (start+end)/2;
        if((mid*mid) == num)
            return mid;

        else if(mid*mid<num){
            start = mid+1;
            ans = mid;
        }

        else
            end = mid-1;
    }
    return ans;
}

double sq_root_dec(int num, int integer, int precision){
    double factor = 1;
    double ans = integer;

    for (int i=0; i<precision; i++){
        factor = factor/10;
        for (double j=ans; j*j<num; j=j+factor ){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;

    int precision;
    cout<<"Number of decimal need"<<endl;
    cin>>precision;

    int integer = sq_root_int(num);
    double decimal = sq_root_dec(num, integer, precision);

    cout<<"square root of given number is = "<<decimal<<endl;
}