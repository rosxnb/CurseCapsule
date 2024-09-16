#include <CurseCapsule/hello.hpp>
#include <CurseCapsule/window.hpp>

void CurseCapsule::sayMyName()
{
    Window mywin;
    mywin.addText("Library Name: ");
    mywin.addText(1, 15, "CurseCapsule: C++ wrapper around ncurses library.");
    mywin.holdOn();

    return ;
}
