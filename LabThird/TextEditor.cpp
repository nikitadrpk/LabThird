#include "TextEditor.h"
#include <utility>


void TextEditor::SetText(const std::string& text) {
    text_ = text;
}

void TextEditor::Append(const std::string& chunk) {
    text_ += chunk;
}

const std::string& TextEditor::GetText() const {
    return text_;
}

TextMemento TextEditor::Save() const {
    return TextMemento(text_);
}

void TextEditor::Restore(const TextMemento& memento) {
    text_ = memento.state_;
}
