// app.h
#pragma once

#include "user.h"
#include "data_handler.h"
#include "ui_manager.h"

class App {
public:
    App();
    void run();

private:
    User user;
    DataHandler dataHandler;
    UIManager uiManager;
};
