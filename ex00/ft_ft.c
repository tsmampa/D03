/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:13:01 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/13 11:57:16 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr)
{
  *nbr = 42;
}

int main(void)
{
  int k;
  int ptr;
 k = 42;
 ptr = k;

  printf("%d\n", k);
  return(0);
}
