/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazevedo <sazevedo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:03:57 by sazevedo          #+#    #+#             */
/*   Updated: 2022/04/12 19:45:57 by sazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		ascii;
	char	number;

	ascii = 48;
	while (ascii <= 57)
	{
		number = ascii;
		write(1, &number, 1);
		ascii++;
	}
	
}

int main(){
	ft_print_numbers();
}