#include<QtGui/QApplication>
#include<QTGui/QPushButton>

int main(int argc, char *argv[]){
    QApplication application(argc, argv);
    QPushButton button("Hello World");
    button.show();
    return application.exec();

}
