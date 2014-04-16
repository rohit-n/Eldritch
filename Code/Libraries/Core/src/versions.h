#ifndef VERSIONS_H
#define VERSIONS_H

#define BUILD_WINDOWS	0
#define BUILD_MAC		0
#define BUILD_LINUX		1
#define BUILD_SDL		1
#define BUILD_STEAM		0

#define BUILD_WINDOWS_NO_SDL	BUILD_WINDOWS && !BUILD_SDL

#endif // VERSIONS_H