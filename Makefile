# REGLA:
# target (objetivo o destino): prerequisites (prerrequisitos o dependencias)
# 	recipe (receta, acciones, instrucciones o comandos)

NAME = libft.a
OBJS = ft_isalpha.o \
	ft_isdigit.o \
	ft_isalnum.o \
	ft_isascii.o \
	ft_isprint.o
AR = ar
AR_FLAGS = rcs
CC = cc
CC_FLAGS = -Wall -Wextra -Werror
RM = rm
RM_FLAGS = -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) -o $@ $(CC_FLAGS) -c $<

clean:
	$(RM) $(RM_FLAGS) $(OBJS)

fclean: clean
	$(RM) $(RM_FLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
