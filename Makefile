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
	ft_toupper.o \
	ft_tolower.o \
	ft_strchr.o \
	ft_strrchr.o \
	ft_memset.o \
	ft_bzero.o \
	ft_strncmp.o \
	ft_memchr.o \
	ft_memcmp.o \
	ft_memcpy.o \
	ft_memmove.o \
	ft_strnstr.o \
	ft_atoi.o \
	ft_calloc.o
DEPS = $(OBJS:.o=.d)
AR = ar
AR_FLAGS = rcs
CC = cc
CC_FLAGS = -Wall -Wextra -Werror
CC_FLAGS2 = -MD
RM = rm
RM_FLAGS = -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(AR_FLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) -o $@ $(CC_FLAGS) $(CC_FLAGS2) -c $<

-include $(DEPS)

clean:
	$(RM) $(RM_FLAGS) $(OBJS)
	$(RM) $(RM_FLAGS) $(DEPS)
	$(RM) $(RM_FLAGS) a.out

fclean: clean
	$(RM) $(RM_FLAGS) $(NAME)

re: fclean all

norm:
	@norminette $(HEADER)
	@norminette $(OBJS:.o=.c)

compile:
	$(CC) $(CC_FLAGS) main.c $(OBJS:.o=.c)

.PHONY: all clean fclean re norm compile
