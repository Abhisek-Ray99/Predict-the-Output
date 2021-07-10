#include<iostream>
using namespace std;

int main(){
    int y=1, x=0;
    int l = (y++, x++) ? y:x;
    cout<<l;

    return 0;
}



output ----------------> 1
  (1,0) ? 2 : 1
