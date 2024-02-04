#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

class Application {
public:
    int run() {
    int n;
    std::cin >> n;

    std::map<std::string, std::vector<std::string>> englishToLatin;

    for (int i = 0; i < n; i++) {
        std::string englishWord;
        std::cin >> englishWord;

        std::string line;
        std::getline(std::cin, line);

        std::vector<std::string> latinWords = parseLatinWords(line);

    for (const std::string& latinWord : latinWords) {
        englishToLatin[latinWord].push_back(englishWord);
}
}

    std::cout << englishToLatin.size() << std::endl;

    for (const auto& entry : englishToLatin) {
        std::cout << entry.first << " - ";

        std::vector<std::string> sortedEnglishWords = entry.second;
        std::sort(sortedEnglishWords.begin(), sortedEnglishWords.end());

    for (int i = 0; i < sortedEnglishWords.size(); i++) {
        std::cout << sortedEnglishWords[i];
    if (i < sortedEnglishWords.size() - 1) {
        std::cout << ", ";
}
}

std::cout << std::endl;
}

return 0;
}

private:
    std::vector<std::string> parseLatinWords(const std::string& line) {
    std::vector<std::string> latinWords;

    std::string latinWord;
    for (char c : line) {
        if (c == ' ' || c == ',' || c == '-') {
            if (!latinWord.empty()) {
                latinWords.push_back(latinWord);
                latinWord.clear();
}
}           else {
                latinWord += c;
}
}

        if (!latinWord.empty()) {
            latinWords.push_back(latinWord);
}

return latinWords;
}
};

int main() {
Application application;
return application.run();
}

