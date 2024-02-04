#include <iostream>
#include <list>

class Application {
public:
    int maxProfit(std::list<int>& prices) {
    int maxProfit = 0;
    int minPrice = 0;

    for (int price : prices) {
        minPrice = std::min(minPrice, price);
        maxProfit = std::max(maxProfit, price - minPrice);
}

    return maxProfit;
}

        void printPrices(std::list<int>& prices) {
            std::cout << "Ввод: ";
            for (int price : prices) {
                std::cout << price << " ";
}
        std::cout << std::endl;
}

};

int main() {
Application application;
std::list<int> prices = {7, 1, 5, 3, 6, 4};
application.printPrices(prices);
int profit = application.maxProfit(prices);
std::cout << "Вывод: " << profit << std::endl;

return 0;
}
