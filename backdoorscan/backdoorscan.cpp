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

