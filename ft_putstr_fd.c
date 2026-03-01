#include "libft.h"

void	ft_putstr(char const *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		ft_putchar(s[i], fd);
}
