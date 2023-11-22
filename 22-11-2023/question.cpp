#include <iostream>
using namespace std;

class Fruit {
protected:
    int totalFruits;

public:
    Fruit() : totalFruits(0) {}

    void addFruit() {
        totalFruits ++;
    }

    int getTotalFruits(){
        return totalFruits;
    }
};

class Apples : public Fruit {
private:
    int applesCount;

public:
    Apples() : applesCount(0) {}

    void addApples() {
        applesCount ++;
        addFruit();
    }

    int getApplesCount() {
        return applesCount;
    }
};

class Mangoes : public Fruit {
private:
    int mangoesCount;

public:
    Mangoes() : mangoesCount(0) {}

    void addMangoes() {
        mangoesCount ++;
        addFruit();
    }

    int getMangoesCount() const {
        return mangoesCount;
    }
};

int main() {
    Apples applesBasket;
    applesBasket.addApples();

    Mangoes mangoesBasket;
    mangoesBasket.addMangoes();
    cout << "Number of Apples: " << applesBasket.getApplesCount() << endl;
    cout << "Number of Mangoes: " << mangoesBasket.getMangoesCount() << endl;
    cout << "Total Number of Fruits in the Basket: " << applesBasket.getTotalFruits() + mangoesBasket.getTotalFruits() << endl;

    return 0;
}

