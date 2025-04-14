/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:43:09 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/14 17:48:58 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	main(void)
{
	char c = 'a';
	if (ft_isalnum(c))
	{
		printf("'%c' is alphanumeric ",c);
	}
	else
	{
		printf("'%c' is not alphanumeric ",c);
	}
	return 0;
}