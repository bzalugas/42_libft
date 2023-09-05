/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allTests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:12:12 by bazaluga          #+#    #+#             */
/*   Updated: 2023/09/05 17:45:52 by bazaluga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lftest.h"

/*  void	RunAllTests(void) */
/* { */
/* 	CuString	*output = CuStringNew(); */
/* 	CuSuite		*suite = CuSuiteNew(); */

/* 	CuSuiteAddSuite(suite, ft_isalpha_get_suite()); */
/* 	CuSuiteAddSuite(suite, ft_isdigit_get_suite()); */

/* 	CuSuiteRun(suite); */
/* 	CuSuiteSummary(suite, output); */
/* 	CuSuiteDetails(suite, output); */
/* 	printf("%s\n", output->buffer); */
/* } */

int	main(void)
{
	RunFtIsalpha();
	RunFtIsdigit();
	RunFtIsalnum();
	RunFtIsascii();
	RunFtIsprint();
	RunFtStrlen();
	return (0);
}
