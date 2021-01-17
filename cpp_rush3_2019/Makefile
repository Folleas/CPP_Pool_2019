##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

GPP			=	g++

RM			=	rm -rf

NAME		=	MyGKrellm

COMPILEFLAG	=	-Wall -Wextra -Werror -g

INCLUDE		=	-Iinclude/

LIBFLAGS	=	-l sfml-graphics -l sfml-window -l sfml-system -l sfml-audio

LIBCURS		=	-l ncurses

CPPFLAGS_FML=	$(COMPILEFLAG) $(INCLUDE) $(LIBFLAGS)

CPPFLAGS_CUR=	$(COMPILEFLAG) $(INCLUDE) $(LIBCURS)

CPPFLAGS    =	$(COMPILEFLAG) $(INCLUDE)

SRC			=	src/main.cpp					\
				src/core/Core.cpp				\
				src/graphics/Display_ncurse.cpp \
				src/graphics/sfml/Display.cpp \
				src/graphics/sfml/graphicTest.cpp \
				src/graphics/sfml/Widget.cpp \
				src/modules/CpuModule.cpp		\
				src/modules/SysModule.cpp		\
				src/modules/TimeModule.cpp		\
				src/modules/UserModule.cpp		\
				src/modules/RamModule.cpp		\
				src/modules/BatteryModule.cpp	\
				src/modules/NetworkModule.cpp   \
				src/debug/Debug.cpp

OBJ			=	$(SRC:.cpp=.o)

$(NAME):	$(OBJ)
	@echo -e "\033[01m\033[31mLinking ...\033[00m"
	@$(GPP) $(OBJ) -o $(NAME) $(CPPFLAGS) $(LIBCURS) $(LIBFLAGS)
	@echo -e "\033[01m\033[32mStandard compilation done => ${NAME}\033[00m"

graphical:	$(OBJ)
	@echo -e "\033[01m\033[31mLinking ...\033[00m"
	@$(GPP) $(OBJ) -o $(NAME) $(CPPFLAGS_FML)
	@echo -e "\033[01m\033[32mGraphic compilation done => ${NAME}\033[00m"

text:		$(OBJ)
	@echo -e "\033[01m\033[31mLinking ...\033[00m"
	@$(GPP) $(OBJ) -o $(NAME) $(CPPFLAGS_CUR)
	@echo -e "\033[01m\033[32mCurses compilation done => ${NAME}\033[00m"

all:	$(NAME)

clean:
	@$(RM) *.o
	@$(RM) vgcore.*
	@$(RM) *#
	@$(RM) src/*.o src/*# src/modules/*.o src/modules/*# src/core/*.o
	@$(RM) src/graphics/*.o src/graphics/*#
	@echo -e "\033[01m\033[31mRemoving useless files ...\033[00m"

fclean:	clean
	@$(RM) $(NAME)
	@echo -e "\033[01m\033[31mRemoving binary : {${NAME}} ...\033[00m"

re:	fclean all

.PHONY:	all clean fclean re
