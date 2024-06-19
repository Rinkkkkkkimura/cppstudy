#include <iostream>

bool in_range(int x, int y, int n, int m) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    
    int n, m;
    std::cin >> n >> m;

    
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int [m];
    }

    
    int current_col = m, current_x = n - 1, current_y = current_col - 1, current_num = 1;
    
    while (current_col >= 0) {
        matrix[current_x][current_y] = current_num;


        if(current_col % 2 == 0) {
            
            int next_x = current_x - 1;

            if (in_range(next_x, current_y, n, m)) {

                current_x = next_x;                

            } else {
                
                current_col--;
                current_x = 0;
                current_y = current_col - 1;
                
            }

        }
        else {

            int next_x = current_x + 1;

            if (in_range(next_x, current_y, n, m)) {

                current_x = next_x;                

            } else {
                
                current_col--;
                current_x = n - 1;
                current_y = current_col - 1;
                
            }

        }

        current_num++;
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
