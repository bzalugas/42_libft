/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:02:09 by bazaluga          #+#    #+#             */
/*   Updated: 2024/11/02 15:06:24 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	ssize_t	len;
	ssize_t	res;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	res = write(fd, s, len);
	if (res < len)
		return (0);
	res += write(fd, "\n", 1);
	if (res < len + 1)
		return (0);
	return (1);
}
