typedef unsigned long size_t;
char	*ft_substr(char const *s, unsigned int start, size_t len);
#include <stdio.h>

int main()
{
	char *s = "teste";

	printf("%s", ft_substr(s, 2, 2));
}