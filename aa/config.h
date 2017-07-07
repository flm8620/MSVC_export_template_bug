#pragma once

#ifdef _WIN32
#  ifdef BUILD_AA
#	 define AA_API __declspec( dllexport )
#  else
#	 define AA_API __declspec( dllimport )
#  endif
#else
#	define AA_API
#endif


