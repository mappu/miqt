#include "binding.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

PQApplication QApplication_new(int* argc, char** argv) {
    // QApplication takes these parameters byref, not by value
    return new QApplication(*argc, argv);
}

PQWidget QWidget_new() {
    return new QWidget();
}

void QWidget_show(PQWidget self) {
    static_cast<QWidget*>(self)->show();    
}

PQPushButton QPushButton_new(const char* label, PQWidget parent) {
    return new QPushButton(label, static_cast<QWidget*>(parent));
}

void QPushButton_show(PQPushButton self) {
    static_cast<QPushButton*>(self)->show();
}

void QPushButton_connect_pressed(PQPushButton self, void* cb) {
    QPushButton::connect(static_cast<QPushButton*>(self), &QPushButton::pressed, [=]() {
        miqt_exec_callback(cb, 0, nullptr);
    });
}

int QApplication_exec(PQApplication self) {
    return static_cast<QApplication*>(self)->exec();
}
