/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <tmaluh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 11:23:06 by tmaluh            #+#    #+#             */
/*   Updated: 2018/12/10 09:53:15 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRACKETS_H
# define BRACKETS_H

# include <unistd.h>

# define ZERO	0
# define NEG	-1

# define ISDELIM1(c) (c == '{' || c == '(' || c == '[') ? true : false
# define ISDELIM2(c) (c == '}' || c == ')' || c == ']') ? true : false

# define PUTE ft_putendl("Error")
# define PUTOK ft_putendl("OK")
# define _NOTIS_MSG(ex) if (!(ex)) { PUTE; return (0); } else { PUTOK; } 
# define _NOTIS(ex) if (!(ex)) return (false)

enum	e_bool
{
	false,
	true
};

# define _BOOL typedef enum e_bool	bool

_BOOL;

# define _STRING	typedef char*		string
# define _CSTRING	typedef const char*	cstring

_STRING;
_CSTRING;

#endif