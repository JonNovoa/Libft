/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:23:56 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/14 18:41:18 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
/*Rellena los primeros len bytes del bloque de memoria apuntado por b con el valor c (convertido a unsigned char).

*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	
	ptr = b;
	while (len --)
	{
		*ptr++ = (unsigned char)c;
	}
	return (b);
}
#include <stdio.h>

int	main(void)
{
	char	str[50] = "hello, world";
	printf("before memset: %s\n",str);
	ft_memset(str, '*', 5);
	printf("after memset %s",str);
	return 0;
}