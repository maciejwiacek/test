/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaj <mbaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:58:45 by mbaj              #+#    #+#             */
/*   Updated: 2024/08/11 21:42:27 by mbaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_rrb(t_frame *frame)
{
	if (frame->b)
		frame->b = frame->b->prev;
	if (frame->do_write)
		write(1, "rrb\n", 4);
}
