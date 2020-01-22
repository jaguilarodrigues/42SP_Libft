#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n);

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'm';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

	ret = memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}