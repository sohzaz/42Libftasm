NAME = libfts.a
CFLAGS = -Wall -Wextra -Werror
SRC_C = main.c
SRC_S =	ft_isalpha.s\
		ft_isascii.s\
		ft_isdigit.s\
		ft_islower.s\
		ft_isprint.s\
		ft_isupper.s\
		ft_isalnum.s\
		ft_memcpy.s\
		ft_memset.s\
		ft_puts.s\
		ft_strcat.s\
		ft_strdup.s\
		ft_bzero.s\
		ft_strlen.s\
		ft_cat.s
OBJ_S = $(SRC_S:.s=.o)


all: $(NAME)
	ar -rs $(NAME) $(OBJ_S)
	ranlib $(NAME)

$(NAME): $(OBJ_S)

%.o : %.s
	nasm -f macho64 $< -o $@

clean:
	rm -f $(OBJ_S)

fclean: clean
	rm -f $(NAME)
	rm -f test

tests: $(NAME) 
	gcc $(CFLAGS) -o test $(SRC_C) $(NAME) 
	./test	   

re: fclean all
