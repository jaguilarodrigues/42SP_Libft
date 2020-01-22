#include <stdio.h> 
#include <string.h> 

void ft_bzero(void *s, size_t n);

int main() 
{ 
    char str[50] = "Pamonha de piracicaba."; 
    printf("\nBefore bzero(): %s\n", str); 
  
    bzero(str + 13, 8*sizeof(char)); 
  
    printf("After bzero():  %s", str); 
    
	printf("\n-----------------------------------------------\n");

    char str2[50] = "Pamonha de piracicaba."; 
    printf("\nBefore bzero(): %s\n", str2); 
  
    ft_bzero(str2+ 13, 8*sizeof(char)); 
  
    printf("After bzero():  %s\n", str2); 
    return 0; 

} 