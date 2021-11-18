/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_large_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:49 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/18 13:04:14 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../component/component.h"
#include "../tmp.h"

void	handle_large_x(t_formatData* data)
{
	unsigned int	ui;

	ui = va_arg(data->ap, unsigned int);
	LEN_PRINTED += printHexBase(ui, _PHEX_CAPITAL);
	return ;
}

/*
int		print_unsigned_int_hex(unsigned int decimal)
{
	int		printed_num;

	printed_num = printHexBase(decimal, LOWERCASE);
	return (printed_num);
}
this is meaning less??? we can pass arg directly?
*/
