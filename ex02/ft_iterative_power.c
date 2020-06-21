/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:21:13 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/21 12:38:10 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_interative_power(int nb, int power)
{
	int result;
	result = 1;

	if(power < 0)
	{
		return 0;
	}
	while(power--)
	{
		result *=nb;
		return (result);
	}

}
