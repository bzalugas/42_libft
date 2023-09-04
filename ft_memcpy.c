/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:18:47 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/04 17:54:51 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!src)
		return (dst);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

/* #include <stdio.h> */
/* #include <string.h> */
/* int	main(void) */
/* { */
/* 	char *d1 = memcpy(NULL, NULL, 4); */
/* 	char *d2 = ft_memcpy(NULL, NULL, 4); */
/* 	return (0); */
/* } */
