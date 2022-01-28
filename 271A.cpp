#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c,d;
    n++;
    d=n%10;
        c=(n/10)%10;
        b=(n/100)%10;
        a=n/1000;
    while(a==b||b==c||c==d||a==c||b==d||a==d){
        n++;
        d=n%10;
        c=(n/10)%10;
        b=(n/100)%10;
        a=n/1000;
    }
    cout<<n;
    return 0;
}