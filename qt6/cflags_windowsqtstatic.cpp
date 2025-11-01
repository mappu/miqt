#ifdef MIQT_WINDOWSQTSTATIC

#include <QtPlugin>
Q_IMPORT_PLUGIN (QWindowsIntegrationPlugin);

#if QT_VERSION >= QT_VERSION_CHECK(6, 7, 0)
  Q_IMPORT_PLUGIN (QModernWindowsStylePlugin);
#else
  Q_IMPORT_PLUGIN (QWindowsVistaStylePlugin);
#endif

#endif
