/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 00:30:48 by epimenta          #+#    #+#             */
/*   Updated: 2017/09/06 00:32:14 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include <stdlib.h>
# include "./libft/includes/libft.h"
# include <math.h>
# include "./mlx/sierra/mlx.h"

# define WIN_X 270
# define WIN_Y 240

typedef struct		s_pix
{
	double			im_x;
	double			im_y;
	double			x1;
	double			x2;
	double			y1;
	double			y2;
	double			c_r;
	double			c_i;
	double			z_r;
	double			z_i;
	double			i;
	unsigned int	x;
	unsigned int	y;
	int				col;
}					t_pix;

typedef struct		s_img
{
	void			*img_ptr;
	int				*img;
	int				bpp;
	int				size_line;
	int				endian;
}					t_img;

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	void			*key;
	void			*mouse;
	t_pix			pix;
	t_img			img;
	double			zoom;
	double			pad;
	double			wid_x;
	double			wid_y;
	double			i_jul;
	unsigned int	iter_max;
	int				fract;
}					t_env;

int					do_mandel(t_env *e);
int					do_julia(t_env *e);
int					mouse_hook(int boutton, int x, int y, t_env *e);
int					key_hook(int keycode, t_env *e);
int					change_col(void);
int					error_msg(int error);
void				zoom_fract(t_env *e, double x, double y);
void				dezoom_fract(t_env *e, double x, double y);
void				check_mandel(t_env *e);
void				check_julia(t_env *e);
void				init_mandel(t_env *e);
void				init_julia(t_env *e);
void				print_fract(t_env *e);
void				check_burning(t_env *e);
int					do_burning(t_env *e);
void				init_burning(t_env *e);
int					exit_cross(void);

#endif
