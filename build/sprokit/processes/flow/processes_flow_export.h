
#ifndef PROCESSES_FLOW_EXPORT_H
#define PROCESSES_FLOW_EXPORT_H

#ifdef PROCESSES_FLOW_BUILD_AS_STATIC
#  define PROCESSES_FLOW_EXPORT
#  define PROCESSES_FLOW_NO_EXPORT
#else
#  ifndef PROCESSES_FLOW_EXPORT
#    ifdef processes_flow_EXPORTS
        /* We are building this library */
#      define PROCESSES_FLOW_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define PROCESSES_FLOW_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef PROCESSES_FLOW_NO_EXPORT
#    define PROCESSES_FLOW_NO_EXPORT 
#  endif
#endif

#ifndef PROCESSES_FLOW_DEPRECATED
#  define PROCESSES_FLOW_DEPRECATED __declspec(deprecated)
#endif

#ifndef PROCESSES_FLOW_DEPRECATED_EXPORT
#  define PROCESSES_FLOW_DEPRECATED_EXPORT PROCESSES_FLOW_EXPORT PROCESSES_FLOW_DEPRECATED
#endif

#ifndef PROCESSES_FLOW_DEPRECATED_NO_EXPORT
#  define PROCESSES_FLOW_DEPRECATED_NO_EXPORT PROCESSES_FLOW_NO_EXPORT PROCESSES_FLOW_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef PROCESSES_FLOW_NO_DEPRECATED
#    define PROCESSES_FLOW_NO_DEPRECATED
#  endif
#endif

#endif
