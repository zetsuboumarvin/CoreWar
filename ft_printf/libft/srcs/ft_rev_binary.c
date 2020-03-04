/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_binary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:03:12 by eleonard          #+#    #+#             */
/*   Updated: 2020/01/29 15:03:13 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_binary(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == '1')
			str[i] = '0';
		else
			str[i] = '1';
		i++;
	}
}