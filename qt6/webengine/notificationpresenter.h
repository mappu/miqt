#pragma once

#include "gen_qwebengineprofile.h"
#include "gen_qwebenginenotification.h"

#ifdef __cplusplus
extern "C" {
#endif

void QWebEngineProfile_setNotificationPresenter(QWebEngineProfile* self, intptr_t callback);

#ifdef __cplusplus
}
#endif
