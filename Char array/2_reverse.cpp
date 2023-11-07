#include <bits/stdc++.h>
using namespace std;

void reverse(char name[], int len){
    int start=0;
    int end = len-1;
    int temp;
    while (start<end){
        swap(name[start++],name[end--]);
    }
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

    reverse(name, len);
    cout<<name;
}