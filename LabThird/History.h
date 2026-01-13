#pragma once
#include <vector>
#include "TextMemory.h"
#include <stdexcept>

class History {
public:
    void Push(const TextMemento& m);
    bool CanUndo() const;
    TextMemento Pop();

private:
    std::vector<TextMemento> stack_;
};
