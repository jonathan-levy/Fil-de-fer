/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:47:19 by jolevy            #+#    #+#             */
/*   Updated: 2018/04/06 18:17:06 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <math.h>
# include <time.h>

# include "mlx.h"
# include "keys.h"
# include "libft.h"

# define MAX_X			(10)
# define MAX_ZOOM		(5)
# define MAGIC_ZOOM		(2)
# define WIN_WIDTH		(1280)
# define WIN_HEIGHT		(720)
# define TITLE(file)	(ft_strjoin("fdf - ", file))

typedef struct	s_mlx
{
	void	*init;
	void	*win;
	void	*img;
}				t_mlx;

typedef struct	s_image
{
	char	*data;
	int		size;
	int		endian;
	int		bpp;
}				t_image;

typedef struct	s_map
{
	int		**values;
	int		width;
	int		height;
	int		coordinate_y;
	int		coordinate_z;
	int		y0;
	int		y1;
	int		z0;
	int		z1;
	int		zoom;
	int		isometric;
	double	x_value;
	double	angle_y;
	double	angle_z;
}				t_map;

typedef struct	s_color
{
	int		red;
	int		green;
	int		blue;
}				t_color;

typedef struct	s_fdf
{
	t_mlx	mlx;
	t_map	map;
	t_image	image;
	t_color	color;
}				t_fdf;

void			fdf_read(char *argv, t_fdf *fdf);
int				fdf_draw(t_fdf *fdf);

#endif
