/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amazurie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:30:54 by amazurie          #+#    #+#             */
/*   Updated: 2019/03/07 17:00:38 by amazurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putnstr(char const *s, size_t n)
{
	size_t i;

	if (s)
	{
		i = ft_strlen(s);
		write(1, s, i > n ? n : i);
	}
}
