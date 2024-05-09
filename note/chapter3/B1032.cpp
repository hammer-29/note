#include<stdio.h>
using namespace std;
// 随机定义在十万+
int cores[100010]={0};
int main (){
    
    int K=0,Max=0,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int position=0,core=0;
        scanf("%d%d",&position,&core);
        cores[position]+=core;
        if(cores[position]>Max){
            Max = cores[position];
            K = position;
        }
    }
    printf("%d %d",K,Max);
    return 0;
}