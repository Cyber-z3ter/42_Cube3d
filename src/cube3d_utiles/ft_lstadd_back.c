/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:24:02 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/28 18:49:35 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/structs.h"
#include "../../includes/cube3d.h"


void	ft_lstadd_back(t_map_lines **lst, t_map_lines *new)
{
	t_map_lines	*last_node;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
}