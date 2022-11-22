#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    int i,len,count=0;
    cout<<"Enter the string:";
    cin>>str;
    len=strlen(str);
    for(i=0;i<len;i++){
if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z')){
    count+=1;
}

    }
    cout<<count;
    return 0;
}
