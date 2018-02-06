
#ifndef VITAL_CONFIG_EXPORT_H
#define VITAL_CONFIG_EXPORT_H

#ifdef VITAL_CONFIG_BUILD_AS_STATIC
#  define VITAL_CONFIG_EXPORT
#  define VITAL_CONFIG_NO_EXPORT
#else
#  ifndef VITAL_CONFIG_EXPORT
#    ifdef vital_config_EXPORTS
        /* We are building this library */
#      define VITAL_CONFIG_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VITAL_CONFIG_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VITAL_CONFIG_NO_EXPORT
#    define VITAL_CONFIG_NO_EXPORT 
#  endif
#endif

#ifndef VITAL_CONFIG_DEPRECATED
#  define VITAL_CONFIG_DEPRECATED __declspec(deprecated)
#endif

#ifndef VITAL_CONFIG_DEPRECATED_EXPORT
#  define VITAL_CONFIG_DEPRECATED_EXPORT VITAL_CONFIG_EXPORT VITAL_CONFIG_DEPRECATED
#endif

#ifndef VITAL_CONFIG_DEPRECATED_NO_EXPORT
#  define VITAL_CONFIG_DEPRECATED_NO_EXPORT VITAL_CONFIG_NO_EXPORT VITAL_CONFIG_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VITAL_CONFIG_NO_DEPRECATED
#    define VITAL_CONFIG_NO_DEPRECATED
#  endif
#endif

#endif
