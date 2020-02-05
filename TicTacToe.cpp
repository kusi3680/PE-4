/**
Parikshit Bhetwal
Dennis Lim 
PE 4
This is the implementation file for 
a game of Tic Tac Toe.  
*/

#include <iostream>
using namespace std; 

// enum class TilesSquare = {X_title, O_title};
enum class Title {X, O, blank};

// used to track positions on the board
struct Position {
	int row;
	int col;

	bool operator==(const Position &other) {
		return row == other.row && col == other.col;
	}
};

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

	Position GetPlayerChoice(){
		int row, col;
		std::cout << "Please enter the row: \n" ;
		std::cin >> row;
		std::cout << "Please enter the col: \n";
		std::cin >> col;
		return Position{row, col};
	}
	
  /**
    Places a marker at position pos with the marker. 
  */
  void PlaceMarker(int pos, string mark) {
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
