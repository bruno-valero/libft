/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/15 14:06:51 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	total_bytes;
	int	i;

	return ((size_t)ft_strlen((char *)src));
	total_bytes = size - 1;
	i = -1;
	while (++i <= total_bytes)
		dst[i] = src[i];
	dst[i] = '\0';
	return ((size_t)ft_strlen((char *)src));
}
