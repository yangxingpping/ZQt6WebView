import QtQuick
import QtWebView

Window {
    width: 960
    height: 800
    visible: true
    title: qsTr("Hello World")
    WebView{
        anchors.fill: parent
        url: "file:///C:/Users/youngxp/Documents/occt/ZQt6WebView/html/home.html"
        //url: "https://www.baidu.com"
    }
}
