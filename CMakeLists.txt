# this is cmake config fiel for a answer to question 1th of leecode
cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(MDEBUG "test check" OFF)

if (MDEBUG)
	project(
		TwoSum
		LANGUAGES CXX
	)
	add_executable(Main)

	target_sources(Main
		PRIVATE
			src/TwoSum.cpp
			inc/TwoSum.hpp
			main.cpp
	)
	target_include_directories(Main
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/inc
	)

else()
	add_library(TwoSum)
	target_sources(TwoSum
	PRIVATE
		BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/moudle/TwoSum/src
		FILES
			TwoSum.cpp
	PUBLIC
		FILE_SET twoSum
		TYPE HEADERS
		BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/moudle/TwoSum/inc
		FILES
			TwoSum.hpp
	)
endif()
