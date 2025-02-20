project (GLTFSample_VK)

if(MSVC)
add_compile_options(/MP)
else()
add_compile_options(-M)
find_package(X11)
include_directories(${X11_INCLUDE_DIR})
endif()


set(sources
	GLTFSample.cpp
	GLTFSample.h
	SampleRenderer.cpp
	SampleRenderer.h
	stdafx.cpp
	stdafx.h)

source_group("Sources"            FILES ${sources})

add_executable(${PROJECT_NAME} WIN32 ${sources})
target_link_libraries (${PROJECT_NAME} LINK_PUBLIC Framework_VK ImGUI Vulkan::Vulkan ${X11_LIBRARIES})

set_target_properties(${PROJECT_NAME} PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_HOME_DIRECTORY}/bin")


IF (MSVC)
	IF (CMAKE_MAJOR_VERSION LESS 3)
		MESSAGE(WARNING "CMake version 3.0 or newer is required use build variable TARGET_FILE")
	ELSE()
		ADD_CUSTOM_COMMAND(
			TARGET ${PROJECT_NAME}
			POST_BUILD
			COMMAND "mt.exe" -manifest \"${CMAKE_CURRENT_SOURCE_DIR}\\dpiawarescaling.manifest\" -inputresource:\"$<TARGET_FILE:${PROJECT_NAME}>\"\;\#1 -outputresource:\"$<TARGET_FILE:${PROJECT_NAME}>\"\;\#1
			COMMENT "Adding display aware manifest..."
		)
	ENDIF()
ENDIF(MSVC)
