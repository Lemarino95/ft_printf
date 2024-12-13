/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:33:20 by lemarino          #+#    #+#             */
/*   Updated: 2024/12/13 12:03:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include <string.h>
# include <ctype.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>
# include "libft/libft.h"

int		ft_printf(const char *input, ...);
int		ft_print_p(intptr_t *p);
int		ft_print_hex(unsigned int nbr, const char input);
int		ft_print_u(unsigned int n);
#endif
