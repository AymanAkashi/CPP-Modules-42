# *********************************** Colors ***********************************
NC		:= \033[m
RED		:= \033[0;31m
GREEN	:= \033[1;32m
YELLOW	:= \033[1;33m
BLUE	:= \033[0;34m
PURPLE	:= \033[1;35m
CYAN	:= \033[1;36m

ITALIC		:= \033[3m
UNDERLINE	:= \033[4m

# ******************************** Directories *********************************
INC_DIR	:= include
SRC_DIR	:= src
OBJ_DIR	:= obj

# ****************************** Compiler Options ******************************
CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98
IFLAGS		:= -I $(INC_DIR)

# *********************************** Files ************************************
NAME	:= btc
SRCS	:= $(shell find $(SRC_DIR) -type f -name *.cpp)
OBJS	:= $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# ******************************** Dependencies ********************************

# ****************************** Make Arguments ********************************
ifdef DEBUG
CXXFLAGS += -g
endif

# ******************************* Main Targets *********************************
all: $(NAME)

$(NAME): $(OBJS)
	echo "$(BLUE)Linking $(ITALIC)$(UNDERLINE)$(PURPLE)$@$(NC)"
	$(CXX) $(CXXFLAGS) $^ -o $@

.SECONDEXPANSION:
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $$(addprefix $$(INC_DIR)/, $$($$*_INC_DEP)) | $(OBJ_DIR)
	echo "$(GREEN)Compiling $(ITALIC)$(UNDERLINE)$(YELLOW)$(<F)$(NC)"
	$(CXX) $(CXXFLAGS) $(IFLAGS) -c -o $@ $<

$(OBJ_DIR):
	mkdir $@

# ****************************** General Targets *******************************
clean:
	echo "$(RED)Removing $(ITALIC)$(UNDERLINE)$(YELLOW)Object files$(NC)"
	rm -rf $(OBJ_DIR)

fclean: clean
	echo "$(RED)Removing $(PURPLE)$(NAME)$(NC)"
	$(RM) $(NAME)

re: fclean all

.SILENT: $(NAME) $(OBJ_DIR) $(OBJS) clean fclean re all
.PHONY: all clean fclean re
