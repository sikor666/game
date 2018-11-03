#include <engine.h>

#include <iostream>

int main()
{
	engine e;

	std::cout << e.version << std::endl;

	return e.run();
}
