
#ifndef KWIVER_ALGO_OCV_PLUGIN_EXPORT_H
#define KWIVER_ALGO_OCV_PLUGIN_EXPORT_H

#ifdef KWIVER_ALGO_OCV_PLUGIN_BUILD_AS_STATIC
#  define KWIVER_ALGO_OCV_PLUGIN_EXPORT
#  define KWIVER_ALGO_OCV_PLUGIN_NO_EXPORT
#else
#  ifndef KWIVER_ALGO_OCV_PLUGIN_EXPORT
#    ifdef kwiver_algo_ocv_plugin_EXPORTS
        /* We are building this library */
#      define KWIVER_ALGO_OCV_PLUGIN_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define KWIVER_ALGO_OCV_PLUGIN_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef KWIVER_ALGO_OCV_PLUGIN_NO_EXPORT
#    define KWIVER_ALGO_OCV_PLUGIN_NO_EXPORT 
#  endif
#endif

#ifndef KWIVER_ALGO_OCV_PLUGIN_DEPRECATED
#  define KWIVER_ALGO_OCV_PLUGIN_DEPRECATED __declspec(deprecated)
#endif

#ifndef KWIVER_ALGO_OCV_PLUGIN_DEPRECATED_EXPORT
#  define KWIVER_ALGO_OCV_PLUGIN_DEPRECATED_EXPORT KWIVER_ALGO_OCV_PLUGIN_EXPORT KWIVER_ALGO_OCV_PLUGIN_DEPRECATED
#endif

#ifndef KWIVER_ALGO_OCV_PLUGIN_DEPRECATED_NO_EXPORT
#  define KWIVER_ALGO_OCV_PLUGIN_DEPRECATED_NO_EXPORT KWIVER_ALGO_OCV_PLUGIN_NO_EXPORT KWIVER_ALGO_OCV_PLUGIN_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KWIVER_ALGO_OCV_PLUGIN_NO_DEPRECATED
#    define KWIVER_ALGO_OCV_PLUGIN_NO_DEPRECATED
#  endif
#endif

#endif
