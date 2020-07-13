/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:21:02 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/13 09:11:29 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int c;
	int d;

	a = 9;
	b = 2;

	ft_div_mod(
		printf("a=%d\n,b=%d", c,d)
		return 0;
}
