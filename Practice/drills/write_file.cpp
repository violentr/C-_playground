#include <iostream>
#include <fstream>

class Logger{
  private:
    std::ofstream file;

  public:
    Logger(const std::string& file_name){
      file.open(file_name);
      if (!file)
        throw std::runtime_error("Could not open file");
    }
    void log(const std::string &text){
      file << text << '\n';
    }
    ~Logger(){
      if (file.is_open())
        file.close();
    }
};

int main() {
    try{
      Logger logger("log.txt");
      logger.log("This is test log entry");
    }catch(std::exception& e){
      std::cerr << "Error: " << e.what() << '\n';
    }
    return 0;
}
