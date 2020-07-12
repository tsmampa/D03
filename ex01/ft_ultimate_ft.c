/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:20:12 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/12 11:39:54 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
 *********nbr = 42;
}

int main ()
{
 int a;
 int *ptr1 = &a;
 int **ptr2 = &ptr1;
 int ***ptr3 = &ptr2;
 int ****ptr4 = &ptr3;
 int *****ptr5 = &ptr4;
 int ******ptr6 = &ptr5;
 int *******ptr7 = &ptr6;
 int ********ptr8 = &ptr7;
 int *********ptr9 = &ptr8;
 {
 ft_ultimate_ft(ptr9);
 printf("%d\n",a);
 }
 return (0);
}
