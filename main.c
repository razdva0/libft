#include "libft.h"
#include <stdio.h>

int main(void)
{
	void *ptr1 = "qwe";
	void *ptr2 = "zxc";
	char *str2 = ft_strjoin2(ptr1, ptr2);
	char *str1 = ft_strjoin(ptr1, ptr2);
	printf("%s\n", str2);
	printf("%s\n", str1);
	return (0);
}