#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the lengths of the triangle:";
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"Equilateral triangle";
    }
    if(a==b || b==c || a==c){
        cout<<"Isosceles triangle";
    }
    if(a!=b && b!=c && a!=c){
        cout<<"scalene triangle";
    }
    return 0;
}