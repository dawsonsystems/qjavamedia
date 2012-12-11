import QtQuick 1.1

Rectangle {
    width: 360
    height: 360
    Text {
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }
    MouseArea {
        anchors.fill: parent
        onClicked: {
            media.playUrl("http://sphotos-d.ak.fbcdn.net/hphotos-ak-snc6/375452_452301284825908_1508112461_n.jpg")

        }
    }
}
