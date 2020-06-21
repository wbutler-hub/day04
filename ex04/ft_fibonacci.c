/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:48:38 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/21 12:56:04 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
	{
		return(-1);
	}
	else if (index <= 1)
	{
		return(index);
	}
	else
	{
		return(ft_fibonacci(index - 1) + ft_fibonacci (index - 2));
	}
}
