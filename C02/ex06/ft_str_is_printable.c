/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:21:18 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/16 13:21:21 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int resultat;

	i = 0;
	resultat = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= '~'))
		{
		}
		else
		{
			resultat++;
		}
		i++;
	}
	if ((resultat == 0) || (i == 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
