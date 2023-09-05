/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lftest.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:25:24 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/05 20:08:32 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFTEST_H
# define LFTEST_H
# include "CuTest.h"
# include "../libft.h"
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

CuSuite	*ft_isalpha_get_suite();
void	RunFtIsalpha(void);
CuSuite	*ft_isdigit_get_suite();
void	RunFtIsdigit(void);
void	RunFtIsalnum(void);
void	RunFtIsascii(void);
void	RunFtIsprint(void);
void	RunFtStrlen(void);

#endif
