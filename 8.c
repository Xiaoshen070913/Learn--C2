#include<stdio.h>
int main (int argc,char const *argv[])
{
    int i;
    for( i=0; i<argc;i++) {
        printf("%d:%s\n",i,argv[i]);
        printf("第%d个参数是:%s\n",i,argv[i]);
    }

    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h> // 必须包含这个头文件，才能使用 atoi 函数

int main(int argc, char *argv[]) 
{
    int n;
    
    // 【情况一】如果你在终端敲入：./8 3
    if (argc == 2) {
        // 重点：atoi (ASCII to Integer) 的作用就是把 "3" 变成 数字 3
        n = atoi(argv[1]); 
        printf("【命令行读取】你输入了数字: %d\n", n);
    } 
    // 【情况二】如果你只敲了 ./8，没带数字
    else {
        printf("【交互式读取】请输入一个数字: ");
        scanf("%d", &n); // 正常键盘输入
    }

    // 下面是计算阶乘的逻辑
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    printf("%d 的阶乘结果是: %lld\n", n, result);
    
    return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h> // 必须包含这个头文件，才能使用 atoi 函数

int main(int argc, char *argv[]) 
{
    int n;
    
    // 【情况一】如果你在终端敲入：./8 3
    if (argc == 2) {
        // 重点：atoi (ASCII to Integer) 的作用就是把 "3" 变成 数字 3
        n = atoi(argv[1]); 
        printf("【命令行读取】你输入了数字: %d\n", n);
    } 
    // 【情况二】如果你只敲了 ./8，没带数字
    else {
        printf("【交互式读取】请输入一个数字: ");
        scanf("%d", &n); // 正常键盘输入
    }

    // 下面是计算阶乘的逻辑
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    printf("%d 的阶乘结果是: %lld\n", n, result);
    
    return 0;
}


*/