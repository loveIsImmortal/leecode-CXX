cmake_minimum_required(VERSION 3.23)

project(
	1_TwoSum
	LANGUAGES CXX
	VERSION 0.0.1
	DESCRIPTION "this is a answer to question 1th of leecode"
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(1_TwoSum)

target_sources(1_TwoSum
	PRIVATE
		src/1_TwoSum.cpp
	PUBLIC
		FILE_SET 1_TwoSum
		TYPE HEADERS
		BASE_DIRS
			inc
		FILES
			inc/1_TwoSum.hpp
)

if (DEFINED CACHE(MDEBUG))

	add_executable(Main main.cpp)

	target_sources(Main
		PRIVATE
			main.cpp
	)

	target_link_libraries(Main
		PRIVATE
			1_TwoSum
	)
endif()
