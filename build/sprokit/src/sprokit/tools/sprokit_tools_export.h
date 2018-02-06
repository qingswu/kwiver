
#ifndef SPROKIT_TOOLS_EXPORT_H
#define SPROKIT_TOOLS_EXPORT_H

#ifdef SPROKIT_TOOLS_BUILD_AS_STATIC
#  define SPROKIT_TOOLS_EXPORT
#  define SPROKIT_TOOLS_NO_EXPORT
#else
#  ifndef SPROKIT_TOOLS_EXPORT
#    ifdef sprokit_tools_EXPORTS
        /* We are building this library */
#      define SPROKIT_TOOLS_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define SPROKIT_TOOLS_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef SPROKIT_TOOLS_NO_EXPORT
#    define SPROKIT_TOOLS_NO_EXPORT 
#  endif
#endif

#ifndef SPROKIT_TOOLS_DEPRECATED
#  define SPROKIT_TOOLS_DEPRECATED __declspec(deprecated)
#endif

#ifndef SPROKIT_TOOLS_DEPRECATED_EXPORT
#  define SPROKIT_TOOLS_DEPRECATED_EXPORT SPROKIT_TOOLS_EXPORT SPROKIT_TOOLS_DEPRECATED
#endif

#ifndef SPROKIT_TOOLS_DEPRECATED_NO_EXPORT
#  define SPROKIT_TOOLS_DEPRECATED_NO_EXPORT SPROKIT_TOOLS_NO_EXPORT SPROKIT_TOOLS_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef SPROKIT_TOOLS_NO_DEPRECATED
#    define SPROKIT_TOOLS_NO_DEPRECATED
#  endif
#endif

#endif
