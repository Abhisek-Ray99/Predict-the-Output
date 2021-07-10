#include<iostream>
using namespace std;

int main(){
    int i=1;
    if(i++ && (i==1)){
        cout<<"yes";
    }else{
        cout<<"NO";
    }


    return 0;
}


output ---------> NO
