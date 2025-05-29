#pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>


#define NO_RETURN [[noreturn]]


template<typename... Args>
NO_RETURN
void debug_panic(const char* file, int line, const char* function, const char* message, Args&&... args) {
    std::ostringstream oss;
    (oss << ... << args) << "";
    std::cerr << message << oss.str() << "\nProgram exited at " << file << ":" << line <<  " in " << function << "\n";
    std::cerr << std::flush;
    std::exit(EXIT_FAILURE);
}


#define PANIC(...) do { debug_panic(__FILE__,__LINE__,__func__,__VA_ARGS__); } while(0)


#ifndef NDEBUG
#define ASSERT(expr) do { if (!(expr)) { PANIC("Assertion '", #expr, "' failed"); }} while (0)
#else
#define ASSERT(expr) ((void)0)
#endif
