/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:23:35 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/04 17:54:34 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!src || !len)
		return (dst);
	if (!dst)
		return (NULL);
	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			*(char *)(dst + (i - 1)) = *(char *)(src + (i - 1));
			i--;
		}
	}
	else if (src > dst)
	{
		i = 0;
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
