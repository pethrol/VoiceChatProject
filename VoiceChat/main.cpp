#include "VoiceChat.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VoiceChat w;
    w.show();
    return a.exec();
}
