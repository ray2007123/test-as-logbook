#include <iostream.h>
using namespace std;
int max(int i, int j){  /*定义max()函数*/
    if (i>=j) return i;
    else      return j;
}
int min(int i, int j){
    if(i>=j) return j;
    else return i;
}/*加一个求最小值*/
int main(void){  /*定义main()函数*/
    cout<<"输入i,j：";  //显示提示信息
    int i, j;  //说明变量
    cin>>i>>j;  //从键盘上输入变量的值
    cout<<"最大数是："<<max(i, j)<<'\n';  //输出提示信息和结果
    return 0;
}