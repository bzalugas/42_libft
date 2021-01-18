/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 21:20:16 by bzalugas          #+#    #+#             */
/*   Updated: 2021/01/18 22:09:35 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (needle[0] != '\0')
	{
		i = 0;
		j = 0;
		while (haystack[i] && i < len)
		{
			if (needle[j] && haystack[i] == needle[j])
				j++;
			else
				j = 0;
			if (needle[j] == '\0')
				return ((char *)&haystack[i - j + 1]);
			i++;
		}
		return (NULL);
	}
	return ((char *)haystack);
}
