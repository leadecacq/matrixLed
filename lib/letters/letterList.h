//
// letterList.h
// Letters Defintions
//
// Created by Mathias de Cacqueray-Valmenier on 30/11/2018.
// Copyright (c) 2018 Mathias de Cacqueray-Valmenier. All rights reserved.
// Repository created by Mathias de Cacqueray-Valmenier, You should read LICENSE

#ifndef __LETTER_LIST_HEADER__
#define __LETTER_LIST_HEADER__

#include <Arduino.h>


const uint8_t NB_ROWS = 5;
const uint8_t NB_COLS = 5;

const byte A[NB_ROWS] = {
	B01100,
	B10010,
	B11110,
	B10010,
	B10010
};
const byte B[NB_ROWS] = {
	B11100,
	B10010,
	B11100,
	B10010,
	B11100
	
};
const byte C[NB_ROWS] = {
	B0111,
	B1000,
	B1000,
	B1000,
	B0111
	
};
const byte D[NB_ROWS] = {
	B11100,
	B10010,
	B10010,
	B10010,
	B11100
	
};
const byte E[NB_ROWS] = {
	B11110,
	B10000,
	B11110,
	B10000,
	B11110
	
};
const byte F[NB_ROWS] = {
	B11110,
	B10000,
	B11100,
	B10000,
	B10000
	
};
const byte G[NB_ROWS] = {
	B01110,
	B10000,
	B10110,
	B10010,
	B01100,
	
};
const byte H[NB_ROWS] = {
	B10010,
	B10010,
	B11110,
	B10010,
	B10010
	
};
const byte I[NB_ROWS] = {
	B01110,
	B00100,
	B00100,
	B00100,
	B01110
	
};
const byte J[NB_ROWS] = {
	B11110,
	B00100,
	B00100,
	B10100,
	B01000
	
};
const byte K[NB_ROWS] = {
	B10010,
	B10100,
	B10000,
	B10100,
	B10010,
	
};
const byte L[NB_ROWS] = {
	B10000,
	B10000,
	B10000,
	B10000,
	B11110,
	
};
const byte M[NB_ROWS] = {
	B10010,
	B11110,
	B10010,
	B10010,
	B10010
	
	
};
const byte N[NB_ROWS] = {
	B10010,
	B11010,
	B10110,
	B10010,
	B10010
	
	
};
const byte O[NB_ROWS] = {
	B01100,
	B10010,
	B10010,
	B10010,
	B01100
	
};
const byte P[NB_ROWS] = {
	B11100,
	B10010,
	B11100,
	B10000,
	B10000
	
};
const byte Q[NB_ROWS] = {
	B01100,
	B10010,
	B10010,
	B10110,
	B01110
	
};
const byte R[NB_ROWS] = {
	B11100,
	B10010,
	B11100,
	B10010,
	B10010
	
};
const byte S[NB_ROWS] = {
	B01110,
	B10000,
	B01100,
	B00010,
	B11100
	
};
const byte T[NB_ROWS] = {
	B11110,
	B00100,
	B00100,
	B00100,
	B00100
	
};
const byte U[NB_ROWS] = {
	B10010,
	B10010,
	B10010,
	B10010,
	B01100,
	
};
const byte V[NB_ROWS] = {
	B10010,
	B10010,
	B10010,
	B01100,
	B00100,

};
const byte W[NB_ROWS] = {
	B10010,
	B10010,
	B10010,
	B11110,
	B10010
	
};
const byte X[NB_ROWS] = {
	B10010,
	B10010,
	B01100,
	B10010,
	B10010
	
};
const byte Y[NB_ROWS] = {
	B10010,
	B10010,
	B01100,
	B01000,
	B10000
	
};
const byte Z[NB_ROWS] = {
	B11110,
	B00010,
	B00100,
	B01000,
	B10000,
	B11110,
	
};
const byte ALL[NB_ROWS] = {
	B11111111,B11111111,B11111111,B11111111,
	B11111111,B11111111,B11111111,B11111111,
	B11111111,B11111111
};
const byte EMPTY[NB_ROWS] = {
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000
};
byte customArray[NB_ROWS] = {
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000,
	B00000000
};

const uint8_t NB_LETERS = 26;

const uint8_t * ALL_LETERS[NB_LETERS] = {
	A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z
};


void cvtCharByte(const char textDisplay, byte textByte[NB_ROWS]) {
	switch (textDisplay) {
		case 'A': memcpy(textByte, A, sizeof(EMPTY)); break;
		case 'B': memcpy(textByte, B, sizeof(EMPTY)); break;
		case 'C': memcpy(textByte, C, sizeof(EMPTY)); break;
		case 'D': memcpy(textByte, D, sizeof(EMPTY)); break;
		case 'E': memcpy(textByte, E, sizeof(EMPTY)); break;
		case 'F': memcpy(textByte, F, sizeof(EMPTY)); break;
		case 'G': memcpy(textByte, G, sizeof(EMPTY)); break;
		case 'H': memcpy(textByte, H, sizeof(EMPTY)); break;
		case 'I': memcpy(textByte, I, sizeof(EMPTY)); break;
		case 'J': memcpy(textByte, J, sizeof(EMPTY)); break;
		case 'K': memcpy(textByte, K, sizeof(EMPTY)); break;
		case 'L': memcpy(textByte, L, sizeof(EMPTY)); break;
		case 'M': memcpy(textByte, M, sizeof(EMPTY)); break;
		case 'N': memcpy(textByte, N, sizeof(EMPTY)); break;
		case 'O': memcpy(textByte, O, sizeof(EMPTY)); break;
		case 'P': memcpy(textByte, P, sizeof(EMPTY)); break;
		case 'Q': memcpy(textByte, Q, sizeof(EMPTY)); break;
		case 'R': memcpy(textByte, R, sizeof(EMPTY)); break;
		case 'S': memcpy(textByte, S, sizeof(EMPTY)); break;
		case 'T': memcpy(textByte, T, sizeof(EMPTY)); break;
		case 'U': memcpy(textByte, U, sizeof(EMPTY)); break;
		case 'V': memcpy(textByte, V, sizeof(EMPTY)); break;
		case 'W': memcpy(textByte, W, sizeof(EMPTY)); break;
		case 'X': memcpy(textByte, X, sizeof(EMPTY)); break;
		case 'Y': memcpy(textByte, Y, sizeof(EMPTY)); break;
		case 'Z': memcpy(textByte, Z, sizeof(EMPTY)); break;
		case ' ': memcpy(textByte, EMPTY, sizeof(EMPTY)); break;
		default: memcpy(textByte, A, sizeof(EMPTY));
	}
};
#endif // __LETTER_LIST_HEADER__ //
