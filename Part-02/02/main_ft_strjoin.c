char *ft_strjoin(char const *s1, char const *s2);
#include <stdio.h>

int main()
{
	char *s1 = "teste";
	char *s2 = "42SP";

	printf("%s", ft_strjoin(s1, s2));
}