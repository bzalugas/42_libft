/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 21:05:00 by bzalugas          #+#    #+#             */
/*   Updated: 2021/01/21 15:04:57 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	init(char ***new, const char *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		count++;
		while (s[i] && s[i] == c)
			i++;
	}
	if (!(*new = (char **)malloc(sizeof(char *) * (count + 1))))
		return (0);
	*(*new + count) = NULL;
	return (count);
}

static void		notgood(char **s)
{
	size_t	i;

	i = 0;
	while (*s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static char		**cut_all(char **new, const char *s, char c, size_t max_len)
{
	size_t	i;
	size_t	start;
	size_t	count;

	i = 0;
	start = 0;
	count = 0;
	while (s[i] || count < max_len)
	{
		if ((s[i] == c && s[i - 1] != c) || (!s[i] && count < max_len))
		{
			if (!(new[count] = ft_substr(s, start, i - start)))
			{
				notgood(new);
				return (NULL);
			}
			count++;
			start = i + 1;
		}
		else if (s[i] == c && s[i - 1] == c)
			start++;
		i++;
	}
	return (new);
}

char			**ft_split(char const *s, char c)
{
	char	*s2;
	char	**new;
	size_t	count;

	s2 = ft_strtrim(s, &c);
	count = init(&new, s2, c);
	if (count)
		new = cut_all(new, s2, c, count);
	return (new);
}
