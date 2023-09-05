/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:39:02 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/05 20:13:05 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lftest.h"

void	TestNormalFtStrlen(CuTest *tc)
{
	char	*s;

	s = strdup("Bonjour a tous !");
	printf("ft_strlen: input <%s>\n", s);
	CuAssertIntEquals(tc, strlen(s), ft_strlen(s));
}

void	*exestrlen(void	*p)
{
	char	*s = (char *)p;

	int n = strlen(s);
	(void)n;
	return (NULL);
}

void	TestNullFtStrlen(CuTest *tc)
{
	char	*s;
	int		res1;
	int		res2;
	pid_t	id;

	s = NULL;
	id = fork();
	res1 = 0;
	res2 = 0;
	if (id == 0)
		res1 = strlen(s);
	else
	{
		id = fork();
		if (id == 0)
			res2 = ft_strlen(s);
	}
	/* res1 = strlen(s); */
	printf("ft_strlen: input <%s>\n", s);
	CuAssertIntEquals(tc, res1, res2);
}

CuSuite	*ft_strlen_get_suite()
{
	CuSuite	*suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, TestNormalFtStrlen);
	SUITE_ADD_TEST(suite, TestNullFtStrlen);
	return (suite);
}

void	RunFtStrlen(void)
{
	CuString	*output = CuStringNew();
	CuSuite		*suite = CuSuiteNew();

	CuSuiteAddSuite(suite, ft_strlen_get_suite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("ft_strlen: %s\n", output->buffer);
}
