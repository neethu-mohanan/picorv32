// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.

#include "firmware.h"

static uint32_t xorshift32(void) {
	static uint32_t x = 31415;
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
	return x;
}

void addtest(void) 
{
	uint32_t a = xorshift32();
	uint32_t b = xorshift32();
	uint32_t c = hard_add(a, b);
	print_str("Sum of ");
	print_hex(a, 8);
	print_str(" and ");
	print_hex(b, 8);
	print_str(" is: ");
	print_hex(c, 8);
	print_str("\n");
}

void vector_add(void)
{
	uint32_t a[10], b[10], c[10];
	for(int k = 0; k<10; k++)
	{
		a[k] = k + 1;
		b[k] = k + 10;
	}		

	for(int i = 0; i<10; i++)
	{
		c[i] = hard_add(a[i], b[i]);
		print_str("Sum of ");
		print_dec(a[i]);
		print_str(" and ");
		print_dec(b[i]);
		print_str(" is: ");
		print_dec(c[i]);
		print_str("\n");
	}
}
