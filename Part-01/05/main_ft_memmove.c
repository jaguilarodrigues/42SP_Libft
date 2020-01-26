#include <stdio.h> 
#include <string.h> 
  
void *ft_memmove(void *dst, const void *src, size_t n);
int main () 
{ 
  char str1[] = "Geeks";  // Array of size 100 
  char str2[]  = "Quiz";  // Array of size 5 
  
  puts("str1 before memmove "); 
  puts(str1); 
  
  /* Copies contents of str2 to sr1 */
  memmove(str1, str2, sizeof(str2)); 
  
  puts("\nstr1 after memmove "); 
  puts(str1); 

    puts("\n-----------------------------------------------\n"); 

    char str3[] = "Geeks";  // Array of size 100 
    char str4[]  = "Quiz";  // Array of size 5 

    puts("str3 before memmove "); 
  puts(str3); 
  
  /* Copies contents of str2 to sr1 */
  ft_memmove(str3, str4, sizeof(str4)); 
  
  puts("\nstr3 after memmove "); 
  puts(str3);
  
  return 0; 
} 