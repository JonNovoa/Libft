/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:06:24 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/09 18:27:02 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;
	size_t	i;

	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[len] = '\0';
	return (s2);
}
