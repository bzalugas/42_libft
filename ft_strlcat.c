/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 04:17:27 by bzalugas          #+#    #+#             */
/*   Updated: 2021/01/16 04:36:52 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (dstsize > 0)
	{
		i = 0;
		len = ft_strlen(dst);
		j = dstsize - 1;
		while (src[i] && i < dstsize - len - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		if (dstsize > 0)
			dst[j] = '\0';
	}
	return (dstsize + ft_strlen(src));
}
