#include <iostream>
#include <vector>
#include <string>

struct Product {
  std::string name;
  int quantity;
  int price;
};

void print_product_info(const std::vector<Product> &items){
  if (items.empty()){
      std::cout << "No products to display .." << '\n';
      return;
  }
  for(const Product& item : items){
    std::cout << item.name << " price is " << item.price <<  " only " << item.quantity << " available at the moment" << '\n';
  }
}
int main(){
  std::vector<Product> items;
  std::vector<Product> printers;
  Product printer_box = {"USB cable", 3, 12};
  Product comp_box = {"Desktop PC", 5, 2000};
  items.push_back(printer_box);
  items.push_back(comp_box);

  print_product_info(items);
  print_product_info(printers);
}
