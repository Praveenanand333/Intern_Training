#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cout<<"Enter two strings:";
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b){
        cout<<"The given strings are anagrams";
    }
    else{
        cout<<"The given strings are not anagrams";
    }
    return 0;
}