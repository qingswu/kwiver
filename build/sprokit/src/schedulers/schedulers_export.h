
#ifndef SCHEDULERS_EXPORT_H
#define SCHEDULERS_EXPORT_H

#ifdef SCHEDULERS_BUILD_AS_STATIC
#  define SCHEDULERS_EXPORT
#  define SCHEDULERS_NO_EXPORT
#else
#  ifndef SCHEDULERS_EXPORT
#    ifdef schedulers_EXPORTS
        /* We are building this library */
#      define SCHEDULERS_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define SCHEDULERS_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef SCHEDULERS_NO_EXPORT
#    define SCHEDULERS_NO_EXPORT 
#  endif
#endif

#ifndef SCHEDULERS_DEPRECATED
#  define SCHEDULERS_DEPRECATED __declspec(deprecated)
#endif

#ifndef SCHEDULERS_DEPRECATED_EXPORT
#  define SCHEDULERS_DEPRECATED_EXPORT SCHEDULERS_EXPORT SCHEDULERS_DEPRECATED
#endif

#ifndef SCHEDULERS_DEPRECATED_NO_EXPORT
#  define SCHEDULERS_DEPRECATED_NO_EXPORT SCHEDULERS_NO_EXPORT SCHEDULERS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SCHEDULERS_NO_DEPRECATED
#    define SCHEDULERS_NO_DEPRECATED
#  endif
#endif

#endif
