/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amazurie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:38:04 by amazurie          #+#    #+#             */
/*   Updated: 2019/03/07 17:00:23 by amazurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putnstr_fd(char const *s, int fd, size_t n)
{
	size_t i;

	if (s)
	{
		i = ft_strlen(s);
		write(fd, s, i > n ? n : i);
	}
}
