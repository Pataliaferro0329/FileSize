//Author:    Patrick Taliaferro
//Date:      April 28, 2020
//File Name: main.cpp


#include <iostream>
#include <fstream>


int main(int argc, char * argv[]) {
	
	char  c;
	uint32_t  i = 0;

	if(argc < 2) return 0;
	std::ifstream ifs(argv[1], std::ifstream::in);

	while(ifs.get(c)) i++;

	std::cout << "File Size: " << unsigned(i) << " Bytes\n";

	ifs.close();

	return 0;
}
