#include <stdio.h> 
#include <string.h> 

void *ft_memset(void *ptr, int x, size_t n);

int main() 
{ 
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str); 
  
    // Fill 8 characters starting from str[13] with '.' 
    printf("\n%p\n", memset(str + 13, '.', 8*sizeof(char))); 
  
    printf("After memset():  %s", str); 
    
	printf("\n-----------------------------------------------\n");

    char str2[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str2); 
  
    // Fill 8 characters starting from str[13] with '.' 
    printf("\n%p\n", ft_memset(str2+ 13, '.', 8*sizeof(char))); 
  
    printf("After memset():  %s", str2); 
    return 0; 

} 