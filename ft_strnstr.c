/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 21:20:16 by bzalugas          #+#    #+#             */
/*   Updated: 2021/01/31 19:48:02 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (!needle)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i + j] && i + j < len)
	{
		if (needle[j] && needle[j] == haystack[i + j])
			j++;
		else if (!needle[j])
			return ((char *)&haystack[i]);
		else if (++i)
			j = 0;
	}
	return (NULL);
}
