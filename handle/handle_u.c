/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:06:46 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/21 15:32:04 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printHexBase.h"
# include "../includes/ft_printf.h"

int		handle_u(t_formatData*	data)
{
	unsigned int	unsigned_decimal;
	int				printed_num;

	unsigned_decimal = va_arg(data->ap, unsigned);
	printed_num = printUnsignedDecimal(unsigned_decimal, STDOUT_FILENO);
	return (printed_num);
}
