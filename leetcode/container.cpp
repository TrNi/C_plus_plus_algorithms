#include <vector>
#include <algorithm>
#include <iostream>

int storage(std::vector<int> ls) {
    int op = 0;

    if (ls.size()==0) {return 0;}

    int l = 0; int r = ls.size() - 1;
    op = std::min(ls[l],ls[r]) * (r-l);
    int maxl = ls[l]; 
    int maxr = ls[r]; 
    while (l<r) {
        if (ls[l]<=maxr) {
            l+=1;
            maxl = std::max(maxl, ls[l]);
        }
        else if (ls[r]<=maxl) {
            r-=1;
            maxr = std::max(maxr, ls[r]);
        }
        

        int s = std::min(maxl,maxr) * (r-l);
        if (s>op) {
            op = s;
        }
    }

    return op;
}


int main() {

    std::vector<int> a = {1,8,6,2,5,4,8,3,7};

    int op = storage(a);

    std::cout<<op<<std::endl;

    return 0;
}