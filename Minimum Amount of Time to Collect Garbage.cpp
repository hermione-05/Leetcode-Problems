#include<iostream>
#include <vector>
#include <string>
using namespace std;

int garbageCollection(vector<string>& garbage, vector<int>& travel) {
    // Pick time
    int pickM = 0;
    int pickG = 0;
    int pickP = 0;
    // Travel time
    int travM = 0;
    int travG = 0;
    int travP = 0;
    // Last index
    int indM = -1;
    int indG = -1;
    int indP = -1;

    // Calculating pick time and last index
    for (int i = 0; i < garbage.size(); i++) {
        string garbage_box = garbage[i];
        for (auto j : garbage_box) {
            if (j == 'M') {
                pickM++;
                indM = i;
            }
            else if (j == 'G') {
                pickG++;
                indG = i;
            }
            else if (j == 'P') {
                pickP++;
                indP = i;
            }
        }
    }

    // Calculating travel time of each garbage truck
    for (int i = 0; i < indM; i++)
        travM += travel[i];

    for (int i = 0; i < indG; i++)
        travG += travel[i];

    for (int i = 0; i < indP; i++)
        travP += travel[i];

    int ans = (pickM + pickG + pickP) + (travM + travG + travP);
    return ans;
}

int main() {
    vector<string> garbage = {"G", "P", "GP", "GG"};
    vector<int> travel = {2, 4, 3};
    int result = garbageCollection(garbage, travel);
    cout << "Total time: " << result << " minutes" <<endl;
    return 0;
}
