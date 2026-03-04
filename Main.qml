import QtQuick
import QtWebView

Window {
    width: 960
    height: 800
    visible: true
    title: qsTr("Hello World")
    WebView{
        anchors.fill: parent
        url: "https://www.baidu.com"
    }
}
