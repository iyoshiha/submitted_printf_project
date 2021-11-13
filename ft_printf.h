/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:07:53 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/14 05:06:18 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tmp.h"


int	ft_printf(const	char* format, ...);
int	outputAndCount(const char* format,int* printed_len, va_list ap);
