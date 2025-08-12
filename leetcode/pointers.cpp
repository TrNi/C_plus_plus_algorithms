
#include <vector>
#include <iostream>
#include <string>

class newobject{
    private:;    

    public:
    int len = 0;
    std::string s = "abc";
    newobject(std::vector<int>& a, std::string s){
        this->len = a.size();
        this->s = s;
    }

    ~newobject(){        
        ;
    }
};


int main(){
    std::vector<int> p = {1,2,3};
    newobject obj(p,"bcd");
    
    std::cout<<obj.len<<obj.s<<std::endl;

    for (auto& elem:p){
        std::cout<<elem<<" ";
    }
    std::cout<<"\n";
    return 0;
}