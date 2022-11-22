#include<iostream>
using namespace std;
int main(){
    int year,month;
    int  daysarr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cout<<"Enter the year and month:";
    cin>>year>>month;
    if(year%4==0){
        daysarr[1]=29;
    }
    
    cout<<"the number of days in the month is:"<<daysarr[month-1];
    return 0;
}