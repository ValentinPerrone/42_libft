FILENAME := libft.a
FLAGS := -Wall -Wextra -Werror -I.
SRCS := ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 
OBJ := $(SRCS:.c=.o)

all: $(FILENAME)
$(FILENAME): $(OBJ) libft.h
	@ar -scr $@ -o $^
	@echo "\033[32m\n================================================================\033[0m"
	@echo "\033[32m|                \033[33m$(FILENAME) compiled successfully!\033[32m                |\033[0m"
	@echo "\033[32m================================================================\n\033[0m"
%.o: %.c
	@printf "\tCompiling:\t%-18s -> %s\n" "$<" "$@"
	@cc $(FLAGS) -c $^ -o $@
clean:
	@for obj in $(OBJ); do \
		if [ -f "$$obj" ]; then \
			printf "\tRemoving:\t%s\n" "$$obj"; \
			rm -f "$$obj"; \
		fi; \
	done
fclean: clean
	@for FILENAME in $(FILENAME); do \
		if [ -f "$$FILENAME" ]; then \
			printf "\tRemoving:\t%s\n" "$$FILENAME"; \
			rm -f "$$FILENAME"; \
		fi; \
	done
	@echo "\033[32m\n================================================================\033[0m"
	@echo "\033[32m|             \033[33m.o and .a files removed successfully!\033[32m            |\033[0m"
	@echo "\033[32m================================================================\n\033[0m"
re: fclean all

.PHONY : all clean fclean re