# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/GuessTheCharacter_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/GuessTheCharacter_autogen.dir/ParseCache.txt"
  "GuessTheCharacter_autogen"
  )
endif()
