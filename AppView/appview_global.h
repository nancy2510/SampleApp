#ifndef APPVIEW_GLOBAL_H
#define APPVIEW_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(APPVIEW_LIBRARY)
#  define APPVIEWSHARED_EXPORT Q_DECL_EXPORT
#else
#  define APPVIEWSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // APPVIEW_GLOBAL_H
