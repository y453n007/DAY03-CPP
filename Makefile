
# **************************************************************************** #
#                                                                              #
#                      Makefile for D03                                        #
#                      Created: 2022/10/15 23:23:51                            #
#                      Made by : yelgharo <yelgharo@student.1337.ma>           #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CLANG = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OFILES = $(FILES:.cpp=.o)

LIBS = ClpTrap.hpp ScavTrap.hpp FragTrap.hpp

all : $(NAME)

$(NAME) : $(OFILES) 
	${CLANG} ${FLAGS} $^ -o $@

%.o : %.cpp  $(LIBS) 
	$(CLANG)  -o $@ -c $< 

clean : 
	@rm -rf ${OFILES}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re

# **************************************************************************** #
