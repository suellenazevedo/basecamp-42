/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazevedo <sazevedo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:09:36 by sazevedo          #+#    #+#             */
/*   Updated: 2022/04/19 20:22:36 by sazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod( int *a, int *b )
{
	int	tempa;
	int	tempb;

	tempa = *a / *b;
	tempb = *a % *b;
	*a = tempa;
	*b = tempb;
}

/*int main(){

    int x = 13;
    int y = 2;

    ft_ultimate_div_mod(&x, &y);
    printf("Result of the equation: %d\n", x);
    printf("Remainder: %d\n", y);

}*/

