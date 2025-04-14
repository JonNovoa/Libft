/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:52:44 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/09 13:09:24 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	dst_ptr = dst;
	src_ptr = (unsigned char *)src;
	if (dst_ptr < src_ptr)
	{
		while (len--)
		{
			*dst_ptr++ = *src_ptr++;
		}
	}
	else
	{
		dst_ptr += len;
		src_ptr += len;
		while (len--)
		{
			*(--dst_ptr) = *(--src_ptr);
		}
		return (dst);
	}
}
