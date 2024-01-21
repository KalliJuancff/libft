# REGLA:
# target (objetivo o destino): prerequisites (prerrequisitos o dependencias)
# 	recipe (receta, acciones, instrucciones o comandos)

NAME = libft.a
HEADER = libft.h
OBJS = ft_isalpha.o \
	ft_isdigit.o \
	ft_isalnum.o \
	ft_isascii.o \
	ft_isprint.o \
	ft_strlen.o \
	ft_toupper.o
DEPS = $(OBJS:.o=.d)
AR = ar
AR_FLAGS = rcs
CC = cc
CC_FLAGS = -Wall -Wextra -Werror -MD
RM = rm
RM_FLAGS = -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) -o $@ $(CC_FLAGS) -c $<

-include *.d

clean:
	$(RM) $(RM_FLAGS) $(OBJS)
	$(RM) $(RM_FLAGS) $(DEPS)

fclean: clean
	$(RM) $(RM_FLAGS) $(NAME)

re: fclean all

norm:
	@norminette $(HEADER)
	@norminette $(OBJS:.o=.c)

.PHONY: all clean fclean re norm
