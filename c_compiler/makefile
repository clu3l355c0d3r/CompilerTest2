CPPFLAGS += -std=c++11 -W -Wall -g -Wno-unused-parameter -D_GLIBCXX_USE_CXX11_ABI=0


CPPFLAGS += -I include
ASTCPP += $(wildcard include/ast/*.cpp) ############

all : bin/parser bin/print_canonical bin/eval_expr 

bin/parser: src/parser.tab.hpp src/* $(ASTCPP:%.cpp=%.o)
	mkdir -p bin
	g++ $(CPPFLAGS) -o $@ $(ASTCPP:%.cpp=%.o)


bin/c_parser: include/c_parser.tab.h $(PSRCS:%.cpp=%.o) 
	mkdir -p bin
	g++ $(CPPFLAGS) $(CXXFLAGS) -o $@ $(PSRCS:%.cpp=%.o)

%/c_parser.tab.c: include/c_parser.tab.h

# Need to generate flexer.yy.cpp from .flex first
%/flexer.yy.cpp: %/flexer.flex include/c_parser.tab.h
	flex -o $@ $^ 



src/parser.tab.cpp src/parser.tab.hpp : src/parser.y
	bison -v -d src/parser.y -o $@ src/parser.tab.cpp

src/lexer.yy.cpp : src/lexer.flex src/parser.tab.hpp
	flex -o src/lexer.yy.cpp  src/lexer.flex

bin/print_canonical : src/print_canonical.o src/parser.tab.o src/lexer.yy.o src/parser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o $@ bin/print_canonical $^
	
bin/eval_expr : src/eval_expr.o src/parser.tab.o src/lexer.yy.o src/parser.tab.o
	mkdir -p bin
	g++ $(CPPFLAGS) -o $@ bin/eval_expr $^


clean :
	rm include/ast/*.o
	rm src/*.tab.hpp
	# rm src/*.yy.cpp
	rm bin/*
