#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    // 接受N行存储操作
    int dx[101];
    int dy[101];
    for(int i=0;i<n;i++){
        cin>>dx[i]>>dy[i];
    }
    // 接受M行存储初始坐标
    int x[101];
    int y[101];
    for(int i=0;i<m;i++){
        cin>>x[i]>>y[i];
    }
    // 做操作并且输出
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            x[i] += dx[j];
            y[i] += dy[j];
        }
    }
    for(int i=0;i<m;i++){
        cout<<x[i]<<" "<<y[i]<<endl;
    }
    return 0;
}