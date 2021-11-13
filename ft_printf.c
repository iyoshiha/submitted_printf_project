/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:01:04 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/14 04:19:48 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const	char* format, ...)
{
	va_list	ap;
	int		printed_len;

	va_start(ap, format);
	outputAndCount(format, &printed_len, ap);
	va_end(ap);



	return (printed_len);	// excluding the null byte ('\0') used to end output to strings.
						 	// negative number returned when error happened.
}
