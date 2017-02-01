// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.

#include "firmware.h"

// static uint32_t xorshift32(void) {
// 	static uint32_t x = 314159265;
// 	x ^= x << 13;
// 	x ^= x >> 17;
// 	x ^= x << 5;
// 	return x;
// }

void addtest(void) 
{
	uint32_t a = 15;
	uint32_t b = 20;
	uint32_t c = hard_add(a, b);
	print_str("Sum of ");
	print_dec(a);
	print_str(" and ");
	print_dec(b);
	print_str(" is: ");
	print_dec(c);
	print_str("\n");
}

