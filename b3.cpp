#include <iostream>
#include <set>
#include <queue>
#include <string>

class Application {
    public:
        int run() {
        int n;
        std::cin >> n;

        std::set<std::string> allLanguages;
        std::set<std::string> commonLanguages;
        std::queue<std::string> uniqueLanguages;

    for (int i = 0; i < n; i++) {
        int m;
        std::cin >> m;

        std::set<std::string> studentLanguages;

    for (int j = 0; j < m; j++) {
        std::string language;
        std::cin >> language;
        studentLanguages.insert(language);
        allLanguages.insert(language);
}

        if (i == 0) {
            commonLanguages = studentLanguages;
}
        else {
            std::set<std::string> temp;
    for (const std::string& lang : commonLanguages) {
        if (studentLanguages.find(lang) != studentLanguages.end()) {
            temp.insert(lang);
}
}
        commonLanguages = temp;
}

    for (const std::string& lang : studentLanguages) {
        uniqueLanguages.push(lang);
}
}

        std::cout << commonLanguages.size() << std::endl;
    for (const std::string& lang : commonLanguages) {
        std::cout << lang << std::endl;
}

        std::cout << uniqueLanguages.size() << std::endl;
    while (!uniqueLanguages.empty()) {
        std::cout << uniqueLanguages.front() << std::endl;
        uniqueLanguages.pop();
}

return 0;
}
};

int main() {
Application application;
return application.run();
}
