/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_big_double.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hotph <hotph@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:20:50 by hotph             #+#    #+#             */
/*   Updated: 2023/09/29 16:22:27 by hotph            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libsft_utils.h"

bool	is_big_double(double t, double f)
{
	if (t > f)
		return (true);
	return (false);
}