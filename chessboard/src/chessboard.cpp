//============================================================================
// Name        : chessboard.cpp
// Author      : Seth Giovanetti
// Version     :
// Copyright   : Copyright information is inherited.
// Description : Handles chessboard mechanics
//============================================================================

#include <string>
#include "chessboard.h"

#include <iostream>

using namespace std;

Chessboard::Chessboard() {
	this->setBoardWithFEN(
			"rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1");
}

Chessboard::Chessboard(string FEN) {
	this->setBoardWithFEN(FEN);
}

void Chessboard::doMove(char piece, int x, int y) {
	if (boardArray[x][y]){}
}

void Chessboard::setBoardWithFEN(string FEN) {
	const char* cstr = FEN.c_str();
	string outstr;
	//s
	try {
		int x = 0;
		int y = 0;
		for (char* it = (char*) cstr; *it; ++it) {
			if (*it == '/') {
				x = 0;
				y++;
				++it;
			}
			if (*it == ' ')
				return;
			if (0 <= *it - '0' && *it - '0' <= 9) {
				for (int i = *it - '0'; i > 0; i--) {
					cout << x << "," << y << ": " << 0 << endl;
					boardArray[x++][y] = '0';
				}
			} else {
				cout << x << "," << y << ": " << *it << endl;
				boardArray[x++][y] = *it;
			}
		}
	} catch (...) {

	}
}

string Chessboard::toString() {
	string outstr;
	for (int y = 0; y < boardHeight; ++y) {
		for (int x = 0; x < boardHeight; ++x) {
			outstr += (char)boardArray[x][y];
		}
		outstr += '\n';
	}
	return outstr;
}
