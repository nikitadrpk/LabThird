#pragma once
#include <string>

class TextMemento {
private:
    std::string state_;
    
    explicit TextMemento(std::string state);

    friend class TextEditor;
};