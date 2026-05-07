#ifndef BITBOARD_H
#define BITBOARD_H

#include <stdint.h>

// Represents a position on the 10x10 Amazons board with an index from 0 to 99.
// We use row-major ordering, so you can get the row index with position / 10
// and the column with position % 10.
typedef uint8_t Position;

// Represents a null position. I.e., for functions that return a position,
// the null position should be returned if no valid position exists.
const Position NULL_POS = 100;

// Represents a board where each position index (0-99, since Amazons is played
// on a 10x10 board) is either 0 or 1, which we refer to as "unflagged" and
// "flagged," respectively.
typedef struct {
	uint64_t lo;
	uint64_t hi;
} BitBoard;

void flag(BitBoard* bb, Position pos)

#endif
