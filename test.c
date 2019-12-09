#include "libft.h"

int main()
{
	char **ret;
	char *string;

	string = malloc(sizeof(char) * 1);
	*string = '\0';

	ret = ft_split(string, 'c');
	printf("%s\n", *ret);
}
