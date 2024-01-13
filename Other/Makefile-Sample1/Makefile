# REGLA 1:
# objetivo: dependencias
# 	instrucciones (o comandos)
# ...
# 
# REGLA n:
# objetivo: dependencias
# 	instrucciones (o comandos)

OBJS = main.o salida.o calculadora.o
BINARY = programa.out
CFLAGS = -Wall -Wextra -Werror

all: programa.out

# $@ = objetivo
# $< = primera dependencia
# S? = todas las dependencias

programa.out: $(OBJS)
	cc -o $@ $?

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(BINARY) $(OBJS)
