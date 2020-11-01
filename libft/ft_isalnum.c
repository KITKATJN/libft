#include "libft.h"

int ft_isalnum(int c)
{
int flag;

flag = 0;

if (((c < 'A' || c > 'Z') && (c < 'a' || c > 'z')) && (c < '0' || c > '9'))
return (0);
else
{
flag = 1;
return (flag);
}
}
