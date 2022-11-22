#include<iostream>
using namespace std;
int main(){
    int n,rev=0,temp,r;
    cout<<"Enter the number";
    cin>>n;
temp=n;
while(temp!=0){
r=temp%10;
rev=r+rev*10;
temp=temp/10;
}
cout<<rev;
    return 0;
}