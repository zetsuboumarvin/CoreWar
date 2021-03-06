/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:14:23 by eleonard          #+#    #+#             */
/*   Updated: 2020/01/29 15:03:47 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	print_func(char *msg, char *src_name)
{
	ft_putstr(msg);
	ft_putendl(src_name);
}
