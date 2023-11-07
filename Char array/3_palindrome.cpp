// palindrome is a word which is spelled same from both ends

#include <bits/stdc++.h>
using namespace std;

bool palindrome(char name[], int len){
    int start=0;
    int end = len-1;
    int temp;
    while (start<=end){
        if(name[start]!=name[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

int length ( char name[]){
    int count=0;
    for (int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;


}

int main(){
    char name[100];

    cout<<"enter your name"<<endl;
    cin>>name;

    int len = length(name);
    cout<<"length of your name "<<len<<endl;

    
    cout<<"palindrome or not (1 true,  0 false)  " << palindrome(name, len)<<endl;
}