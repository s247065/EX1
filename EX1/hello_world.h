#include"systemc.h"
#include<iostream>
SC_MODULE(hello_world)
{
	SC_CTOR(hello_world)
	{
		SC_METHOD(hello);
	}

	void hello(void)
	{
		cout << "Hello world";
	}
}
 
