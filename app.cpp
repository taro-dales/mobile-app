// app.cpp
#include "app.h"

App::App() {
    // Initialization logic
}

void App::run() {
    // App execution logic
    user.login();
    dataHandler.loadData();
    uiManager.displayUI();
}
