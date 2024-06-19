#include <iostream>

bool in_range(int x, int y, int n, int m) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    
    int n, m;
    std::cin >> n >> m;

    
    int **matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int [m] {0};
    }

    
    int current_x = 0, current_y = 0, current_num = 1, last_num = n * m;
    int direction[4] = {0, 1, 2, 3};
    int current_direction = direction[1];

    // 進んでいる方向
    //    0
    //3       1
    //    2

    while (current_num <= last_num) {
        matrix[current_x][current_y] = current_num;


        if(current_direction == 1) {
            
            int next_y = current_y + 1;

            if (in_range(current_x, next_y, n, m) && (matrix[current_x][next_y] == 0)) {

                current_y = next_y;                

            } else {
                
                current_x++;
                current_direction = direction[2];
                
            }

        } else if(current_direction == 2) {
            
            int next_x = current_x + 1;

            if (in_range(next_x, current_y, n, m) && (matrix[next_x][current_y] == 0)) {

                current_x = next_x;                

            } else {
                
                current_y--;
                current_direction = direction[3];
                
            }

        } else if(current_direction == 3) {
            
            int next_y = current_y - 1;

            if (in_range(current_x, next_y, n, m) && (matrix[current_x][next_y] == 0)) {

                current_y = next_y;                

            } else {
                
                current_x--;
                current_direction = direction[0];
                
            }

        } else if(current_direction == 0) {
            
            int next_x = current_x - 1;

            if (in_range(next_x, current_y, n, m) && (matrix[next_x][current_y] == 0)) {

                current_x = next_x;                

            } else {
                
                current_y++;
                current_direction = direction[1];
                
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
