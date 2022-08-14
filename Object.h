#ifndef OBJECT_H
#define OBJECT_H

#include "Console.h"
using namespace std;

class Object{
    private:
        Console screen;
    public:
        Object(Console screen);
        void HorizontalLine(int x, int y, int width, int character);
        void VerticalLine(int x, int y, int height, int character);
        void Button(int x, int y, int width, int height, int outlineColor, int textColor, string text);
};

#endif
