/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amazurie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:33:51 by amazurie          #+#    #+#             */
/*   Updated: 2019/02/13 10:55:17 by amazurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putunbr(unsigned int u)
{
	unsigned int	n;
	int				num;

	n = u;
	num = 1;
	while (n / num > 9)
		num = num * 10;
	while (num > 0)
	{
		ft_putchar(n / num % 10 + '0');
		num = num / 10;
	}
}
