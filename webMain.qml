import QtQuick
import QtWebView

Window {
    id: root
    width: 960
    height: 800
    visible: true
    title: qsTr("Hello World")
    color: "gray"
    property string homeUrl: ""
    WebView{
        anchors.centerIn: parent
        width: parent.width/2
        height: parent.height / 2
        url: root.homeUrl
        //url: "https://www.baidu.com"
        Component.onCompleted: {
            console.log("url=" + root.homeUrl)
        }
    }
}
