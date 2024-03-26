#include <iostream>
#include <vector>

using namespace std;

struct Injection {
    double dosage;
    int times;
    double singleDosage;
};

void generateCombinations(vector<Injection>& combinations) {
    double dosages[] = {0.8, 2, 3, 4, 5};
    int numDosages = sizeof(dosages) / sizeof(dosages[0]);
    int numTimes = 10;
    int maxTimes = 180;
    int increment = 10;

    for (int i = 0; i < numDosages; ++i) {
        for (int j = minTimes; j <= maxTimes; j += increment) {
            Injection injection;
            injection.dosage = dosages[i];
            injection.times = j;
            injection.singleDosage = dosages[i] / j;
            combinations.push_back(injection);
        }
    }
}

int main() {
    vector<Injection> combinations;
    generateCombinations(combinations);

    // 输出量组合和单剂量
    cout << "Combination\tSingle Dosage (ml)" << endl;
    for (int i = 0; i < combinations.size(); ++i) {
        cout << "Dosage: " << combinations[i].dosage << "ml, Times: " << combinations[i].times << "\t" << combinations[i].singleDosage << "ml" << endl;
    }

    return 0;
}
