/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:25:42 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/05 17:03:31 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"

void	TestNormalFtIsalpha(CuTest *tc)
{
	char	c;

	printf("ft_isalpha: Normal inputs (-128 => 127)\n");
	c = -128;
	while (c < 127)
	{
		CuAssertIntEquals(tc, isalpha(c) > 0, ft_isalpha(c) > 0);
		c++;
	}
	CuAssertIntEquals(tc, isalpha(c) > 0, ft_isalpha(c) > 0);
}

CuSuite	*ft_isalpha_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, TestNormalFtIsalpha);
	return (suite);
}
