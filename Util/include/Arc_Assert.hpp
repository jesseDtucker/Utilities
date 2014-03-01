#pragma once
#ifndef ARC_ASSERT_HPP
#define ARC_ASSERT_HPP

#include <iostream>
#include <string>

#if _DEBUG 

#define ARC_ASSERT(statement) if (!(statement)) { __debugbreak(); }
#define ARC_ASSERT_MSG(statement, msg) if(!(statement)) { std::cerr << msg << std::endl; __debugbreak(); }

#else

#define ARC_ASSERT(statement)
#define ARC_ASSERT_MSG(statement, msg)

#endif

#endif