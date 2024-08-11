/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaj <mbaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:30:50 by mbaj              #+#    #+#             */
/*   Updated: 2024/08/11 23:23:28 by mwiacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push_swap(t_frame *frame)
{
	fill_stack_a(frame);
	frame->do_write = 1;
	if (!sorted(frame))
	{
		solver(frame);
		return ;
	}
}

int	main(int argc, char **argv)
{
	t_frame		*frame;

	frame = NULL;
	if (argc < 2)
		return (1);
	frame = create_frame(frame, argv);
	push_swap(frame);
	push_swap_free(frame);
	return (0);
}
