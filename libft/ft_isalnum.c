#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)) || ((c >= '0') && (c <= '9')))
			return (c);
	return (0);
}
