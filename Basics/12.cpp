#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  main(){
    int len,i,a;
    cout<<"Enter the length of the array";
    cin>>len;
    vector <int> arr;
for(i=0;i<len;i++){
    cin>>a;
    arr.push_back(a);
}
sort(arr.begin(),arr.end());
cout<<"The second largest element is :"<<arr[len-2];
    return 0;
}