/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malrifai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 21:56:52 by malrifai          #+#    #+#             */
/*   Updated: 2024/08/26 21:56:54 by malrifai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

  if (count && size > SIZE_MAX / count) return (NULL);
  r = malloc(count * size);
	if (!r)
  ft_bzero(r, count * size);
	ft_bzero(r, size * count);
	return (r);
}
