#pragma once

/// ===========================================================================
/// @section Utilities library
/// ===========================================================================
#include <chrono>			// C++ time utilities
#include <initializer_list> // std::initializer_list class template
#include <tuple>			// std::tuple class template
#include <type_traits>		// Compile-time type information

/// ---------------------------------------------------------------------------
/// @subsection Numeric limits
/// ---------------------------------------------------------------------------
#include <cstdint> // Fixed-width integer types and limits of other types

/// ---------------------------------------------------------------------------
/// @subsection Error handling
/// ---------------------------------------------------------------------------
#include <system_error> // Defines std::error_code, a platform-dependent error code

/// ===========================================================================
/// @section Containers library
/// ===========================================================================
#include <array>		 // std::array container
#include <forward_list>	 // std::forward_list container
#include <unordered_map> // std::unordered_map and std::unordered_multimap unordered associative containers
#include <unordered_set> // std::unordered_set and std::unordered_multiset unordered associative containers

/// ===========================================================================
/// @section Numerics library
/// ===========================================================================
#include <random> // Random number generators and distributions
#include <ratio>  // Compile-time rational arithmetic

/// ===========================================================================
/// @section Regular Expressions library
/// ===========================================================================
#include <regex> // Classes, algorithms and iterators to support regex processing

/// ===========================================================================
/// @section Atomic Operations library
/// ===========================================================================
#include <atomic> // Atomic operations library

/// ===========================================================================
/// @section Thread support library
/// ===========================================================================
#include <condition_variable> // Thread waiting conditions
#include <future>			  // Primitives for asynchronous computations
#include <mutex>			  // Mutual exclusion primitives
#include <thread>			  // std::thread class and supporting functions
