//
//  main.cpp
//  PyramidSolver
//
//  Created by Diego Munoz on 10/24/24.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>> pyramid = {
            {2},
            {4, 3},
            {3, 2, 6},
            {2, 9, 5, 2},
            {10, 5, 2, 15, 5}
        };
    
    for (const auto& row : pyramid) {
            for (int num : row) {
                cout << num << " ";
            }
            cout << endl;
        }
    return 0;
}
