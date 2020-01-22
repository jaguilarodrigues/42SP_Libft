/* A C program to demonstrate working of memcpy */
#include <stdio.h> 
#include <string.h> 
  
void * ft_memcpy(void *to, const void *from, size_t numBytes);

int main () 
{ 
  char str1[] = "Geeks";   
  char str2[] = "Quiz";   
  
  puts("str1 before memcpy "); 
  puts(str1); 

  memcpy (str1, str2, sizeof(str2)); 
  
  puts("\nstr1 after memcpy "); 
  puts(str1); 

	printf("-------------------\n");

  char str3[] = "Geeks";   
  char str4[] = "Quiz";   
  
  puts("str4 before memcpy "); 
  puts(str3); 
  
  ft_memcpy (str3, str4, sizeof(str4)); 
  
  puts("\nstr4 after memcpy "); 
  puts(str3); 
  
  return 0; 
} 