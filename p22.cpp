#include<iostream>
using namespace std;

int main(){
    int i=10;
    static int j=i;
    cout<<j;

    return 0;
}


output ------------> 10 or may error
