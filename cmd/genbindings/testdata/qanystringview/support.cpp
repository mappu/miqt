#include "support.h"
#include <QAnyStringView>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QVariant>

bool test_qt_consumers(void* view, const char* name, size_t len, const char* filename) {
    const auto str = *static_cast<QAnyStringView*>(view);
    const QString expected = QString::fromUtf8(name, static_cast<qsizetype>(len));
    QObject object;
    object.setObjectName(str);
    if (object.objectName() != expected) return false;
    const QString file = QString::fromUtf8(filename);
    {
        QSettings settings(file, QSettings::IniFormat);
        settings.setValue(str, QStringLiteral("persisted"));
        if (!settings.contains(str) || settings.value(str).toString() != QStringLiteral("persisted")) return false;
        settings.sync();
        if (settings.status() != QSettings::NoError) return false;
    }
    QSettings reopened(file, QSettings::IniFormat);
    if (reopened.value(str).toString() != QStringLiteral("persisted")) return false;
    reopened.remove(str);
    return !reopened.contains(str);
}

void* test_external_view() {
    static const QString data = QStringLiteral("native");
    return new QAnyStringView(data);
}

#include <QApplication>
#include <QKeyEvent>
#include <QPushButton>

bool test_native_keyboard(void* view, const char* name, size_t len, const char* filename) {
    int argc = 1;
    char arg[] = "miqt-stringview-smoke";
    char* argv[] = {arg, nullptr};
    QApplication application(argc, argv);
    const auto str = *static_cast<QAnyStringView*>(view);
    const QString expected = QString::fromUtf8(name, static_cast<qsizetype>(len));
    QSettings settings(QString::fromUtf8(filename), QSettings::IniFormat);
    QPushButton button(QStringLiteral("Save settings"));
    button.setObjectName(str);
    int clicks = 0;
    QObject::connect(&button, &QPushButton::clicked, [&]() {
        ++clicks;
        settings.setValue(str, button.objectName());
    });
    button.show();
    button.setFocus();
    application.processEvents();
    QKeyEvent press(QEvent::KeyPress, Qt::Key_Space, Qt::NoModifier);
    QKeyEvent release(QEvent::KeyRelease, Qt::Key_Space, Qt::NoModifier);
    QApplication::sendEvent(&button, &press);
    QApplication::sendEvent(&button, &release);
    application.processEvents();
    settings.sync();
    return QApplication::platformName() == QStringLiteral("xcb") && clicks == 1 && !button.isDown() && !QApplication::activeModalWidget()
        && button.objectName() == expected && settings.allKeys() == QStringList{expected}
        && settings.value(str).toString() == expected && settings.status() == QSettings::NoError;
}

void* test_external_latin1_view() {
    static const char data[] = {char(0xe9), 0, 'Z'};
    return new QAnyStringView(QLatin1StringView(data, 3));
}
