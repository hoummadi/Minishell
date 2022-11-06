/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_special_parameter.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:50:40 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/07 10:46:48 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_expand.h"

int	ft_is_special_parameter(char c)
{
	if (c == '?' || c == '0')
		return (1);
	return (0);
}