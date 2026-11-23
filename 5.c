#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    /*char word[]={'H','e','l','l','o','!','\0'};   //0和'\0'是一样的但是‘0’不一样
    int i;
    for(i=0;i<7;i++) {
        printf("%u\n",word[i]);
    }
    */
    char *s= "Hello World";
    //s[0]= 'B';                        //如果想构造一个字符串那就用数组
    char *s2= "Hello World";            //如果要处理一个字符串那就用指针  
    char s3[] = "Hello World";



    printf("s=%p\n",s);
    printf("s2=%p\n",s2);
    printf("s3=%p\n",s3);
    s3[0] = 'B';
    printf("Here!s3[0]=%c\n",s3[0]);
    printf("Here!s[0]=%c\n",s[0]);

    return 0;
}