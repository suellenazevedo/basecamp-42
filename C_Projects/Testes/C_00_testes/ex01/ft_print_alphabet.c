/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazevedo <sazevedo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:50:59 by sazevedo          #+#    #+#             */
/*   Updated: 2022/04/12 05:49:10 by sazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet( void )
{
	int		ascii;
	char	letter;

	ascii = 97;
	while (ascii <= 122)
	{
		letter = ascii;
		write(1, &letter, 1);
		ascii++;
	}
}

int main()
{
	ft_print_alphabet();
}