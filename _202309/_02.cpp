#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    // 记录输入的操作序列
    int op[100001];
    double tent[100001];
    for (int i=0;i<n;i++){
        scanf("%d%lf",&op[i],&tent[i]);
    }
    // 记录坐标和操作范围
    int i,j;
    double x,y;
    for (int k=0;k<m;k++){
        scanf("%d%d%lf%lf",&i,&j,&x,&y);
        for(int s=i-1;s<=j-1;s++){
            if(op[s]==1){
                x = x*tent[s];
                y = y*tent[s];
            }else if(op[s]==2){
                int tempx = x;
                x = x*cos(tent[s])-y*sin(tent[s]);
                y = tempx*sin(tent[s])+y*cos(tent[s]);
            } 
        }
        printf("%f %f\n", x,y);
    }
    return 0;
}