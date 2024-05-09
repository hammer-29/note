#include<stdio.h>
using namespace std;
int main(){
    int n;
    char a;
    scanf("%d%c",&n,&a);
    for (int j=0;j<n;j++)
        printf("%c",a);
    for (int i=0;i<n/2-2;i++){
        printf("%c",a);
        for(int j=0;j<n-2;j++){
            printf(" ");
        }
        printf("%c",a);
    }
    for (int j=0;j<n;j++)
        printf("%c",a);
    printf("\n");
    return 0;
}