#include<iostream>
using namespace std;
int main(){
    int a = 25;
    int*b = &a;
    int**c = &b;
    cout<<*b<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
return 0;
}