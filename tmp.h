/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:39:14 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/14 11:47:58 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TMP_H
# define TMP_H
#
# include <stdarg.h>
# include "hhhh/libft.h"
#
#define NOTEOA(chr)	((chr=='\0')==0)
# define CONVERSION_MATCHED(conv)	(data->format[data->format_i]) == (conv);
// #define
typedef struct	s_formatData
{
	const char* format;
	int			printed_len;
	int			format_i;
	va_list		ap;
}				t_formatData;



void	outputAndCount(t_formatData* data);



#endif
