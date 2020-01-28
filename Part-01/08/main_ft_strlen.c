#include <stdio.h>
#include <string.h>
int	ft_strlen(char *str);
int main() 
{ 
   char ch[]=""; 
  
   printf("Length of string is: %d", strlen(ch));
   printf("\n------------------------------------\n");
	printf("Length of string is: %d", ft_strlen(ch)); 

  
 return 0; 
} 