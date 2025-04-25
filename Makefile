# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 14:28:57 by jrios-ag          #+#    #+#              #
#    Updated: 2025/04/24 14:37:12 by jrios-ag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre de la libreria
NAME = libft.a

# Header universal para todos los archivos con todos los "include" y los prototipos necesarios
HEADER = libft.h

# Todos los archivos que se van a compilar ".c"
SRC = *.c

# Sources ".c" ya compilados a objetos ".o"
OBJS = $(SRC:.c=.o)

# Flags con las que se van a compilar los archivos
CFLAGS = -Wall -Wextra -Werror

# Crea la libreria "libft.a" con los archivos ".o"
AR = ar rcs

# Forma en la que vamos a compilar
CC = cc



# REGLAS

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(SRC)
	$(CC) $(FLAGS) -I. -c $(SRC)


clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
