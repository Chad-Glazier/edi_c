#include <stdio.h>
#include <emscripten.h>
#include "bitboard/bitboard.h"

int main() {
	BitBoard bb = {};
	flag(&bb, 12);
	unflag(&bb, 12);
	printf("Hello, world!\n");
	printf("Board: %llu %llu\n", bb.lo, bb.hi);
	return 0;
}
