#
# clang++ `libs/llvm10/bin/llvm-config --cxxflags` -Llibs/llvm10/lib/ sources/main.cpp -lclangTooling -lclangFrontendTool -lclangFrontend -lclangDriver -lclangSerialization -lclangCodeGen -lclangParse -lclangSema -lclangStaticAnalyzerFrontend -lclangStaticAnalyzerCheckers -lclangStaticAnalyzerCore -lclangAnalysis -lclangARCMigrate -lclangRewrite -lclangRewriteFrontend -lclangEdit -lclangAST -lclangLex -lclangBasic `libs/llvm10/bin/llvm-config --libs --system-libs` -o clang-tool
#
# https://bcain-llvm.readthedocs.io/projects/llvm/en/latest/CommandGuide/llvm-config/
#

#####################################################
#	Base
#####################################################

NAME		=	vde-rtti-parser

BIN_DIR		=	./bin

SRC_DIR		=	./sources

OBJ_DIR		=	./objs

SRC			=	main.cpp

OBJ			=	$(SRC:.cpp=.o)

CXX			=	clang++

#####################################################
#	LLVM / CLANG Config
#####################################################

LLVM_CXXFLAGS = $(shell libs/llvm10/bin/llvm-config --cxxflags)
				# -I/PATH/TO/clangtool/libs/llvm10/include
				# -std=c++14 
				# -fno-exceptions 
				# -fno-rtti 
				# -D__STDC_CONSTANT_MACROS 
				# -D__STDC_FORMAT_MACROS 
				# -D__STDC_LIMIT_MACROS

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

$(NAME):	
	# compile
	$(CXX) $(LLVM_CXXFLAGS) -o $(OBJ_DIR)/$(OBJ) -c $(SRC_DIR)/$(SRC)
	# link
	$(CXX) $(LLVM_LDFLAGS) -o $(BIN_DIR)/$(NAME) $(OBJ_DIR)/$(OBJ) $(CLANG_LIBS) $(LLVM_LIBS)


all:		$(NAME)


clean:
	rm -f $(OBJ_DIR)/$(OBJ)


fclean:		clean
	rm -f $(BIN_DIR)/$(NAME)


re:		fclean all