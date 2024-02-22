/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:21:03 by bazaluga          #+#    #+#             */
/*   Updated: 2024/02/17 04:24:36 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	len_long(long n)
{
	int	len;

	len = 1;
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa_printf(int n, t_flags *f)
{
	long	n2;
	char	*nb;
	size_t	size;

	n2 = n;
	if (n2 < 0)
		n2 *= -1;
	size = len_long(n2) + (((f->space || f->plus) && n >= 0) || n < 0);
	nb = (char *)ft_calloc(size + 1, sizeof(char));
	if (!nb)
		return (NULL);
	while (size > 0)
	{
		nb[size - 1] = n2 % 10 + '0';
		n2 /= 10;
		size--;
	}
	if (n < 0)
		nb[0] = '-';
	else if (f->space)
		nb[0] = ' ';
	else if (f->plus)
		nb[0] = '+';
	return (nb);
}

char	*ft_utoa_printf(unsigned int n)
{
	int		len;
	char	*res;

	len = len_long((long)n);
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (len > 0)
	{
		res[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (res);
}

static int	len_uint_hex(unsigned long n)
{
	int	len;

	len = 1;
	while (n > 15)
	{
		n /= 16;
		len++;
	}
	return (len);
}

char	*ft_utohex_printf(unsigned long n, bool lower)
{
	int		len;
	char	*res;

	len = len_uint_hex(n);
	res = (char *)ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (len)
	{
		if (lower)
			res[len - 1] = "0123456789abcdef"[n % 16];
		else
			res[len - 1] = "0123456789ABCDEF"[n % 16];
		n /= 16;
		len--;
	}
	return (res);
}
