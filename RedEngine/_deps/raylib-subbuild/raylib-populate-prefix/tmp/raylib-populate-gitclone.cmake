
if(NOT "E:/RedEngine/RedEngine/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp/raylib-populate-gitinfo.txt" IS_NEWER_THAN "E:/RedEngine/RedEngine/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp/raylib-populate-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: 'E:/RedEngine/RedEngine/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp/raylib-populate-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "E:/RedEngine/RedEngine/_deps/raylib-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: 'E:/RedEngine/RedEngine/_deps/raylib-src'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "C:/Program Files/Git/cmd/git.exe"  clone --no-checkout "https://github.com/raysan5/raylib.git" "raylib-src"
    WORKING_DIRECTORY "E:/RedEngine/RedEngine/_deps"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/raysan5/raylib.git'")
endif()

execute_process(
  COMMAND "C:/Program Files/Git/cmd/git.exe"  checkout bd512764ff7c82fa6e1395c51accb3ba18162827 --
  WORKING_DIRECTORY "E:/RedEngine/RedEngine/_deps/raylib-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'bd512764ff7c82fa6e1395c51accb3ba18162827'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "C:/Program Files/Git/cmd/git.exe"  submodule update --recursive --init 
    WORKING_DIRECTORY "E:/RedEngine/RedEngine/_deps/raylib-src"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: 'E:/RedEngine/RedEngine/_deps/raylib-src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "E:/RedEngine/RedEngine/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp/raylib-populate-gitinfo.txt"
    "E:/RedEngine/RedEngine/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp/raylib-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: 'E:/RedEngine/RedEngine/_deps/raylib-subbuild/raylib-populate-prefix/src/raylib-populate-stamp/raylib-populate-gitclone-lastrun.txt'")
endif()

