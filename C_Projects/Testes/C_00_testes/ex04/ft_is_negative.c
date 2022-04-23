/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazevedo <sazevedo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:49:45 by sazevedo          #+#    #+#             */
/*   Updated: 2022/04/12 20:04:12 by sazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n)
{
	if( n < 0 ){
		write(1, "N", 1);
	}
	else {
		write(1, "P", 1);
	}
}

int main(){
	ft_is_negative(-13);
}