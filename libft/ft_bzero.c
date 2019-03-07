/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgabelho <jgabelho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:30:11 by jgabelho          #+#    #+#             */
/*   Updated: 2018/11/28 16:03:36 by jgabelho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
