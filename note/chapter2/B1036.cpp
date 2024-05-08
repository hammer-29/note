#include<stdio.h>
int main(){
    int n;
    char c;
    scanf("%d %c",&n,&c);
    for(int i=0;i<n;i++){
        printf("%c",c);
    }
    printf("\n");
    for(int i=0;i<n/2-2;i++){
        printf("%c",c);
        for(int j=0;j<n-2;j++){
            printf(" ");
        } 
        printf("%c",c);
        printf("\n");
    }
    for(int i=0;i<n;i++){
        printf("%c",c);
    }
    printf("\n");
    return 0;
}
// remeber \n