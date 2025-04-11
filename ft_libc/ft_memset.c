/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:29:14 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/09 12:39:02 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_menset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len --)
	{
		*ptr++ = (unsigned char)c;
	}
	return (b);
}
