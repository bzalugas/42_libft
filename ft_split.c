/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 21:05:00 by bzalugas          #+#    #+#             */
/*   Updated: 2021/01/20 21:59:43 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	init(char ***new, const char *s, char c)
{
    size_t	i;
    size_t	count;

    count = 1;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            while (s[i + 1] && s[i + 1] == c)
                i++;
            if (s[i + 1])
                count++;
        }
        i++;
    }
    if (!(*new = (char **)malloc(sizeof(char *) * (count + 1))))
        return (0);
    *(*new + count) = NULL;
    return (count);
}

/* static char	*cut_one(const char *s, size_t start, size_t len) */
/* { */
/*     char	*one; */

/*     if (!(one = (char *)malloc(sizeof(char) * len + 1))) */
/*         return (NULL); */
/*     ft_strlcpy(one, &s[start], len + 1); */
/*     return (one); */
/* } */

static char	**cut_all(char **new, const char *s, char c, size_t max_len)
{
    size_t	i;
    size_t	start;
    size_t	count;


    i = 0;
    start = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] == c && s[i - 1] != c)
        {
            new[count] = ft_substr(s, start, i - start);
            count++;
            start = i + 1;
        }
        else if (s[i] == c && s[i - 1] == c)
            start++;
        i++;
    }
    if (count < max_len)
    {
        new[count] = ft_substr(s, start, i - start);
        count++;
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
