#include <QWebEngineNotification>
#include <QWebEngineProfile>
#include <memory>

#include "notificationpresenter.h"

extern "C" {
void miqt_exec_notification_presenter(intptr_t callback, QWebEngineNotification* notification);
void miqt_release_notification_presenter(intptr_t callback);
}

namespace {
struct NotificationPresenter {
    explicit NotificationPresenter(intptr_t value) : callback(value) {}
    ~NotificationPresenter() { miqt_release_notification_presenter(callback); }
    intptr_t callback;
};
}

void QWebEngineProfile_setNotificationPresenter(QWebEngineProfile* self, intptr_t callback) {
    if (callback == 0) {
        self->setNotificationPresenter({});
        return;
    }

    // Use shared ownership to release the Go handle only after the last copy
    // of Qt's std::function and any active callback have finished using it.
    auto presenter = std::make_shared<NotificationPresenter>(callback);
    self->setNotificationPresenter([presenter](std::unique_ptr<QWebEngineNotification> notification) {
        auto keepAlive = presenter;
        // Transfer Qt's unique ownership to the Go recipient. The wrapper is
        // intentionally not finalized by Go: QObject deletion belongs on the
        // Qt thread, and callers may retain notifications after this callback.
        miqt_exec_notification_presenter(keepAlive->callback, notification.release());
    });
}
