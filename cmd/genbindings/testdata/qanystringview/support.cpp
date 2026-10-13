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

void* test_external_latin1_view() {
    static const char data[] = {char(0xe9), 0, 'Z'};
    return new QAnyStringView(QLatin1StringView(data, 3));
}
