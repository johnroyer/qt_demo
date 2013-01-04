#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]){
   QApplication app(argc, argv);
   QPushButton button("Hello World");

   QObject::connect(&button, SIGNAL(clicked()), &app, SLOT(closeAllWindows()) );

   button.show();
   app.exec();
   return 0;
}
