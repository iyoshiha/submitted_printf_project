/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyoshiha <iyoshiha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:39:14 by iyoshiha          #+#    #+#             */
/*   Updated: 2021/11/21 14:42:41 by iyoshiha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define _PF_NOTEOS(chr)	((chr=='\0')==0)
# define _PF_FORMAT	data->format
# define _PF_INDEX	data->format_i
# define _PF_AP		data->ap
# define _PF_LEN_PRINTED	data->printed_len
# define _PF_CONV_MATCHED(conv)
# define _PF_CONV_MATCHED_LOW_X 	((data->format[data->format_i]) == ('x')) ret = handle_lower_x(data);
# define _PF_CONV_MATCHED_CAP_X 	((data->format[data->format_i]) == ('X')) ret = handle_large_x(data);
# define _NEXT
# define _ADD

typedef struct	s_formatData
{
	const char* format;
	int			printed_len;
	int			format_i;
	va_list		ap;
}				t_formatData;

int	ft_printf(const	char* format, ...);
void	outputAndCount(t_formatData* data);
int		convertAndCount(t_formatData* data);

#endif