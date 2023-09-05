/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lftest.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:25:24 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/05 17:05:05 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFTEST_H
# define LFTEST_H
# include "CuTest.h"
# include "../libft.h"
# include <stdio.h>
# include <ctype.h>

CuSuite	*ft_isalpha_get_suite();
CuSuite	*ft_isdigit_get_suite();

#endif
