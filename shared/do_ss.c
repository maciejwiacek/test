/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaj <mbaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:00:05 by mbaj              #+#    #+#             */
/*   Updated: 2024/08/11 21:43:57 by mbaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_ss(t_frame *frame)
{
	do_sa(frame);
	do_sb(frame);
	if (frame->do_write)
		write(1, "ss\n", 3);
}
