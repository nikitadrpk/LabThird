#pragma once
#include <string>
#include "TextMemento.h"

class TextEditor {
public:
    void SetText(const std::string& text);
    void Append(const std::string& chunk);
    const std::string& GetText() const;

    TextMemento Save() const;
    void Restore(const TextMemento& memento);

private:
    std::string text_;
};
