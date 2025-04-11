/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:41:50 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/10 14:45:34 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_nbrlen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		tmp_n;

	tmp_n = n;
	len = ft_nbrlen(tmp_n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (tmp_n == 0)
		str[0] = '0';
	if (tmp_n < 0)
	{
		str[0] = '-';
		tmp_n = -tmp_n;
	}
	while (tmp_n > 0)
	{
		str[--len] = tmp_n % 10 + '0';
		tmp_n /= 10;
	}
	return (str);
}
