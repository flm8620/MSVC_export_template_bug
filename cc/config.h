#pragma once


#	define EXPORT_DYNAMIC_LIBRARY __declspec( dllexport )
#   define IMPORT_DYNAMIC_LIBRARY __declspec( dllimport )
#   ifdef _MSC_VER
//#       pragma warning(disable : 4231)
//#       pragma warning(disable : 4910)
#   endif

#ifdef BUILD_CC
#	define CC_API EXPORT_DYNAMIC_LIBRARY
#else
#	define CC_API IMPORT_DYNAMIC_LIBRARY
#endif

#define M2(x) #x  
#define M(x) M2(x)  


#pragma message ("CC_API=" M(CC_API))