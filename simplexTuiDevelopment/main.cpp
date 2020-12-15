#include "simplex-tui/simplex-tui.hpp"
#include "simplex-lib/simplex-lib.hpp"

using namespace simplex::tui;

int main()
{
    try
    {
        ScreenManager::addMouseSupport();
        Screen& scr = ScreenManager::createScreen(BackgroundColor::Blue);
        scr.clearScreen();

        Label& widget = (Label&)scr.addWidget(new Label{scr, 0,0, "Testing", ForegroundColor::Red, BackgroundColor::White});
        Pane& pane = (Pane&)scr.addWidget(new Pane{scr, "A Test", 5, 10, 1, 10, ForegroundColor::Yellow, BackgroundColor::Green});
        
        FunctionKeyBar& bar = (FunctionKeyBar&)scr.addWidget(new FunctionKeyBar{scr, BackgroundColor::White, ForegroundColor::Black, ForegroundColor::Yellow, BackgroundColor::Black});
        ScreenManager::generatePopup("Testing", "Testing", PopupButtonOptions::YesNo, ForegroundColor::Blue, ForegroundColor::Black, BackgroundColor::White);
        ScreenManager::runProgram();
        return EXIT_SUCCESS;
    }
    catch (simplex::Exception ex)
    {
        ScreenManager::generateCriticalError(ex.message);
        return EXIT_FAILURE;
    }
}