/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:58:18 by tshevchu          #+#    #+#             */
/*   Updated: 2016/12/09 15:53:22 by tshevchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
	unsigned char s;

	s = (unsigned char)c;
	if (c < 0 || c > 255)
		return (0);
	if (s >= 32 && s <= 126)
		return (1);
	return (0);
}
