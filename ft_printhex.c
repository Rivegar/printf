#include "ft_printf.h"
#include "./libft/libft.h"

static void	ft_putnbr_base(unsigned int n, char *base)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		ft_putnbr_base(n / base_len, base);
		ft_putnbr_base(n % base_len, base);
	}
	else
		ft_putchar_fd(base[n], 1);
}


int ft_printhex(unsigned int n, int ucase)
{
	unsigned int nb;
	size_t i;
	char *base;

	base = "0123456789abcdef";
	if (ucase)
		base = "0123456789ABCDEF";

	nb = n;
	i = 1;
	while (nb >= 16)
	{
		nb = nb / 16;
		i++;
	}
	ft_putnbr_base(n, base);
	return (i);
}
