#include"systemc.h"
#include"hello_world.h"
int sc_main(int argc, char* argv[])
{
		hello_world out("HELLO");
		out.hello();
		return 0;
}