#include <iostream>
#include <map>
#include <string>
#include <cctype>

static const std::map<std::string, std::string> months{
    {"jan", "January"},  {"feb", "February"}, {"mar", "March"},
    {"apr", "April"},    {"may", "May"},      {"jun", "June"},
    {"jul", "July"},     {"aug", "August"},   {"sep", "September"},
    {"oct", "October"},  {"nov", "November"}, {"dec", "December"}
};

const std::string* month_from_abbrev(const std::string &abbrev){
    auto it = months.find(abbrev);
    return (it != months.end()) ? &it->second: nullptr;
}

char to_lowercase(char &c)
{
    return std::tolower(static_cast<unsigned int>(c));
}

void string_to_lowercase(std::string &str){
   std::transform(str.begin(), str.end(), str.begin(), to_lowercase);
}

int main(){
   std::string month;
   std::cout << "Enter month abbreviation: ";
   std::cin >> month;
   string_to_lowercase(month);

   const std::string *result = month_from_abbrev(month);
   if (result){
     std::cout << *result << '\n';
   }else{
     std::cout << "Error: no such month\n" << '\n';
   }
}



