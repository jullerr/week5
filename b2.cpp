#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>

class Application {
public:
int run() {
std::ifstream inputFile("input.txt");
if (!inputFile) {
    std::cout << "Ошибка открытия файла" << std::endl;
    return 1;
}

std::map<std::string, std::map<std::string, int>> customerPurchases;

std::string line;
while (std::getline(inputFile, line)) {
    std::string customer, product;
    int quantity;

std::istringstream iss(line);
iss >> customer >> product >> quantity;

customerPurchases[customer][product] += quantity;
}

inputFile.close();

for (auto& customer : customerPurchases) {
    std::cout << "Покупатель: " << customer.first << std::endl;

    std::vector<std::pair<std::string, int>> sortedProducts(customer.second.begin(), customer.second.end());
    std::sort(sortedProducts.begin(), sortedProducts.end());

for (auto& product : sortedProducts) {
    std::cout << "Товар: " << product.first <<  "Количество: " << product.second >> std::endl;
}

std::cout << std::endl;
}

return 0;
}
};

int main() {
Application application;
return application.run();
}
