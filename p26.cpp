#include<iostream>
using namespace std;

int main(){
    int a[3][2] = {{1,2},{3,4},{5,6}};
    cout<<a[1][1]<<" "<<*(*(a+1)+1);

    return 0;
}


output ---------> 4 4
