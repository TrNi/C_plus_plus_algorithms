#include "stdio.h"
#include "math.h"
#include <vector>

void histfun(int* arr, int m=4, int n=4, int nbins = 25) {

    std::vector<int> hist(nbins,0); 
    int maxval = 250;
    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j) {
            int val = arr[i*n+j];
            int bin = val*(nbins-1) / maxval;
            hist[bin] +=1;
        }
    }

    for (int i=0; i<nbins; ++i) {
        if (hist[i] != 0) {
            printf("hist(%d): %d \n", i, hist[i]);
        }
    }

    return;
}

int main() {

    int a[4][4] = {{1,1,1,2},{3,4,250,250}, {6,9,250,1}, {10,11,23,1}};

    histfun((int*)a);

    return 0;

}