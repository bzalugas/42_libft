/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:16:54 by bzalugas          #+#    #+#             */
/*   Updated: 2021/01/19 00:38:05 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*new;

    new = NULL;
    if (start < ft_strlen(s))
    {
        if (!(new = malloc(sizeof(char) * len + 1)))
        return (NULL);
        ft_strlcpy(new, s + start, len + 1);
    }
    return (new);
}
