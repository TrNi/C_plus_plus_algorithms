#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>


std::vector<int> twosum(std::vector<int> ls, int sum) {
    std::vector<int> sumvec;
    std::unordered_map<int,int> umap;
    umap[3] = {5};
    
    for (size_t i=0; i< ls.size(); ++i) {              
                
        if (umap.find(sum-ls[i]) != umap.end()) {
            sumvec.push_back(umap[sum-ls[i]]);
            sumvec.push_back(i);
            break;
        }

        umap[ls[i]] = (int)i;
    }

    return sumvec;
}



int main() {
    std::vector<int> ls = {-3,4,2,3,2,4,1,0};
    int sum = -2;
    std::vector<int> sumvec = twosum(ls, sum);
    
    for (size_t i=0; i<sumvec.size(); ++i) {
        std::cout << sumvec[i] << " ";
    }
    std::cout<<std::endl;
    return 0;
}