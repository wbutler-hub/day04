/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursion_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbutler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:59:25 by wbutler           #+#    #+#             */
/*   Updated: 2020/06/21 12:20:22 by wbutler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if(nb > 1)
	{
		nb *= ft_recursive_factorial(nb-1);
	}

	else
	{
		return 0;
	}
	return (nb);
}

int main()
{
	ft_recursive_factorial();
}
