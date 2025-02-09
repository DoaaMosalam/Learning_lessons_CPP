//
// Created by DoaaM on 2/9/2025.
//

#ifndef ESCAPE_SEQUENCES_CHARACTERS_H
#define ESCAPE_SEQUENCES_CHARACTERS_H

using namespace std;

class Escape_Sequences_Characters {
public:
    void  escape_characters() {
        // Escape Sequences Characters
        cout << "Hello\nWorld" << endl; // new line
        cout << "Hello\tWorld" << endl; // tab
        cout << "Hello\tWorld" << endl; //
        cout << "Hello\bWorld" << endl; // backspace
        cout << "Hello\rWorld" << endl; // carriage return
        cout << "Hello\fWorld" << endl;  // form feed
        cout << "Hello\aWorld" << endl; // alert
        cout << "Hello\\World" << endl; // backslash
        cout << "Hello\'World" << endl; // single quote
        cout << "Hello\"World" << endl; // double quote
        cout << "Hello\?World" << endl;  //  question mark
        cout << "Hello\0World" << endl; // null
    }


};



#endif //ESCAPE_SEQUENCES_CHARACTERS_H
