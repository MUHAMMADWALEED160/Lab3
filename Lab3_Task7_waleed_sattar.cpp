#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size, key;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 1) {
        cout << "Invalid size. The array size should be at least 1." << endl;
        return 1;
    }

    vector<int> array(size);

    // Taking input for array elements
    cout << "Enter " << size << " integers: " << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    // Taking input for key to search
    cout << "Enter the key to search for: ";
    cin >> key;

    // Linear search
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (array[i] == key) {
            cout << "Key " << key << " found at position " << i+1 << "." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Key " << key << " not found in the array." << endl;
    }

    return 0;
}