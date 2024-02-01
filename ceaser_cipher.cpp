
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char PT[50];
    int key=12;
    int i;
    char enc[50];
    char ch;

    // Input plain text and key
    cout << "Enter the plain text: \n";
    cin.getline(PT, 50);

    cout << "Original message " << PT << endl;

    for (i = 0; PT[i] != '\0'; i++) {
        if (PT[i] != ' ')
        {
            ch = PT[i] + key;

            if (PT[i] >= 'a' && PT[i] <= 'z') {
                if (ch > 'z') {
                    ch = ch - 'z' + 'a' - 1;
                }
            }
            else if (PT[i] >= 'A' && PT[i] <= 'Z') {
                if (ch > 'Z') {
                    ch = ch - 'Z' + 'A' - 1;
                }
            }
            enc[i] = ch;
        } else {
            enc[i] = ' ';
        }
    }

    enc[i] = '\0';

    cout << endl;
    cout << "Encryption using caesar cipher is: " << enc << endl;

    return 0;
}
