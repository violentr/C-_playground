#include <iostream>
using namespace std;

char * strchr(char *string_ptr, char find) {
    while (*string_ptr != find) {
        if (*string_ptr == '\0') {
            return nullptr;
        }
        ++string_ptr;
    }
    return string_ptr;
}
int main() {
    // Smith/John
    char* first_ptr;
    char* last_ptr;
    char full_name[100];

    //Bohanovs/Deniss
    cout << "Enter the full name: " << endl;
    cin.getline(full_name, sizeof(full_name));
    last_ptr = full_name;
    first_ptr = strchr(full_name, '/');
    if (first_ptr == nullptr) {
        cout << "Unable to find '/' character." << endl;
        exit(1);
    }
    *first_ptr = '\0';
    ++first_ptr;
    cout << "First name: " << first_ptr << " Last name: " << last_ptr << endl;

}

