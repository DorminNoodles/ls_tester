/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchety <lchety@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 18:31:49 by lchety            #+#    #+#             */
/*   Updated: 2018/08/26 19:34:47 by lchety           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		test_0();
int		test_1();
int		test_2();
int		test_3();
int		test_4();
int		test_5();
int		test_6();




int		main(void)
{
	int status;


	status = 0;

	status = system("../ft_ls/ft_ls > foo.bar");

	printf("status : %d\n", status);

	//TEST
	test_0();
	test_1();
	test_2();
	test_3();
	test_4();
	test_5();
	test_6();


	return (0);
}


int		test_0()
{
	int status;
	int orig_status;
	int res;


	status = 0;
	orig_status = 0;

	status = system("../ft_ls/ft_ls > ft_ls.foo");
	orig_status = system("ls -1 > ls.foo");

	res = system("diff ls.foo ft_ls.foo > res.foo");

	if (!res)
		printf("\033[32mtest_0 V\n");
	else
		printf("\033[31mtest_0 X\n");
	return (1);
}

int		test_1()
{
	int status;
	int orig_status;
	int res;


	status = 0;
	orig_status = 0;

	status = system("../ft_ls/ft_ls -l > ft_ls.foo");
	orig_status = system("ls -l > ls.foo");

	res = system("diff ls.foo ft_ls.foo > res.foo");

	if (!res)
		printf("\033[32mtest_1 V\n");
	else
		printf("\033[31mtest_1 X\n");
	return (1);
}

int		test_2()
{
	int status;
	int orig_status;
	int res;


	status = 0;
	orig_status = 0;

	status = system("../ft_ls/ft_ls ~ > ft_ls.foo");
	orig_status = system("ls ~ > ls.foo");

	res = system("diff ls.foo ft_ls.foo > res.foo");

	if (!res)
		printf("\033[32mtest_2 V\n");
	else
		printf("\033[31mtest_2 X\n");
	return (1);
}

int		test_3()
{
	int status;
	int orig_status;
	int res;


	status = 0;
	orig_status = 0;

	status = system("../ft_ls/ft_ls -R ~/ > ft_ls.foo");
	orig_status = system("ls -R ~/ > ls.foo");

	res = system("diff ls.foo ft_ls.foo > res.foo");

	if (!res)
		printf("\033[32mtest_3 V\n");
	else
		printf("\033[31mtest_3 X\n");
	return (1);
}

int		test_4()
{
	int status;
	int orig_status;
	int res;


	status = 0;
	orig_status = 0;

	status = system("../ft_ls/ft_ls -qwerty ~/ 2> ft_ls.foo");
	orig_status = system("ls -qwerty ~/ 2> ls.foo");

	res = system("diff ls.foo ft_ls.foo > res.foo");

	if (!res)
		printf("\033[32mtest_4 V\n");
	else
		printf("\033[31mtest_4 X\n");
	return (1);
}

int		test_5()
{
	int status;
	int orig_status;
	int res;


	status = 0;
	orig_status = 0;

	status = system("../ft_ls/ft_ls -a ~/ 1> ft_ls.foo");
	orig_status = system("ls -a ~/ 1> ls.foo");

	res = system("diff ls.foo ft_ls.foo > res.foo");

	if (!res)
		printf("\033[32mtest_5 V\n");
	else
		printf("\033[31mtest_5 X\n");
	return (1);
}

int		test_6()
{
	int status;
	int orig_status;
	int res;


	status = 0;
	orig_status = 0;

	status = system("../ft_ls/ft_ls -1 874821 ~/ 1> ft_ls.foo");
	orig_status = system("ls -1 874821 ~/ 1> ls.foo");

	res = system("diff ls.foo ft_ls.foo > res.foo");

	if (!res)
		printf("\033[32mtest_6 V\n");
	else
		printf("\033[31mtest_6 X\n");
	return (1);
}
