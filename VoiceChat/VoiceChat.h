#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VoiceChat.h"

class VoiceChat : public QMainWindow
{
    Q_OBJECT

public:
    VoiceChat(QWidget *parent = nullptr);
    ~VoiceChat();

private:
    Ui::VoiceChatClass ui;
};
