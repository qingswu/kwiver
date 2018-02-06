
#ifndef VITAL_ALGO_EXPORT_H
#define VITAL_ALGO_EXPORT_H

#ifdef VITAL_ALGO_BUILD_AS_STATIC
#  define VITAL_ALGO_EXPORT
#  define VITAL_ALGO_NO_EXPORT
#else
#  ifndef VITAL_ALGO_EXPORT
#    ifdef vital_algo_EXPORTS
        /* We are building this library */
#      define VITAL_ALGO_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VITAL_ALGO_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VITAL_ALGO_NO_EXPORT
#    define VITAL_ALGO_NO_EXPORT 
#  endif
#endif

#ifndef VITAL_ALGO_DEPRECATED
#  define VITAL_ALGO_DEPRECATED __declspec(deprecated)
#endif

#ifndef VITAL_ALGO_DEPRECATED_EXPORT
#  define VITAL_ALGO_DEPRECATED_EXPORT VITAL_ALGO_EXPORT VITAL_ALGO_DEPRECATED
#endif

#ifndef VITAL_ALGO_DEPRECATED_NO_EXPORT
#  define VITAL_ALGO_DEPRECATED_NO_EXPORT VITAL_ALGO_NO_EXPORT VITAL_ALGO_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VITAL_ALGO_NO_DEPRECATED
#    define VITAL_ALGO_NO_DEPRECATED
#  endif
#endif

#endif
