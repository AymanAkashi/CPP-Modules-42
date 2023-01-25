# ******************************** Directories *********************************
OBJS_DIR		:= obj
INC_DIR			:= .

# *********************************** Files ************************************
NAME	:= Bureaucrat
SRCS	:= Bureaucrat.cpp main.cpp
INC		:= Bureaucrat.hpp
OBJS	:= $(SRCS:.cpp=.o)

# ****************************** COLORS ***************************************
NC				:= \033[m
RED				:= \033[0;31m
GREEN			:= \033[1;32m
YELLOW			:= \033[1;33m
BLUE			:= \033[0;34m
PURPLE			:= \033[1;35m
# ****************************** Compiler Options ******************************
CC			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98
# ******************************* Other commands *******************************
RM		:= rm -rf
MKDIR	:= mkdir -p
OBJ_DEP := $(addprefix $(OBJS_DIR)/, $(OBJS))
INC_DEP	:= $(addprefix $(INC_DIR)/, $(INC))
# ********************************** Targets ***********************************
all: $(NAME)

$(NAME): $(OBJ_DEP) $(INC_DEP)
		@echo "$(BLUE)Building	$(YELLOW)$(NAME)$(NC)"
		@$(CC) $(CFLAGS) $(OBJ_DEP) -o $(NAME)


$(OBJS_DIR)/%.o: %.cpp $(INC_DEP)
	@$(MKDIR) $(OBJS_DIR)
	@echo "$(GREEN)Compiling	$(YELLOW)$(shell basename $<)$(NC)"
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS_DIR)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
