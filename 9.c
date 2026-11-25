/*#include<stdio.h>
int main(int argc,char const *argv[]) 
{
    int ch;                 //单字符串输入输出
    while( (ch = getchar())!= EOF) {
        putchar(ch);
    }

    printf("EOF\n");

    return 0;
}
*/

//认识字符串函数，前提引入string.h函数库
#include<stdio.h>
#include<string.h>
//strlen
//size_t strlen(const cahr *s);
//返回s的字符串长度（不包括结尾的0）


size_t mylen(char const *s)
{
    int idx = 0;
    while ( s[idx] != '\0') {
        idx++;
    }
    return idx;
}



int main(int argc, char const *argv[])
{
    char line[] = "Hello";
    printf("strlen=%lu\n",strlen(line));
    printf("sizeof=%lu\n",sizeof(line));
    printf("mylen=%zu\n",mylen(line));

    return 0;
}