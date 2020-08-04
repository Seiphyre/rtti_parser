#
# clang++ `llvm-10.0.0/bin/llvm-config --cxxflags` -Lllvm-10.0.0/lib/ main.cpp -lclangTooling -lclangFrontendTool -lclangFrontend -lclangDriver -lclangSerialization -lclangCodeGen -lclangParse -lclangSema -lclangStaticAnalyzerFrontend -lclangStaticAnalyzerCheckers -lclangStaticAnalyzerCore -lclangAnalysis -lclangARCMigrate -lclangRewrite -lclangRewriteFrontend -lclangEdit -lclangAST -lclangLex -lclangBasic `llvm-10.0.0/bin/llvm-config --libs --system-libs` -o clang-tool
#
# https://bcain-llvm.readthedocs.io/projects/llvm/en/latest/CommandGuide/llvm-config/
#

#####################################################
#	Base
#####################################################

NAME		=	clang-tool

BIN_DIR		=	./bin

SRC			=	main.cpp

OBJ			=	$(SRC:.cpp=.o)

CXX			=	clang++

#####################################################
#	LLVM / CLANG Config
#####################################################

LLVM_CXXFLAGS = $(shell llvm-10.0.0/bin/llvm-config --cxxflags)
				# -I/PATH/TO/clangtool/llvm-10.0.0/include
				# -std=c++14 
				# -fno-exceptions 
				# -fno-rtti 
				# -D__STDC_CONSTANT_MACROS 
				# -D__STDC_FORMAT_MACROS 
				# -D__STDC_LIMIT_MACROS

LLVM_LDFLAGS = $(shell llvm-10.0.0/bin/llvm-config --ldflags)
				# -L/PATH/TO/clangtool/llvm-10.0.0/lib 
				# -Wl,-search_paths_first 
				# -Wl,-headerpad_max_install_names

LLVM_LIBS = $(shell llvm-10.0.0/bin/llvm-config --libs --system-libs)

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
	$(CXX) $(LLVM_CXXFLAGS) -o $(OBJ) -c $(SRC)
	# link
	$(CXX) $(LLVM_LDFLAGS) -o $(BIN_DIR)/$(NAME) $(OBJ) $(CLANG_LIBS) $(LLVM_LIBS)


all:		$(NAME)


clean:
	rm -f $(OBJ)


fclean:		clean
	rm -f $(BIN_DIR)/$(NAME)


re:		fclean all