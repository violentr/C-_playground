#include <vector>
#include <algorithm>
#include <iostream>


static std::vector<float> sort_desc(std::vector<float> &examScores) {
    std::sort(examScores.begin(),examScores.end(),[](float x, float y) {return x > y;});
    return examScores;
}

static float calculateAverageGrade(std::vector<float> &examScores){
    sort_desc(examScores);
    double sum = 0.0;
    bool has_bonus = false;
    for (auto i=examScores.begin();i!=examScores.begin()+3;++i) {
        const auto score = *i;
        sum += score;
        if (score > 90) {
            has_bonus = true;
        }
    }
    if (has_bonus) {
      sum *= 1.05f;
    }
    return sum/3.0f;
}

int main(){
  std::vector<float> vec{85.5, 92, 88, 79.5};
  std::cout << "Calculated average grade: " << calculateAverageGrade(vec);
}
