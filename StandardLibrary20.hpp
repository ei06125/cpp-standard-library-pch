#pragma once

/// ===========================================================================
/// @section Concepts library
/// ===========================================================================
#include <concepts> // Fundamental library concepts

/// ===========================================================================
/// @section Coroutines library
/// ===========================================================================
#include <coroutine> // Coroutine support library

/// ===========================================================================
/// @section Utilities library
/// ===========================================================================
#include <compare> // Three-way comparison operator support
/// <source_location>
#if defined(__has_include)
#if __has_include(<source_location>)
#include <source_location> // Supplies means to obtain source code location
#endif					   // __has_include(<source_location>)
#endif					   // defined (__has_include)
#include <version> // Supplies implementation-dependent library information

/// ===========================================================================
/// @section Strings library
/// ===========================================================================
/// <format>
#if defined(__has_include)
#if __has_include(<format>)
#include <format> // Formatting library including std::format
#endif			  // __has_include(<format>)
#endif			  // defined (__has_include)

/// ===========================================================================
/// @section Containers library
/// ===========================================================================
#include <span> // std::span view

/// ===========================================================================
/// @section Ranges library
/// ===========================================================================
#include <ranges> // Range access, primitives, requirements, utilities and adaptors

/// ===========================================================================
/// @section Numerics library
/// ===========================================================================
#include <bit>	   // Bit manipulation functions
#include <numbers> // Math constants

/// ===========================================================================
/// @section Thread support library
/// ===========================================================================

/// <barrier>
#if defined(__has_include)
#if __has_include(<barrier>)
#include <barrier> // Barriers
#endif			   // __has_include(<barrier>)
#endif			   // defined (__has_include)

/// <latch>
#if defined(__has_include)
#if __has_include(<latch>)
#include <latch> // Latches
#endif			 // __has_include(<latch>)
#endif			 // defined (__has_include)

/// <semaphore>
#if defined(__has_include)
#if __has_include(<semaphore>)
#include <semaphore> // Semaphores
#endif				 // __has_include(<semaphore>)
#endif				 // defined (__has_include)

#include <stop_token> // Stop tokens for std::jthread
