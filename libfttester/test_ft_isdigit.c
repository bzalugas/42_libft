/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:02:43 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/05 17:04:58 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"

void	TestNormalFtIsdigit(CuTest *tc)
{
	char	c;

	printf("ft_isdigit: Normal inputs (-128 => 127)\n");
	c = -128;
	while (c < 127)
	{
		CuAssertIntEquals(tc, isdigit(c) > 0, ft_isdigit(c) > 0);
		c++;
	}
	CuAssertIntEquals(tc, isdigit(c) > 0, ft_isdigit(c) > 0);
}

CuSuite	*ft_isdigit_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, TestNormalFtIsdigit);
	return (suite);
}
