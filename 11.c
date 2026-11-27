/*strcpy函数
    char *strcpy(char *restrict dst, const char *restrict src);
    把src的字符串拷贝到dst          第一个是目的，第二个是源.
    restrict表明src和dst不重叠（C99）
    返回dst

char *dst = (cahr*)malloc(strlen(src)+1);
strcpy(dst,src)

*/
#include<stdio.h>
#include<string.h>


char* mycpy(char* dst,const char* src)
{
    /*int idx = 0;
    while( src[idx] ) {
        dst[idx]=src[idx];
         idx++;
    }
    dst[idx]='\0';
    */return dst;
    char* ret = dst;

    while( (*dst++  = *src++) );
    *dst = '\0';

    return ret;
}

int main(int argc,char const *argv[])
{
    char s1[] = "abc";
    char s2[] = "abc";
    strcpy(s1,s2);



    return 0;
}
