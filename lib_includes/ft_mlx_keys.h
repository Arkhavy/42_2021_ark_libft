/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_keys.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <ljohnson@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:54:39 by ljohnson          #+#    #+#             */
/*   Updated: 2022/01/24 17:43:24 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MLX_KEYS_H
# define FT_MLX_KEYS_H

# ifndef MLX_KEYBOARD
#  define MLX_KEYBOARD "ASDFHGZXCV BQWERYT123465=97-80]OU[IP LJ'K;\\,/NM.  `"
# endif //MLX_KEYBOARD

// Q W E R T Y U I O P
enum	e_firstrow
{
	K_Q = 12,
	K_W = 13,
	K_E = 14,
	K_R = 15,
	K_T = 17,
	K_Y = 16,
	K_U = 32,
	K_I = 34,
	K_O = 31,
	K_P = 35,
};

// A S D F G H J K L
enum	e_secondrow
{
	K_A = 0,
	K_S = 1,
	K_D = 2,
	K_F = 3,
	K_G = 5,
	K_H = 4,
	K_J = 38,
	K_K = 40,
	K_L = 37,
};

// Z X C V B N M
enum	e_thirdrow
{
	K_Z = 6,
	K_X = 7,
	K_C = 8,
	K_V = 9,
	K_B = 11,
	K_N = 45,
	K_M = 46,
};

// 1 2 3 4 5 6 7 8 9 0 - = ~
enum	e_numberrow
{
	K_1 = 18,
	K_2 = 19,
	K_3 = 20,
	K_4 = 21,
	K_5 = 23,
	K_6 = 22,
	K_7 = 26,
	K_8 = 28,
	K_9 = 25,
	K_0 = 29,
	K_MINUS = 27,
	K_EQUAL = 24,
	K_TILDE = 50,
};

// 0 1 2 3 4 5 6 7 8 9 / * - + .
enum	e_pavnum
{
	PV_0 = 82,
	PV_1 = 83,
	PV_2 = 84,
	PV_3 = 85,
	PV_4 = 86,
	PV_5 = 87,
	PV_6 = 88,
	PV_7 = 89,
	PV_8 = 91,
	PV_9 = 92,
	PV_SLASH = 75,
	PV_STAR = 67,
	PV_MINUS = 78,
	PV_PLUS = 69,
	PV_ENT = 76,
	PV_POINT = 65,
};

// [ ] \ ; ' , . /
enum	e_weirdchar
{
	K_BRACKET1 = 33,
	K_BRACKET2 = 30,
	K_BACKSLASH = 42,
	K_SEMICOLON = 41,
	K_QUOTE = 39,
	K_COMMA = 43,
	K_DOT = 47,
	K_SLASH = 44,
};

// Special Characters
enum	e_specchar
{
	K_DEL = 51,
	K_ESC = 53,
	K_SPACE = 49,
	K_CTRL = 256,
	K_ALT = 261,
	K_CTRLGR = 269,
	K_ATLGR = 262,
	K_CMD = 259,
	K_ENT = 36,
	K_SHIFT = 257,
	K_SHIFTGR = 258,
	K_CAPS = 272,
	K_TAB = 48,
	K_UP = 126,
	K_LEFT = 123,
	K_DOWN = 125,
	K_RIGHT = 124,
};

#endif //FT_MLX_KEYS_H