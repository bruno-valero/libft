/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunofer <brunofer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 07:02:52 by brunofer          #+#    #+#             */
/*   Updated: 2025/07/16 13:07:36 by brunofer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	total_bytes;
	int	i;

	if (size < 1)
		return ((size_t)(ft_strlen(dst) + ft_strlen((char *)src)));
	total_bytes = size - ft_strlen(dst) - 1;
	i = -1;
	while (++i <= total_bytes)
		dst[ft_strlen(dst) + i] = src[i];
	dst[i] = '\0';
	return ((size_t)(ft_strlen(dst) + ft_strlen((char *)src)));
}
