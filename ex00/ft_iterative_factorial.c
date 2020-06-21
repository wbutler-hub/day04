/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:06:25 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/21 11:56:18 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int ft_interative_factorial(int nb)


{
	write(1, "0", 1);

	int factorial;
	int i;

	factorial = 1;
	i = 0;

	if (nb == 0)
	{
		return 0;
	}
	else if (nb < 0)
	{
		return 0;
	}
	while(i++ < nb)
	{

		factorial *= i;
	return(factorial);
	}
}


