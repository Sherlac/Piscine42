/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:53:41 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/24 16:41:01 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 0;
	if (nb > 0)
	{
		while ((sqrt * sqrt != nb) && (sqrt < nb) && (sqrt < 46340))
			sqrt++;
	}
	if (sqrt * sqrt != nb)
		return (0);
	else
		return (sqrt);
}

int		ft_is_prime(int nb)
{
	int sqrt;
	int prime;

	sqrt = ft_sqrt(nb);
	prime = 2;
	while ((nb % prime != 0) && (prime <= ft_sqrt(nb)))
		prime++;
	if (nb % prime == 0)
		return (0);
	else
		return (1);
}
	
int main(void)
{
	int i;
	i = 2147483629;
	printf("%d\n", ft_is_prime(i));
	return (0);
}

