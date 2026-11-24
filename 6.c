#include<stdio.h>

void f(void)
{
    char word[8];
    char word2[8];
    scanf("%7s",word);           //%s读入一个单词（到空格、tap、或者回车为止）
    scanf("%7s",word2);         //%和s之间的数字表示最多被允许读入的字符的数量，要比数组的数少1
    printf("%s##%s##\n",word,word2);

}

int main(void)
{
    f();

    return 0;
}