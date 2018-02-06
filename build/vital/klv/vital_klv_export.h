
#ifndef VITAL_KLV_EXPORT_H
#define VITAL_KLV_EXPORT_H

#ifdef VITAL_KLV_BUILD_AS_STATIC
#  define VITAL_KLV_EXPORT
#  define VITAL_KLV_NO_EXPORT
#else
#  ifndef VITAL_KLV_EXPORT
#    ifdef vital_klv_EXPORTS
        /* We are building this library */
#      define VITAL_KLV_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VITAL_KLV_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VITAL_KLV_NO_EXPORT
#    define VITAL_KLV_NO_EXPORT 
#  endif
#endif

#ifndef VITAL_KLV_DEPRECATED
#  define VITAL_KLV_DEPRECATED __declspec(deprecated)
#endif

#ifndef VITAL_KLV_DEPRECATED_EXPORT
#  define VITAL_KLV_DEPRECATED_EXPORT VITAL_KLV_EXPORT VITAL_KLV_DEPRECATED
#endif

#ifndef VITAL_KLV_DEPRECATED_NO_EXPORT
#  define VITAL_KLV_DEPRECATED_NO_EXPORT VITAL_KLV_NO_EXPORT VITAL_KLV_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VITAL_KLV_NO_DEPRECATED
#    define VITAL_KLV_NO_DEPRECATED
#  endif
#endif

#endif
