
#ifndef VITAL_VPM_EXPORT_H
#define VITAL_VPM_EXPORT_H

#ifdef VITAL_VPM_BUILD_AS_STATIC
#  define VITAL_VPM_EXPORT
#  define VITAL_VPM_NO_EXPORT
#else
#  ifndef VITAL_VPM_EXPORT
#    ifdef vital_vpm_EXPORTS
        /* We are building this library */
#      define VITAL_VPM_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VITAL_VPM_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VITAL_VPM_NO_EXPORT
#    define VITAL_VPM_NO_EXPORT 
#  endif
#endif

#ifndef VITAL_VPM_DEPRECATED
#  define VITAL_VPM_DEPRECATED __declspec(deprecated)
#endif

#ifndef VITAL_VPM_DEPRECATED_EXPORT
#  define VITAL_VPM_DEPRECATED_EXPORT VITAL_VPM_EXPORT VITAL_VPM_DEPRECATED
#endif

#ifndef VITAL_VPM_DEPRECATED_NO_EXPORT
#  define VITAL_VPM_DEPRECATED_NO_EXPORT VITAL_VPM_NO_EXPORT VITAL_VPM_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VITAL_VPM_NO_DEPRECATED
#    define VITAL_VPM_NO_DEPRECATED
#  endif
#endif

#endif
