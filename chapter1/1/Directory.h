#pragma once
#ifndef DIRECTORY_H
#define DIRECTORY_H
#include <iostream>
#include "FileSystem.h"
extern FileSystem tfs;

class Directory {
public:
	Directory(std::size_t n) { 
	st = tfs.numDisks();
	std::cout << "sucess" << std::endl; }
private:
	std::size_t st;
	
};
#endif