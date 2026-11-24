/*char **a
指的是a是一个指针，指向另一个指针，那个指针指向一个字符串
char a[][]
这是一个二维数组的写法，但是第二空必须有数字
*/
#include<stdio.h>
int main(void)
{
    
    int month;
    printf("请输入月份：");
    scanf("%d",&month);
    char *a[13] = {"","January","February","March","April","May","June","JUly","Augest","September","October","November","Decomber",};
    printf("%s",a[month]);


    return 0;
}