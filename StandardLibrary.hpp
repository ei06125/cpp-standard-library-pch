#pragma once

/// ===========================================================================
/// @section Utilities library
/// ===========================================================================
#include <bitset>	  // std::bitset class template
#include <csignal>	  // Functions and macro constants for signal management
#include <cstdarg>	  // Handling of variable length argument lists
#include <functional> // Function objects, Function invocations, Bind operations and Reference wrappers
#include <typeinfo>	  // Runtime type information utilities
#include <utility>	  // Various utility components

/// ---------------------------------------------------------------------------
/// @subsection Dynamic memory management
/// ---------------------------------------------------------------------------
#include <memory> // High-level memory management utilities
#include <new>	  // Low-level memory management utilities

/// ---------------------------------------------------------------------------
/// @subsection Numeric limits
/// ---------------------------------------------------------------------------
#include <climits> // Limits of integral types
#include <limits>  // Uniform way to query properties of arithmetic types

/// ---------------------------------------------------------------------------
/// @subsection Error handling
/// ---------------------------------------------------------------------------
#include <cassert> // Conditionally compiled macro that compares its argument to zero
#include <cerrno>	 // Macro containing the last error number
#include <exception> // Exception handling utilities
#include <stdexcept> // Standard exception objects

/// ===========================================================================
/// @section Strings library
/// ===========================================================================
#include <cstring> // Various narrow character string handling functions
#include <string>  // std::basic_string class template

/// ===========================================================================
/// @section Containers library
/// ===========================================================================
#include <deque>  // std::deque container
#include <list>	  // std::list container
#include <map>	  // std::map and std::multimap associative containers
#include <queue>  // std::queue and std::priority_queue container adaptors
#include <set>	  // std::set and std::multiset associative containers
#include <stack>  // std:: stack container adaptor
#include <vector> // std::vector container

/// ===========================================================================
/// @section Iterators library
/// ===========================================================================
#include <iterator> // Range iterators

/// ===========================================================================
/// @section Algorithms library
/// ===========================================================================
#include <algorithm> // Algorithms that operate on ranges

/// ===========================================================================
/// @section Numerics library
/// ===========================================================================
#include <cmath>	// Common mathematics functions
#include <complex>	// Complex number type
#include <numeric>	// Numeric operations on values in ranges
#include <valarray> // Class for representing and manipulating arrays of values

/// ===========================================================================
/// @section Localization library
/// ===========================================================================
#include <clocale> // C localization utilities
#include <locale>  // Localization utilities

/// ===========================================================================
/// @section Input/Output library
/// ===========================================================================
#include <cstdio>	// C-style input-output functions
#include <fstream>	// std::basic_fstream, et. al class templates and typedefs
#include <iomanip>	// Helper functions to contro the format of input and output
#include <iostream> // Several standard stream objects (i.e. <ios> <istream> ...)
#include <sstream> // std::basic_stringstream, et. al class templates and typedefs

/// ===========================================================================
/// @section C++ 11
/// ===========================================================================
#if defined(__cplusplus) && __cplusplus >= 201103L
#include "StandardLibrary11.hpp"
#endif

/// ===========================================================================
/// @section C++ 14
/// ===========================================================================
#if defined(__cplusplus) && __cplusplus >= 201402L
#include "StandardLibrary14.hpp"
#endif

/// ===========================================================================
/// @section C++ 17
/// ===========================================================================
#if defined(__cplusplus) && __cplusplus >= 201703L
#include "StandardLibrary17.hpp"
#endif

/// ===========================================================================
/// @section C++ 20
/// ===========================================================================
#if defined(__cplusplus) && __cplusplus >= 202002L
#include "StandardLibrary20.hpp"
#endif
