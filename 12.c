/*
    字符串中找字符

    char* strchr(const char *s,int c);
    char* strrchr(const char *s,int c); 从右边找过来
    返回NULL表示没有找到

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main (int argc,char const *argv[]) 
{
    char s[] = "Hello";
    char *p =  strchr(s,'l');
    //p = strchr(p+1,'l');
    char c = *p;
    *p = '\0';
    char *t = (char*)malloc(strlen(s)+1);
    strcpy(t,s);
    *p =c;
    printf("%s\n",t);
    free(t);

    return 0;
}


/*
字符串中找字符串
char *strstr(const char *s1,const char *s2);

char *strcasestr(const char *s1,const cahr *s2 ;忽略大小写
*/