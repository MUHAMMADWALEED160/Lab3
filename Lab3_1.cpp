#include<iostream>
using namespace std;

int main() {
    int choice = 0;
    char *pStudent[] = {"Muhammad Ahsan", "Kamran Ahmed", "Asad Sane", "Noor Khan", "Adeel Shahzad", "Umer Arif"};
    char *pStr = {"Your favourite student is"};
    
    cout << endl << "Enter a number between 1 to 6" <;
    cin >> choice;
    
    if (choice >= 1 && choice <= 6) {
        cout << pStr << " " << pStudent[choice - 1] << endl;
    }

    return 0;
}
