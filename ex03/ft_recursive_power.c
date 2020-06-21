/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:39:26 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/21 12:46:18 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if(!nb || power < 0)
	{
		return (0);
	}
	if(!power)
	{
		return(1);
	}
	return(nb ft_recursive_power(nb,power));
}
