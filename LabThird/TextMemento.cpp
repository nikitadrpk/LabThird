#include "TextMemento.h"

TextMemento::TextMemento(std::string state)
    : state_(std::move(state)) {}