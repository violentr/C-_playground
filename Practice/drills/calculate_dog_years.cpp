#include <iostream>

/* calculate dog years
 * on average the first dog year is equal to 15 human years, the second dog year
 * is equal to 9 human years, from the third to the sixth each is equal 4 human
 * years and every next year after that is equal to 5 human years */

int calculate_dog_years(int a1) {
    int age{0};

    for(int i=1;i<=a1;i++){
        if (i == 1){
            age = 15;
        }else if (i == 2){
            age += 9;
        }else if (i >= 3 && i <= 6) {
            age += 4;
        }else{
            age += 5;
        }
    }
    return age;
}

int main(){
  int dog_years = 68;
  std::cout << "Dog years " << dog_years << " equal to " << calculate_dog_years(dog_years) << " human years";
  return 0;
}
