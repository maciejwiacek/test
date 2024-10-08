/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaj <mbaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:59:04 by mbaj              #+#    #+#             */
/*   Updated: 2024/08/11 21:42:47 by mbaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_rrr(t_frame *frame)
{
	do_rra(frame);
	do_rrb(frame);
	if (frame->do_write)
		write(1, "rrr\n", 4);
}
