project(discord-bot)

# Toggles
option(DOWNLOAD_LIBS "Automatically downloads the 'Sleepy-Discord' and 'Cpp-DotEnv' libraries" ON)

# Download Libraries to root/deps
find_package(Git)
if(DOWNLOAD_LIBS)
	# Check for git
	if(NOT Git_FOUND)
		string(CONCAT GIT_NOT_FOUND_WARNING
			"GIT was not found, CMake list will likely fail. "
			"Please make sure that GIT is inside your PATH variable")
		message(WARNING ${GIT_NOT_FOUND_WARNING})
	endif()

  # Include the downloading tools
  include(ExternalProject)
	include(buildtools/cmake/DownloadProject.cmake)

  # Download the projects
  download_project(
    PROJ                sleepy-discord
    GIT_REPOSITORY      https://github.com/yourWaifu/sleepy-discord.git
    GIT_TAG             master
    SOURCE_DIR          ${PROJECT_SOURCE_DIR}/deps/sleepy-discord
    UPDATE_DISCONNECTED 1
  )
  download_project(
    PROJ                cpp-dotenv
    GIT_REPOSITORY      https://github.com/adeharo9/cpp-dotenv.git
    GIT_TAG             master
    SOURCE_DIR          ${PROJECT_SOURCE_DIR}/deps/cpp-dotenv
    UPDATE_DISCONNECTED 1
  )
endif()

# Make src/ and inc/ work
include(src/CMakeLists.txt)
include_directories(inc)

# Compile target
add_executable(discord-bot ${discord-bot_SOURCES})

# Add libraries for Sleepy-Discord
add_subdirectory(deps/sleepy-discord)
target_link_libraries(discord-bot sleepy-discord)

# Add libraries for dotEnv
add_subdirectory(deps/cpp-dotenv)
target_link_libraries(discord-bot cpp_dotenv)
