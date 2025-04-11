/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:24:44 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/10 18:48:02 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
	{
		return ;
	}
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp ->next)
	{
		temp = temp ->next;
	}
	temp->next = new;
}
