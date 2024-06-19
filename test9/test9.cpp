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


    //  1   14   2  15   3
    //  16   4  17   5  18
    //  6   19   7  20   8
    //  21   9  22  10  23
    //  11  24  12  25  13
    
    int current_row = 1, current_x = 0, current_y = 0, current_num = 1;

    //  1   0   2   0   3
    //  0   4   0   5   0
    //  6   0   7   0   8
    //  0   9   0  10   0
    //  11  0  12   0  13
    //ここで上のようになる
    while (current_row <= n) {
        matrix[current_x][current_y] = current_num;
            
            int next_y = current_y + 2;

            if (in_range(current_x, next_y, n, m)) {

                current_y = next_y;                

            //範囲からはみ出した
            } else {
                
                //はみ出した行が奇数番目
                if(current_row % 2 == 1) {

                    current_y = 1;

                //はみ出した行が偶数番目
                } else {
                    
                    current_y = 0;
                }                
                
                current_row++;
                current_x++;

            }
        current_num++;
    }        

    current_row = 1;
    current_x = 0;
    current_y = 1;

    //ここで完成
    while (current_row <= n) {
        matrix[current_x][current_y] = current_num;
            
            int next_y = current_y + 2;

            if (in_range(current_x, next_y, n, m)) {

                current_y = next_y;                

            } else {
                
                if(current_row % 2 == 1) {

                    current_y = 0;

                } else {
                    
                    current_y = 1;
                }                
                
                current_row++;
                current_x++;

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
