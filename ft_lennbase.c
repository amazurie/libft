#include "libft.h"

size_t	ft_lennbase(size_t n, char *base)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(base);
	while ((n /= len) > 0)
		i++;
	return (++i);
}
