#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
int main(int argc,const char* argv[])
{
	std::cout << "argc  == " << argc << '\n';

	for(int index = 0; index <= argc; ++index){
		std::cout << "argv[" << index << "] == "<< std::quoted(argv[index]) << '\n' << std::endl;;
	}

	return 0;
}
