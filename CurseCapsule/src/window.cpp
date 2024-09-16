#include <CurseCapsule/window.hpp>

CurseCapsule::Window::Window()
{
    initscr();
}

void CurseCapsule::Window::addText(char const* txt) const
{
    addstr(txt);
}

void CurseCapsule::Window::addText(size_t r, size_t c, char const* txt) const
{
    mvaddstr(r, c, txt);
}

void CurseCapsule::Window::holdOn(void) const
{
    getch();
}

CurseCapsule::Window::~Window()
{
    endwin();
}
