#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

vector<int> floorAndCeil(int a, int b){
    
    int floordev = floor((double)a / b);
    int ceildev = ceil((double)a / b);

    return {floordev, ceildev};
}

int main(){
    int a, b;
    cin>>a>>b;

    vector<int> ans = floorAndCeil(a, b);

    cout<<"Floor: "<<ans[0]<<endl;
    cout<<"Ceil: "<<ans[1]<<endl;

    return 0;
}