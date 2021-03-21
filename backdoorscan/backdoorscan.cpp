//backdoor scanner made in c++
//tool author: krishpranav

//imports
#include <string>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <regex>
#include "checkdefs.h"
#include "cleanstring.h"
namespace fs = std::filesystem;

std::ifstream inFile;

std::string CheckFileTypes[] = {".lua", ".vmt", ".vtf", ".ttf"};

constexpr unsigned int str2int(const char* str, int h = 0)
{
	return !str[h] ? 5381 : (str2int(str, h + 1) * 33) ^ str[h];
}

void DecodeCharCode(std::string LineSubject, std::regex CheckRegex){
	std::cout << "Converted char code: "
	std::smatch Match;
	while (std:regex_search(LineSubject, Match, CheckRegex)){
		std::cout << static_cast<char>(std::stoi(Match.str(0)))
		LineSubject = Match.suffix().str();
	}
	std::cout << std::endl;
}