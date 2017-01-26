// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.

#include "firmware.h"

void hello_world(void) 
{
	print_str("\t\tHello World!!!! I AM COMING FOR YOU PICORV32!!!!!\n\n");
}

void bye_world(void)
{
	print_str("\t\tBye World!! GO BACK TO THE VOID FROM WHENCE YOU CAME!!\n\n");
}