/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:09:29 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/14 18:11:14 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

int	main(void)
{
	char c = 'A';
	if (ft_isprint(c))
	{
		write(1, "printable",10);
	}
	else
	{
		write(1, "not printable",14);
	}
	return 0;
}