#include <fstream>
#include <iostream>
#include <regex>
#include <string>

using namespace std;

/* Restate the problem in steps
 *
 * Read standalone file
 * Look up for the WARN pattern
 *   When found extract ip address
 *   Add ip address to the list
 * When search is completed
 * Output label data collected for WARN

 *
 */

void print(int id, std::string::size_type n, std::string const &s) {
    std::cout << id << ") ";
    if (std::string::npos == n)
        std::cout << "not found! n == npos\n";
    else
        std::cout << "found @ n = " << n << ", substr(" << n << ") = "
                << std::quoted(s.substr(n)) << '\n';
}

static void extractIP(string str) {
    regex pattern(
        R"((\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}))");
    for (regex_iterator it(
             str.begin(), str.end(), pattern);
         it != regex_iterator<string::iterator>(); ++it) {
        cout << it->str() << endl;
    }
}

int main() {
    ifstream inputFile("log.txt");
    string line;
    string msg = "File is ";
    string fileState = inputFile.is_open() ? (msg + "open") : msg + "closed";
    cout << fileState << endl;
    while (getline(inputFile, line)) {
        if (line.find("WARN") == 0) {
            // cout << std::quoted(line.substr(0));
            string warn = "WARN";
            string substr = warn.substr(0);
            cout << "Found: " << substr << endl;
            extractIP(line);

            // print(0, 0, "WARN");
            //cout << line << endl;
        }
    }

    inputFile.close();
    cout << "PRogram finished" << endl;
    cout << "CWD: " << filesystem::current_path() << endl;
    return 0;
}
