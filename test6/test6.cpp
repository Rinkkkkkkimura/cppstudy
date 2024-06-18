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

    
    int current_col = 0, current_row = 1, curr_num = 1, current_x = 0, current_y = 0, current_num = 1;
    
    while (current_col < m) {
        
        int next_x = current_x + 1;
        int next_y = current_y - 1;

        if (in_range(next_x, next_y, n, m)) {

            current_x = next_x;
            current_y = next_y;
            matrix[current_x][current_y] = current_num;
            current_num++;

        } else {
            
            current_col++;
            current_x = 0;
            current_y = current_col - 1;
            
        }
        
    }

    current_col--;
    current_x = current_row;
    current_y = current_col - 1;

    while (current_row < n) {

        
        int next_x = current_x + 1;
        int next_y = current_y - 1;

        if (in_range(current_x, current_y, n, m)) {
            current_x = next_x;
            current_y = next_y;
            matrix[current_x][current_y] = current_num;
            current_num++;

        } else {
        
            current_row++;
            current_x = current_row;
            current_y = current_col - 1;

        }
        
    }   


    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
