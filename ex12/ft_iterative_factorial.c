/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaieb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 17:09:33 by mtaieb            #+#    #+#             */
/*   Updated: 2016/11/11 17:47:12 by mtaieb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	while (nb > 1)
	{
		res *= nb; 
		nb--;
	}
	return (res);
}
