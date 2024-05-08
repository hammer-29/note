#include <stdio.h>
int month[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
bool isleap(int year){
    if((year%4==0&&year%100!=0)||year%400==0)
        return true;
    else
        return false;
}
int main (){

    return 0;
}