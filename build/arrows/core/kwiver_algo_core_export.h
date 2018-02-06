
#ifndef KWIVER_ALGO_CORE_EXPORT_H
#define KWIVER_ALGO_CORE_EXPORT_H

#ifdef KWIVER_ALGO_CORE_BUILD_AS_STATIC
#  define KWIVER_ALGO_CORE_EXPORT
#  define KWIVER_ALGO_CORE_NO_EXPORT
#else
#  ifndef KWIVER_ALGO_CORE_EXPORT
#    ifdef kwiver_algo_core_EXPORTS
        /* We are building this library */
#      define KWIVER_ALGO_CORE_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define KWIVER_ALGO_CORE_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef KWIVER_ALGO_CORE_NO_EXPORT
#    define KWIVER_ALGO_CORE_NO_EXPORT 
#  endif
#endif

#ifndef KWIVER_ALGO_CORE_DEPRECATED
#  define KWIVER_ALGO_CORE_DEPRECATED __declspec(deprecated)
#endif

#ifndef KWIVER_ALGO_CORE_DEPRECATED_EXPORT
#  define KWIVER_ALGO_CORE_DEPRECATED_EXPORT KWIVER_ALGO_CORE_EXPORT KWIVER_ALGO_CORE_DEPRECATED
#endif

#ifndef KWIVER_ALGO_CORE_DEPRECATED_NO_EXPORT
#  define KWIVER_ALGO_CORE_DEPRECATED_NO_EXPORT KWIVER_ALGO_CORE_NO_EXPORT KWIVER_ALGO_CORE_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KWIVER_ALGO_CORE_NO_DEPRECATED
#    define KWIVER_ALGO_CORE_NO_DEPRECATED
#  endif
#endif

#endif
