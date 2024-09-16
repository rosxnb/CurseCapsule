#pragma once
#include <CurseCapsule/definitions.hpp>
#include <ncurses.h>

CC_NAMESPACE_START

class Window
{
public:
    Window();
    ~Window();

    void addText(char const* txt) const;
    void addText(size_t r, size_t c, char const* txt) const;
    void holdOn(void) const;

private:

};

CC_NAMESPACE_STOP
