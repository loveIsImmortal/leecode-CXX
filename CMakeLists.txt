

cmake_minimum_required(VERSION 3.10)

project(
	Leecode_CXX
	LANGUAGES CXX
	DESCRIPTION "This is a process of doing practice questions."
)

add_executable(Main main.cpp)

function(linkLib libName libFile)
	add_subdirectory(${libFile})
	target_link_libraries( Main
	PRIVATE
		${libName}
	)
	set(${Main} "${${Main}}" PARENT_SCOPE)
endfunction()

linkLib("TwoSum" "moudle/TwoSum")


