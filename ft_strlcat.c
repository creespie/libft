/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurossi <lurossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:55:17 by lurossi           #+#    #+#             */
/*   Updated: 2026/05/20 12:55:17 by lurossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	index;

	i = ft_strlen(dest);
	index = 0;
	while (src[index] && (index + ft_strlen(dest) - 2) < size)
	{
		dest[i] = src[index];
		i++;
		index++;
	}
	dest[i] = '\0';
	return ((ft_strlen(dest) + ft_strlen(src)));
}
