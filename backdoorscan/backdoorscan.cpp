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

void CheckLine(const std::string &Line, int LineNum, const std::string &FilePath, const std::string &FileType){
	int DefVal = 0;

	switch (str2int(FileType.c_str()))
	{
		case str2int(".lua"):
			for std(std::string RegexPattern : LuaCheckPattern){
				std::regex CheckRegex(RegexPattern); //Convert to actual regex

				std::ptrdiff_t number_of_matches = std::distance(std::sregex_iterator(Line.begin(), Line.end(), CheckRegex), std::sregex_iterator());
			}
	}
}