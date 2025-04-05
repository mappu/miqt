import QtQuick
import QtQuick.Controls
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true

    title: "Hello World"

    ListView {
        anchors.fill: parent
        model: myModel
        delegate: Row {
            spacing: 10
            Text { text: display }
        }
    }
}
