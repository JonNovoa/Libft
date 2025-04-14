/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:44:36 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/14 19:01:39 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}
int	main(void)
{
	char	str[10] = "hello";

	ft_bzero(str, 5);
	for (int i = 0; i < 10; i++)
	{
		printf("%d",str[i]);
	}
	printf("\n");
	return 0;
}