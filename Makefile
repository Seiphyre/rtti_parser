#
# clang++ `libs/llvm10/bin/llvm-config --cxxflags` -Llibs/llvm10/lib/ sources/main.cpp -lclangTooling -lclangFrontendTool -lclangFrontend -lclangDriver -lclangSerialization -lclangCodeGen -lclangParse -lclangSema -lclangStaticAnalyzerFrontend -lclangStaticAnalyzerCheckers -lclangStaticAnalyzerCore -lclangAnalysis -lclangARCMigrate -lclangRewrite -lclangRewriteFrontend -lclangEdit -lclangAST -lclangLex -lclangBasic `libs/llvm10/bin/llvm-config --libs --system-libs` -o clang-tool
#
# https://bcain-llvm.readthedocs.io/projects/llvm/en/latest/CommandGuide/llvm-config/
#

#####################################################
#	Base
#####################################################

NAME		=	reflection_gen

BIN_DIR		=	./bin/
SRC_DIR		=	./sources/
OBJ_DIR		=	./objs/

SRCS		=	$(wildcard $(SRC_DIR)*.cpp)
OBJS 		= 	$(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)
BIN			=	$(BIN_DIR)$(NAME)

CXX			=	clang++

#####################################################
#	LLVM / CLANG Config
#####################################################

LLVM_CXXFLAGS = -std=c++14 -Iheaders/ -I./libs/llvm10/include/ -fno-rtti

#LLVM_CXXFLAGS_ALL = $(shell libs/llvm10/bin/llvm-config --cxxflags)
				# -I/PATH/TO/clangtool/libs/llvm10/include
				# -std=c++14 
				# -fno-exceptions 
				# -fno-rtti 
				# -D__STDC_CONSTANT_MACROS 
				# -D__STDC_FORMAT_MACROS 
				# -D__STDC_LIMIT_MACROS

#LLVM_CXXFLAGS := $(filter-out -fno-exceptions,$(LLVM_CXXFLAGS_ALL))

LLVM_LDFLAGS = $(shell libs/llvm10/bin/llvm-config --ldflags)
				# -L/PATH/TO/clangtool/libs/llvm10/lib 
				# -Wl,-search_paths_first 
				# -Wl,-headerpad_max_install_names

LLVM_LIBS = $(shell libs/llvm10/bin/llvm-config --libs --system-libs)

CLANG_LIBS 	= 	-lclangTooling \
				-lclangFrontendTool \
				-lclangFrontend \
				-lclangDriver \
				-lclangSerialization \
				-lclangCodeGen \
				-lclangParse \
				-lclangSema \
				-lclangStaticAnalyzerFrontend \
				-lclangStaticAnalyzerCheckers \
				-lclangStaticAnalyzerCore \
				-lclangAnalysis \
				-lclangARCMigrate \
				-lclangRewrite \
				-lclangRewriteFrontend \
				-lclangEdit \
				-lclangAST \
				-lclangLex \
				-lclangBasic \

#####################################################
#	Targets
#####################################################

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@echo "[COMPILING] $<"
	@mkdir -p $(OBJ_DIR)
	@$(CXX) -c $(LLVM_CXXFLAGS) $< -o $@

$(NAME): $(OBJS)
	@echo "[ LINKING ] $(NAME)"
	@mkdir -p $(BIN_DIR)
	@$(CXX) $(LLVM_LDFLAGS) -o $(BIN) $^ $(CLANG_LIBS) $(LLVM_LIBS)


all: $(NAME)


clean:
	rm -f $(OBJS)


fclean:		clean
	rm -f $(BIN)


re:		fclean all