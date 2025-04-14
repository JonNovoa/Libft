/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:43:12 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/09 12:47:39 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_prt;
	unsigned char	*src_ptr;

	dst_prt = dst;
	src_ptr = (unsigned char *)src;
	while (n--)
	{
		*dst_prt++ = *src_ptr++;
	}
	return (dst);
}
