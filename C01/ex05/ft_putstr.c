#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
