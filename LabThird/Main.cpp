#include <iostream>
#include "TextEditor.h"
#include "History.h"

int main() {
    TextEditor editor;
    History history;

    editor.SetText("Hello");
    std::cout << editor.GetText() << "\n";

    history.Push(editor.Save());
    editor.Append(", world!");
    std::cout << editor.GetText() << "\n";

    history.Push(editor.Save());
    editor.SetText("New text");
    std::cout << editor.GetText() << "\n";

    if (history.CanUndo()) {
        editor.Restore(history.Pop());
        std::cout << "Undo: " << editor.GetText() << "\n";
    }

    if (history.CanUndo()) {
        editor.Restore(history.Pop());
        std::cout << "Undo: " << editor.GetText() << "\n";
    }

    return 0;
}
