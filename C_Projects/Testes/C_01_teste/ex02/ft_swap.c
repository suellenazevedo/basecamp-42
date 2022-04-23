/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazevedo <sazevedo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:10:17 by sazevedo          #+#    #+#             */
/*   Updated: 2022/04/18 17:39:47 by sazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	
	c = *b;
	*b = *a;
	*a = c;
	
}

int main(){
	int x = 13;
	int y = 31;
	
	printf("Values before: %d %d\n", x, y);
	ft_swap(&x, &y);
	printf("Values after: %d %d\n", x, y);
}