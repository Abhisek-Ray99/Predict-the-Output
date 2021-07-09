#include<iostream>
using namespace std;

int main(){
    int y[4] = {6,7,8,9};
    int *ptr;
    ptr = y+2;
    
    cout<<*(ptr+1);

    return 0;
}


output -------> 9
