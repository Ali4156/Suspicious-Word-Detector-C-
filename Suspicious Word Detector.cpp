#include <iostream>
#include <string>

using namespace std;

int main() {

    string text;

    cout << "Enter message or text: ";
    getline(cin, text);

    string suspiciousWords[] = { "hack", "attack", "password", "free", "win", "urgent" };

    bool suspicious = false;

    for (int i = 0; i < 6; i++) {
        if (text.find(suspiciousWords[i]) != string::npos) {
            suspicious = true;
            cout << "Suspicious word detected: " << suspiciousWords[i] << endl;
        }
    }

    if (suspicious)
        cout << "\n⚠ Warning: This message may be suspicious or phishing.\n";
    else
        cout << "\nMessage looks safe.\n";

    return 0;
}