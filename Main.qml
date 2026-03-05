import QtQuick
import QtWebView

Window {
    width: 960
    height: 800
    visible: true
    title: qsTr("Hello World")
    WebView{
        x: -50
        y: -50
        width: parent.width+100
        height: parent.height+100
        url: "http://localhost:8000/candlestick-sh.html"
    }
}
