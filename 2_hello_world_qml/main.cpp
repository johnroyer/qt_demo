#include <QApplication>
#include <QDeclarativeView>

int main(int arvc, char *argv[]){
   QApplication app(arvc, argv);

   QDeclarativeView *view = new QDeclarativeView();
   view->setSource(QUrl::fromLocalFile("window.qml"));
   view->show();

   return app.exec();
}
