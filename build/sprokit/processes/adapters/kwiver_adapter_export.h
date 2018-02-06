
#ifndef KWIVER_ADAPTER_EXPORT_H
#define KWIVER_ADAPTER_EXPORT_H

#ifdef KWIVER_ADAPTER_BUILD_AS_STATIC
#  define KWIVER_ADAPTER_EXPORT
#  define KWIVER_ADAPTER_NO_EXPORT
#else
#  ifndef KWIVER_ADAPTER_EXPORT
#    ifdef kwiver_adapter_EXPORTS
        /* We are building this library */
#      define KWIVER_ADAPTER_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define KWIVER_ADAPTER_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef KWIVER_ADAPTER_NO_EXPORT
#    define KWIVER_ADAPTER_NO_EXPORT 
#  endif
#endif

#ifndef KWIVER_ADAPTER_DEPRECATED
#  define KWIVER_ADAPTER_DEPRECATED __declspec(deprecated)
#endif

#ifndef KWIVER_ADAPTER_DEPRECATED_EXPORT
#  define KWIVER_ADAPTER_DEPRECATED_EXPORT KWIVER_ADAPTER_EXPORT KWIVER_ADAPTER_DEPRECATED
#endif

#ifndef KWIVER_ADAPTER_DEPRECATED_NO_EXPORT
#  define KWIVER_ADAPTER_DEPRECATED_NO_EXPORT KWIVER_ADAPTER_NO_EXPORT KWIVER_ADAPTER_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KWIVER_ADAPTER_NO_DEPRECATED
#    define KWIVER_ADAPTER_NO_DEPRECATED
#  endif
#endif

#endif
