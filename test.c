#include "libft.h"

int main()
{
	char **ret;
	char string[50] = "";

	ret = ft_strsplit(string, 'c');
	printf("%s\n", *ret);
}
