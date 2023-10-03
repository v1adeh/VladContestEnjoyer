#include <iostream>
#include <vector>
#include <string>

using namespace std;


bool check(vector<string> *pole, int x, int y) {
    if ((*pole)[x][y] != '#' && (*pole)[x][y] != 'X') {                // если не равно стенке или нашему прошлому положению
        if ((*pole)[x][y] == 'E') return true;                         //если равно е, значит нашли выход
        else (*pole)[x][y] = 'C';                                      //иначе перемещаемся туда
    }
    return false;
}

bool is_can_exit_from_maze(vector<string> pole, int SR, int SC) {
    bool exit = false;
    pole[SR][SC] = 'C';                                                //начальное положение
    while(true) {
        for (int x = 1; x < pole.size() - 1; x++) {                    //проходим по всем значением лабиринта пока не доберёмся до нашей точки C
            for (int y = 1; y < pole[0].length() - 1; y++) {
                if (pole[x][y] == 'C') {

                    exit = check(&pole, x-1, y);   // лево     // проверяем возможность передвижения
                    if (exit) break;                                   //если натыкаемся на выход то прерываем программу

                    exit = check(&pole, x+1, y);   // право
                    if (exit) break;

                    exit = check(&pole, x, y-1);   //вверх
                    if (exit) break;

                    exit = check(&pole, x, y+1);   //вниз
                    if (exit) break;

                    pole[x][y] = 'X';                                  // помечаем точку с которой сдвинулись
                }
            }
            if (exit) break;
        }
        if (exit) break;
    }
    return exit;
}


int main() {
    int row, col, rows, cols;
    std::cin >> row >> col >> rows >> cols;
    std::cin.ignore(1); // Игнорируем перевод строки, застрявший в потоке ввода
    
    std::vector<std::string> maze(rows);
    for(auto& line : maze) std::getline(std::cin, line);
    
    std::cout << (is_can_exit_from_maze(maze, row, col) ? "YES" : "NO") << std::endl;
}
