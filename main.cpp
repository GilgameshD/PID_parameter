#include "linechart.h"
#include <QtQuick/QQuickView>
#include <QGuiApplication>

int main(int argc, char *argv[])
{
     QGuiApplication app(argc, argv);

     // build a instance of the class LineChart and load the qml
    qmlRegisterType<LineChart>("LineCharts", 1, 0, "LineChart");

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl("qrc:/main.qml"));
    view.show();
    return app.exec();
}