#include <iostream>
#include <set>

class Application {
public:
    int run() {
    int arr[] = {4, 2, 1, 4, 3, 2, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::set<int> uniqueElements;

        for (int i = 0; i < n; i++) {
            uniqueElements.insert(arr[i]);
}

        for (auto element : uniqueElements) {
            std::cout << element << " ";
}

    return 0;
}
};

int main() {
Application application;
return application.run();
}
