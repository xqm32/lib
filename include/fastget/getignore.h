#pragma once

#include <iostream>
#include "macro.h"

int getignore(std::istream&, const std::size_t&);

int getignore(std::istream&, const int&);
int getignore(std::istream&, const std::string&);

int getignores(std::istream&, const int&);
int getignores(std::istream&, const std::string&);