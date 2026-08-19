#include <iostream>
#include <string>
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

static void split_string(const string& full_name) {
    const size_t slash = full_name.find('/');
    string last_name = full_name.substr(0, slash);
    string name = full_name.substr(slash + 1);
    cout << "First name: " << name << " Last name: " << last_name << endl;
}

static void my_split_string(char* full_name){
    // Smith/John
    char* first_ptr;
    char* last_ptr;

    last_ptr = full_name;
    first_ptr = strchr(full_name, '/');
    if (first_ptr == nullptr) {
        cout << "Unable to find '/' character." << endl;
        exit(1);
    }
    *first_ptr = '\0';
    ++first_ptr;
    cout << "First name: " << first_ptr << " Last name: " << last_ptr << endl;

    cout << "Second time split string" << endl;
}

int main() {
    char full_name[100];
    cout << "Enter the full name: " << endl;
    cin.getline(full_name, sizeof(full_name));

    my_split_string(full_name);

    string full_name2;
    cout << "Enter your full name: " << endl;

    cin >> full_name2;
    split_string(full_name2);
}

