/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmastor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 13:35:45 by flmastor          #+#    #+#             */
/*   Updated: 2021/05/25 14:10:01 by flmastor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	if (s == 0)
		return (0);
	if (start + len > (unsigned int)ft_strlen(s))
		len = ft_strlen(s) - start;
	if (len > (unsigned int)ft_strlen(s))
		len = ft_strlen(s);
	if (start >= (unsigned int)ft_strlen(s) || len <= 0)
		len = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == 0)
		return (0);
	if (start >= (unsigned int)ft_strlen(s))
	{
		res[0] = '\0';
		return (res);
	}
	i = -1;
	while (s[start + ++i] && i < len)
		res[i] = s[start + i];
	res[i] = '\0';
	return (res);
}
