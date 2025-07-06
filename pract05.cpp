#include <iostream>
#include <conio.h> // Note: conio.h is not standard C++ and may not be available on all systems.  It's often used with older compilers like Turbo C++.  For modern C++, consider alternatives.

using namespace std;

int main() { // int main() is the standard, void main() is not.
    int a[20], b[3], i, j, flag = 0;

    //clrscr(); // clrscr() is from conio.h and not standard.  For cross-platform compatibility, you can use system("cls") on Windows, but it's generally better to avoid screen clearing in console applications.

    cout << "Enter elements in array A:" << endl;
    for (i = 0; i < 20; i++) {
        cout << "Enter element " << i + 1 << ": "; // Added index for clarity
        cin >> a[i];
    }

    cout << "Enter elements in array B:" << endl;
    for (i = 0; i < 3; i++) {
        cout << "Enter element " << i + 1 << ": "; // Added index for clarity
        cin >> b[i];
    }

    cout << endl << "Original array A:" << endl;
    for (i = 0; i < 20; i++) {
        cout << a[i] << " ";
    }

    cout << endl << "Original array B:" << endl;
    for (i = 0; i < 3; i++) {
        cout << b[i] << " ";
    }

    cout << endl << "Common elements are: ";
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i] == b[j]) {
                flag = 1;
                cout << a[i] << " ";
                break; // Add this to avoid printing the same element multiple times if it exists multiple times in b
            }
        }
    }

    if (flag == 0) {
        cout << "No common element";
    }
    return 0;
    //getch(); // getch() is from conio.h and not standard.  If you need to pause execution, use cin.get() but be aware of potential input buffer issues.  Or, if your environment supports it, you can leave it out.  Many modern IDEs/terminals will pause the output.
}
