#include<stdio.h>
using namespace std;
int a[100050]={0};
int main(){
    int n,x;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for (int i=0;i<n;i++){
        if(a[i]==x)
            printf("%d",i);
    }
    return 0;
}