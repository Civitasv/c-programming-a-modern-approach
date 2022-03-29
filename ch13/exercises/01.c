/**
 * b: "\n" 不是 char 类型
 * c: '\n' 不是 char* 类型
 * e: printf 的第一个参数需要是 char* 类型
 * h: "\n" 不是 char 类型
 * i: '\n' 不是 char* 类型
 * j: 会输出两个换行符号
 */

#include "stdio.h"

int main()
{
    printf("------------\n");
    puts("");
    printf("------------\n");
    printf("%c", "\n");
    printf("------------\n");
    printf("------------\n");

    return 0;
}