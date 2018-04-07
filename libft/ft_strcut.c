/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 18:05:12 by jolevy            #+#    #+#             */
/*   Updated: 2018/04/06 18:05:19 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcut(const char *str, char c)
{
	int		len;
	char	*cut;

	len = 0;
	while (str[len] != c && str[len])
		if (str[len++] == c)
			break ;
	if (!(cut = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_strncpy(cut, str, len);
	cut[len + 1] = '\0';
	return (cut);
}
