#include <iostream>
#include <string>
using namespace std;

int main() {
    // ─── Credentials ───────────────────────────────────────────────
    string correctUser = "admin";
    string correctPass = "1234";

    // ─── Student & Course Storage ───────────────────────────────────
    string studentNames[3];
    int    studentAges[3];
    int    studentCount = 0;

    string courses[3];
    int    courseCount = 0;

    // ═══════════════════════════════════════════════════════════════
    //  LOGIN  (3 attempts)
    // ═══════════════════════════════════════════════════════════════
    string username, password;
    bool loggedIn = false;

    for (int attempt = 1; attempt <= 3; attempt++) {
        cout << "\n╔══════════════════════════════╗\n";
        cout <<   "║   University Login System    ║\n";
        cout <<   "╚══════════════════════════════╝\n";
        cout << "Attempt " << attempt << " of 3\n";
        cout << "Username: ";
        cin  >> username;
        cout << "Password: ";
        cin  >> password;

        if (username == correctUser && password == correctPass) {
            loggedIn = true;
            cout << "\n✔ Login successful! Welcome, " << username << ".\n";
            break;
        } else {
            cout << "✘ Invalid credentials.";
            if (attempt < 3)
                cout << " Please try again.";
        }
    }

    if (!loggedIn) {
        cout << "\n\n Access denied. Too many failed attempts. Exiting...\n";
        return 0;
    }

    // ═══════════════════════════════════════════════════════════════
    //  MAIN MENU
    // ═══════════════════════════════════════════════════════════════
    int choice;

    do {
        cout << "\n╔══════════════════════════════╗\n";
        cout <<   "║  University Management Menu  ║\n";
        cout <<   "╠══════════════════════════════╣\n";
        cout <<   "║  1 → Add Student             ║\n";
        cout <<   "║  2 → View Students           ║\n";
        cout <<   "║  3 → Add Course              ║\n";
        cout <<   "║  4 → View Courses            ║\n";
        cout <<   "║  5 → Exit                    ║\n";
        cout <<   "╚══════════════════════════════╝\n";
        cout << "Enter choice: ";
        cin  >> choice;

        // ── 1. Add Student ─────────────────────────────────────────
        if (choice == 1) {
            if (studentCount >= 3) {
                cout << "✘ Student list is full (max 3).\n";
            } else {
                cout << "\n── Add Student ──\n";
                cout << "Enter student name: ";
                cin  >> ws;
                getline(cin, studentNames[studentCount]);
                cout << "Enter student age:  ";
                cin  >> studentAges[studentCount];

                if (studentAges[studentCount] >= 16 && studentAges[studentCount] <= 80) {
                    studentCount++;
                    cout << "✔ Student added successfully!\n";
                } else {
                    cout << "✘ Invalid age. Must be between 16 and 80.\n";
                }
            }

        // ── 2. View Students ───────────────────────────────────────
        } else if (choice == 2) {
            cout << "\n── Student List ──\n";
            if (studentCount == 0) {
                cout << "  No students added yet.\n";
            } else {
                for (int i = 0; i < studentCount; i++) {
                    cout << "  [" << i + 1 << "] "
                         << studentNames[i]
                         << "  |  Age: " << studentAges[i] << "\n";
                }
            }

        // ── 3. Add Course ──────────────────────────────────────────
        } else if (choice == 3) {
            if (courseCount >= 3) {
                cout << "✘ Course list is full (max 3).\n";
            } else {
                cout << "\n── Add Course ──\n";
                cout << "Enter course name: ";
                cin  >> ws;
                getline(cin, courses[courseCount]);

                if (!courses[courseCount].empty()) {
                    courseCount++;
                    cout << "✔ Course added successfully!\n";
                } else {
                    cout << "✘ Course name cannot be empty.\n";
                }
            }

        // ── 4. View Courses ────────────────────────────────────────
        } else if (choice == 4) {
            cout << "\n── Course List ──\n";
            if (courseCount == 0) {
                cout << "  No courses added yet.\n";
            } else {
                for (int i = 0; i < courseCount; i++) {
                    cout << "  [" << i + 1 << "] " << courses[i] << "\n";
                }
            }

        // ── 5. Exit ────────────────────────────────────────────────
        } else if (choice == 5) {
            cout << "\n Goodbye! Exiting system...\n";

        } else {
            cout << "✘ Invalid option. Please enter 1–5.\n";
        }

    } while (choice != 5);

    return 0;}