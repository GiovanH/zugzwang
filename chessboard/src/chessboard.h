/*
 * chessboard.h
 *
 *  Created on: Feb 9, 2018
 *      Author: Seth
 */

#ifndef CHESSBOARD_H_
#define CHESSBOARD_H_

#include <string>
using namespace std;

class Chessboard {
private:
	const static int boardHeight = 8;
	const static int boardWidth = 8;
	char boardArray [boardHeight][boardWidth];
public:
	Chessboard();
	Chessboard(string);
	string toString();
	void doMove(char, int, int);
private:
	void setBoardWithFEN(string FEN);
	//prototypes (or very small functions) go here
};

#endif /* CHESSBOARD_H_ */
