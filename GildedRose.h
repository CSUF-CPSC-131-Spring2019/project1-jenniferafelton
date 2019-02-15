#pragma once

#include <string>
#include <vector>
using std::string;

// This is already done for you...
class Item {
public:
    string name;
    int sellIn;
    int quality;
    Item(string, int, int);
};

Item::Item(string new_name, int new_sellIn, int new_quality)
: name(new_name), sellIn(new_sellIn), quality(new_quality) {
}


// This class is incomplete...(not anymore)
class GildedRose {
private:
std::vector <Item> inventory;

public:
    GildedRose(){
    }

    ~GildedRose(){
      std::cout<<"Thanks for Shopping at Gilded Rose!"<<std::endl;
      inventory.clear();
    }

    size_t size() const{ //get number of items for sale
      return inventory.size();
    }

    Item& get(size_t space){   //get item at specified location
        return inventory[space];
    }

    void add(const Item& thingForSale){  //add item for sale
    inventory.push_back(thingForSale);
    }

    Item& operator[](size_t space){ //get item at specific location
      return inventory[space];
    }
};
