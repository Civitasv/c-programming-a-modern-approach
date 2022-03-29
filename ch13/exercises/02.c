/**
 * a: 非法，p 不为 char 类型
 * b: a
 * c: abc\n
 * d: 非法，*p 是 char 类型
 */

#include <stdio.h>

int main()
{
  char *p = "abc";
  puts(p);
  putchar(*p);
  return 0;
}