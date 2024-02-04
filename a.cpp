#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

class Application {
public:
    int run() {
        list<int> nums;
    int input;
        cout << "Введите числа (для завершения введите * ):\n";
    while (cin >> input) {
        nums.push_back(input);
    if (input == '*' ) {
        break;
}
}

    vector<vector<int>> result = perms(nums);

    cout << "Все возможные перестановки:\n";
    for (const auto& permutation : result) {
    for (int num : permutation) {
        cout << num << " ";
}
    cout << endl;
}

return 0;
}

private:
    vector<vector<int>> perms(const list<int>& nums) {
    vector<int> original;
    for (int num : nums) {
        original.push_back(num);
}

    vector<vector<int>> result;
    do {
        result.push_back(original);
}   while (next_permutation(original.begin(), original.end()));

return result;
}
};

int main() {
Application application;
return application.run();
}
