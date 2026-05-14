# this is cmake config fiel for a answer to question 1th of leecode
cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(MDEBUG "test check" OFF)

add_library(TwoSum)
target_sources(TwoSum
	PRIVATE
		src/TwoSum.cpp
	PUBLIC
		FILE_SET twoSum
		TYPE HEADERS
		BASE_DIRS inc
		FILES
			inc/TwoSum.cpp
)

target_include_directories(Main
	PRIVATE
		inc/
)

if (MDEBUG)
	project(
		twoSum
		LANGUAGES CXX
	)
	add_executable(Main)

	target_sources(Main
		PRIVATE
			main.cpp
	)
	target_link_libraries(Main
		PRIVATE
			TwoSum
	)
endif()
