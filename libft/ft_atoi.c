/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:55:37 by jolevy            #+#    #+#             */
/*   Updated: 2018/04/06 17:58:07 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isspace(int c)
{
	return (c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f' \
			|| c == ' ');
}

int			ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	if (!str[i])
		return (0);
	while (ft_isspace(str[i]))
		i += 1;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr * sign);
}
