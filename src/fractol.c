/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgabelho <jgabelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 17:54:25 by jgabelho          #+#    #+#             */
/*   Updated: 2019/03/05 20:20:38 by jgabelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"
#include "../includes/libft.h"

int main(int argc, char **argv)
{
	void	*m_p;
	void	*w_p;

	if (argc < 2)
		return(0);
	m_p = mlx_init();
	w_p = mlx_new_window(m_p, 1200, 1200, "memes");

}
