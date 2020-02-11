# Parikshit Bhetwal 
# Dennis Lim 
# PE 4
# This is the make file for 
# programming exercise four.

# Compiler 
CXX = g++ 
# Flags, using C++17 
CXXFLAGS = -std=c++17 -Wall 
# make all
all: main
# make main 
main: 
	$(CXX) $(CXXFLAGS) TicTacToe.cpp -o main
# make clean
clean:
	rm main
