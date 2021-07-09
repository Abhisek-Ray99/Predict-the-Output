#include<iostream>
using namespace std;

void func();

int main(){
    func();
    func();
    return 0;
}

void func(){
    int x=0;
    static int y=0;
    x++;
    y++;
    cout<<x<<" "<<y<<endl;
}



output ------> 1 1
               1 2
