#include <iostream>
#include <vector>
#include <cstdint>

class Image{

    public: 
    size_t height = 0;
    size_t width = 0;
    std::vector<std::vector<uint8_t>> img;
    Image(int h, int w, uint8_t initial_value = 0){
        img.resize(h, std::vector<uint8_t>(w, initial_value));
        this->height = h;
        this->width = w;
    }
    int full_size(){
        return this->height * this->width; 
    }

};


int main() {
    Image img(5,5,10);
    int sz = img.full_size();
    for (auto& row:img.img){
        for (auto& px:row){
            std::cout<< (int)px <<" ";
        }   
        std::cout<< "\n";
     }
}

