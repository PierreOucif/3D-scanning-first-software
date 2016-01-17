#include <QtGui>
#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QPixmap pm("C:/Users/Ilysse/Desktop/Computer Sciences/Langage C++/3D-scanning-first-software/open_image/1.jpg");
  QLabel lbl;
  lbl.setPixmap(pm);
  lbl.show();
  return app.exec();
}
