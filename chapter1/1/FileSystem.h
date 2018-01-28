#pragma once
#ifndef FILESYSTEM_H
#define FILESYSTEM_H
#include <iostream>

class FileSystem {
public:
	std::size_t numDisks() const {
		return 1;
	}
};

extern FileSystem tfs;
#endif
