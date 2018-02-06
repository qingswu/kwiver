
#ifndef VITAL_UTIL_EXPORT_H
#define VITAL_UTIL_EXPORT_H

#ifdef VITAL_UTIL_BUILD_AS_STATIC
#  define VITAL_UTIL_EXPORT
#  define VITAL_UTIL_NO_EXPORT
#else
#  ifndef VITAL_UTIL_EXPORT
#    ifdef vital_util_EXPORTS
        /* We are building this library */
#      define VITAL_UTIL_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VITAL_UTIL_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VITAL_UTIL_NO_EXPORT
#    define VITAL_UTIL_NO_EXPORT 
#  endif
#endif

#ifndef VITAL_UTIL_DEPRECATED
#  define VITAL_UTIL_DEPRECATED __declspec(deprecated)
#endif

#ifndef VITAL_UTIL_DEPRECATED_EXPORT
#  define VITAL_UTIL_DEPRECATED_EXPORT VITAL_UTIL_EXPORT VITAL_UTIL_DEPRECATED
#endif

#ifndef VITAL_UTIL_DEPRECATED_NO_EXPORT
#  define VITAL_UTIL_DEPRECATED_NO_EXPORT VITAL_UTIL_NO_EXPORT VITAL_UTIL_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VITAL_UTIL_NO_DEPRECATED
#    define VITAL_UTIL_NO_DEPRECATED
#  endif
#endif

#endif
