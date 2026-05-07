#include "bitboard.h"
#include <stdint.h>

// Flags a bit in the bitboard.
inline void flag(BitBoard* bb, Position pos) {
	if (pos < 64) {
		bb->lo |= 1ULL << pos;
	} else {
		bb->hi |= 1ULL << (pos - 64);
	}
}




