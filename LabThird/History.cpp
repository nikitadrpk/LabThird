#include "History.h"


void History::Push(const TextMemento& m) {
    stack_.push_back(m);
}

bool History::CanUndo() const {
    return !stack_.empty();
}

TextMemento History::Pop() {
    if (stack_.empty()) {
        throw std::runtime_error("Nothing to undo");
    }
    TextMemento m = stack_.back();
    stack_.pop_back();
    return m;
}
