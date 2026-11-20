// This hand-written binding handles std::function with a unique_ptr argument,
// which is not currently supported by the bindings generator.

package webengine

/*
#include "notificationpresenter.h"
*/
import "C"

import (
	"runtime"
	"runtime/cgo"
)

// SetNotificationPresenter sets the handler for web notifications in this profile.
// Passing nil clears the custom presenter. Call this method and notification methods
// on the Qt GUI thread:
//
//   - notification.Show when the notification is presented
//   - notification.Click when the user activates it
//   - notification.Close when it is dismissed
//   - notification.Delete when it is no longer needed
//
// The handler runs on the Qt GUI thread and takes ownership of the notification.
// It may retain the notification after returning. Do not use GoGC for it.
func (this *QWebEngineProfile) SetNotificationPresenter(presenter func(notification *QWebEngineNotification)) {
	defer runtime.KeepAlive(this)
	if presenter == nil {
		C.QWebEngineProfile_setNotificationPresenter(this.h, 0)
		return
	}
	handle := cgo.NewHandle(presenter)
	C.QWebEngineProfile_setNotificationPresenter(this.h, C.intptr_t(handle))
}

//export miqt_exec_notification_presenter
func miqt_exec_notification_presenter(callback C.intptr_t, notification *C.QWebEngineNotification) {
	presenter := cgo.Handle(callback).Value().(func(*QWebEngineNotification))
	presenter(newQWebEngineNotification(notification))
}

//export miqt_release_notification_presenter
func miqt_release_notification_presenter(callback C.intptr_t) {
	cgo.Handle(callback).Delete()
}
