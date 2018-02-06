
#ifndef VITAL_LOGGER_EXPORT_H
#define VITAL_LOGGER_EXPORT_H

#ifdef VITAL_LOGGER_BUILD_AS_STATIC
#  define VITAL_LOGGER_EXPORT
#  define VITAL_LOGGER_NO_EXPORT
#else
#  ifndef VITAL_LOGGER_EXPORT
#    ifdef vital_logger_EXPORTS
        /* We are building this library */
#      define VITAL_LOGGER_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VITAL_LOGGER_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VITAL_LOGGER_NO_EXPORT
#    define VITAL_LOGGER_NO_EXPORT 
#  endif
#endif

#ifndef VITAL_LOGGER_DEPRECATED
#  define VITAL_LOGGER_DEPRECATED __declspec(deprecated)
#endif

#ifndef VITAL_LOGGER_DEPRECATED_EXPORT
#  define VITAL_LOGGER_DEPRECATED_EXPORT VITAL_LOGGER_EXPORT VITAL_LOGGER_DEPRECATED
#endif

#ifndef VITAL_LOGGER_DEPRECATED_NO_EXPORT
#  define VITAL_LOGGER_DEPRECATED_NO_EXPORT VITAL_LOGGER_NO_EXPORT VITAL_LOGGER_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VITAL_LOGGER_NO_DEPRECATED
#    define VITAL_LOGGER_NO_DEPRECATED
#  endif
#endif

#endif
