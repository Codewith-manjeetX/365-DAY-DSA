#include<iostream>

using namespace std;

bool isEven(int n){
    if((n & 1) == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;

    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    
    return 0;
}

