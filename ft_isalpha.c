/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschreye <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:46:24 by jschreye          #+#    #+#             */
/*   Updated: 2021/10/12 09:05:28 by jschreye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int alpha)
{
	if ((alpha >= 97 && alpha <= 122) || (alpha >= 65 && alpha <= 90))
		return (1);
	else
		return (0);
}
