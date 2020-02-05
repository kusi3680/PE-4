/**
Parikshit Bhetwal
Dennis Lim 
PE 4
This is the implementation file for 
a game of Tic Tac Toe.  
*/

#include <iostream>
using namespace std; 

class TicTacToe {
public:
	/**
		Default constructor that calls 
		CreateBoard(). 
	*/ 
	TicTacToe() {
		CreateBoard(); 
	}
  
	/**
		Displays the board. 
	*/
	void DisplayBoard() {
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				cout << board_[i][j] << " \n"[j == 2]; 
			}
		}
	}

private: 
	string board_[3][3];

	/**
		Creates a 3x3 matrix board
		with empty strings. 
	*/
	void CreateBoard() {
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				board_[i][j] = '_'; 
			}
		}
	}
};

/**
	Serves as a driver function. 
	@return 0 If program runs as expected. 
*/
int main() {
	// Calls CreateBoard() function
	TicTacToe game; 
}
