int	ft_str_is_lowercase(char *str);

#include <stdio.h>

int	main(void)
{
	char a[] = "sadgsdgsasdg";
	int i = ft_str_is_lowercase(a);
	printf("%d",i);

	return 0;
}