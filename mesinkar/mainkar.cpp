#include "mesinkar.h"
#include <iostream>
int main(){
	std::string wolo;
//	wolo = "abcdefg";

	std::getline (std::cin,wolo);
	mesinkar M = mesinkar();
	M.SetPitaKarakter(wolo);
	M.START();
	for(std::string::iterator it = wolo.begin();it < wolo.end()-1;it++){
		M.ADV();
	}
	std::cout << M.GetCC();
	return 0;
}