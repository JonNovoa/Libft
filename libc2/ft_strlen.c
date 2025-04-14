/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:12:11 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/14 18:14:03 by jnovoa-a         ###   ########.fr       */

/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
#include <stdio.h>

int main(void)
{
	const char	*str = "hello, world";
	printf("longitud '%s': %zu", str, ft_strlen(str));
	return 0;
}