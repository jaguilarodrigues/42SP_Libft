#include <stdio.h>
#include <string.h>

void *ft_memccpy (void *dst, const void *src, int c, size_t len);

int main () {
   const char src[] = "http://www.tutorialspoint.com";
   const char dst1[50];
   const char dst2[50];
   char *ret;
   char *ret1;
   ///printf("%p\n", dst1);
   ////("%p\n", dst2);

   ret = memccpy ((void *)dst1, (void *)src, ':', 2);

   printf("String dest1 is - |%s %s|\n", ret, dst1);

	ret1 = ft_memccpy ((void *)dst2, (void *)src, ':', 2);
	printf("String dest2 is - |%s %s|\n", ret1, dst2);

   return(0);
}