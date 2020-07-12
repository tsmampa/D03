/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:19:26 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/12 14:08:32 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void  ft_swap(int *a, int *b)
{
  int swap;
  swap = *a;
  *a = *b;
  *b = swap;
}

int main()
{
  int n = 5;
  int i = 10;
 

  int *nptr = &n;
  int *iptr = &i;

  ft_swap(nptr, iptr);

  printf("%d\n", n);
  printf("%d\n", i);

  return 0;
}
