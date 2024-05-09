#include <iostream>
using namespace std;
int mian (){
    int n,m;
    // 自变量个数和求解的偏导数个数
    cin>>n>>m;

    // 函数F
    char f[10000];
    cin>>f;

    // m个样例
    int bianhao[1000];
    int pos[n+1][1000];//第0行不用
    for (int i=1;i<m+1;i++){
        //输入1个自变量编号1-n；
        cin>>bianhao[i];
        // 输入n个坐标
        for (int j=1;j<n+1;j++){
            cin>>pos[i][j];
        }
    }
    
    // 对F求导，将值代入求得结果

    // 输出m个结果
    for(int i=1;i<m+1;i++){
        cout<<endl;
    }

    return 0;
}