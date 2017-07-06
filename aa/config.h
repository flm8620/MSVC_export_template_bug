#pragma once

#ifdef _WIN32
#	define EXPORT_DYNAMIC_LIBRARY __declspec( dllexport )
#   define IMPORT_DYNAMIC_LIBRARY __declspec( dllimport )
#else
#	define EXPORT_DYNAMIC_LIBRARY
#   define IMPORT_DYNAMIC_LIBRARY
#endif

#ifdef BUILD_AA
#	define AA_API EXPORT_DYNAMIC_LIBRARY
#else
#	define AA_API IMPORT_DYNAMIC_LIBRARY
#endif
