NAME = libfts.a


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
OBJS=$(SRC_S:.s=.o)
J = 0
all: $(NAME)



$(NAME): $(OBJS) 

%.o : %.s
	nasm -f macho64 $<
