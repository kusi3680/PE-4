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
		// Loop through
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				// Output value and newline when j == 2
				cout << board_[i][j] << " \n"[j == 2]; 
			}
		}
		cout << endl; 
	}

	/**
		Prompt the user for a location to play, 
		then return that choice. 
		@return pos The position to play at. 
	*/
	int GetPlayerChoice() {
		// Provide instructions 
		cout << "Instructions: Let the top left corner be position 0" <<  endl; 
		cout << "So, the position to the right of it is position 1 and so forth" << endl; 
		// Prompt for input 
		cout << "Enter a position: "; 
		// Take input 
		int pos; 
		cin >> pos; 

		return pos; 
	}

	
	/**
		Places a marker at position pos with the marker. 
		@param pos The position to set mark at. 
		@param mark The marker. 
	*/
	void PlaceMarker(int pos, string mark) {
		// Check each position from 0 - 8 
		if(pos == 0) {
		 	board_[0][0] = mark; 
		 	return; 
		}

		else if(pos == 1) {
			board_[0][1] = mark; 
			return; 
		}

		else if(pos == 2) {
			board_[0][2] = mark; 
			return; 
		}

		else if(pos == 3) {
			board_[1][0] = mark;
			return; 
		}

		else if(pos == 4) {
			board_[1][1] = mark;
			return; 
		}

		else if(pos == 5) {
			board_[1][2] = mark;
			return; 
		}

		else if(pos == 6) {
			board_[2][0] = mark;
			return; 
		}

		else if(pos == 7) {
			board_[2][1] = mark;
			return; 
		}

		else if(pos == 8) {
			board_[2][2] = mark;
			return; 
		}

	}

private: 
	string board_[3][3];

	/**
		Creates a 3x3 matrix board
		with empty strings. 
	*/
	void CreateBoard() {
		// Loop through 
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				// Set as '_' string 
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
	// Counts turns 
	int turn_count = 0; 

	// Initially show board 
	game.DisplayBoard(); 
	while(turn_count < 9) {
		// Initalize position 
		int pos = -1; 
		// Player 1 goes first 
		cout << "Player 1's Turn" << endl; 
		// Get Player 1's choice 
		// Get valid choice 
		while(pos < 0 || pos > 8) {
			pos = game.GetPlayerChoice(); 
		} 
		// Place X as marker 
		game.PlaceMarker(pos, "X"); 
		// Display the board 
		game.DisplayBoard(); 
		// Increment count 
		turn_count ++; 

		// Check if at 9 
		if(turn_count == 9) {
			break; 
		}

		// Initalize position 
		pos = -1; 
		// Player 2 goes second 
		cout << "Player 2's Turn" << endl; 
		// Get Player 2's choice 
		// Get valid choice 
		while(pos < 0 || pos > 8) {
			pos = game.GetPlayerChoice(); 
		}
		// Place O as marker 
		game.PlaceMarker(pos, "O"); 
		// Display the board 
		game.DisplayBoard();  
		// Increment count 
		turn_count ++; 

	}

	return 0; 
}	
