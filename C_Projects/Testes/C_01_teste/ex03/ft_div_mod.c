/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazevedo <sazevedo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:42:07 by sazevedo          #+#    #+#             */
/*   Updated: 2022/04/18 19:57:36 by sazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(){
	
	int x = 25;
    int y = 3;
    int result = 13;
    int remainder = 13;

    printf("Value of x: %d\n" ,x);
    printf("Value of y:%d\n" ,y);
    ft_div_mod(x, y, &result, &remainder);
    printf("\nResult: %d\n" ,result);
    printf("Remainder: %d\n" ,remainder);
}