# ATM Banking System (C Language Project)

## 📋 Project Description

This is a basic **ATM Banking System** developed in C using structures and console-based menus. The system simulates ATM functionalities such as:

- Viewing account details
- Withdrawing money
- Updating PIN
- Admin mode to view all customer data

This project is designed for educational purposes to demonstrate structure usage, file handling (optional), and console-based UI in C.

---

## 🧾 Features

1. **View Account Details**  
   Enter your PIN to check your account number, customer name, and balance.

2. **Withdraw Money**  
   Authenticate using your PIN, enter the amount, and it deducts if balance is sufficient.

3. **Change PIN**  
   Enter your old PIN and set a new one securely.

4. **Admin Panel**  
   Lists all customer accounts (for demo/admin access only).

5. **Exit**  
   Gracefully exits the program.

---

## 💾 Data Structure

Accounts are stored using a structure:

```c
struct Acc {
    char aName[20], aNo[5];
    long int aAmt;
    int aPin;
};
Preloaded with 16 customers.

📦 How to Run
🖥️ Requirements
Turbo C++ or any compiler that supports <conio.h> (like DOSBox for Turbo C++)

Windows DOS or DOSBox emulator

▶️ Run Instructions
Copy the code to a .c file (e.g., atm.c)

Compile and run using your compiler.

Use arrow keys (or menu number) to navigate.

Note: If using modern compilers like GCC, remove or replace gotoxy(), clrscr() and getch() functions.

🔧 Functions Used
Function	Purpose
myData()	Show personal account info
withdraw()	Withdraw money from account
update()	Change account PIN
showAll()	Admin function to list all users
main()	Menu-driven UI and program control

❗ Notes
gotoxy() and clrscr() are Turbo C-specific. Use libraries like ncurses.h for modern C terminals.

PINs and data are hardcoded — not safe for real-world use.

📃 Sample Output
markdown
Copy
Edit
ATM Banking System
------------------
| 1:Show Data    |
| 2:Withdraw     |
| 3:Change Pin   |
| 4:Admin        |
| 5:Exit         |
------------------
Enter your choice:
