#include <bits/stdc++.h>
using namespace std;

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

    cout<<"length of your name "<<length(name)<<endl;
}