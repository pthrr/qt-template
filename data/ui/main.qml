import QtQuick 2.12
import QtQuick.Controls 2.12

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "QML and C++ Integration"

    Button {
        text: "Call C++ Function"
        anchors.centerIn: parent
        onClicked: backend.doSomething()
    }
}
