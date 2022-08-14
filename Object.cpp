#include "Object.h"

Object::Object(Console screen){
    this->screen = screen;
}

void Object::HorizontalLine(int x, int y, int width, int character){
    this->screen.GoTo(x, y);
    for (int x0 = x; x0 - x <= width; x0++){
        cout << char(character);
    }
}

void Object::VerticalLine(int x, int y, int height, int character){
    for (int y0 = y; y0 - y <= height; y0++){
        this->screen.GoTo(x, y0);
        cout << char(character);
    }
}

void Object::Button(int x, int y, int width, int height, int outlineColor, int textColor, string text){
    //Draw Outline
    this->screen.SetColor(this->screen.color.Black, outlineColor);
    HorizontalLine(x, y, width, 223);
    HorizontalLine(x, y + height, width, 220);
    VerticalLine(x, y, height, 219);
    VerticalLine(x + width, y, height, 219);

    //Write text
    this->screen.SetColor(this->screen.color.Black, textColor);
    this->screen.GoTo(x + width / 2 - text.length() / 2 + 1, height / 2 + y);
    cout << text;
}