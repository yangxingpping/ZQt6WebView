import QtQuick
import QtWebView

Window {
    width: 960
    height: 800
    visible: true
    title: qsTr("Hello World")
    WebView{
        anchors.fill: parent
        url: "http://localhost:8000/line-simple.html"
    }
}
