#include <stdio.h>

struct Move {
    int x;
    int y;
};

// Перемещение
struct Move getFinishPoint(struct Move arr[], int n) {
    struct Move finish;
    finish.x = 0;
    finish.y = 0; 
    for (int i = 0; i < n; i++) {
        finish.x += arr[i].x;
        finish.y += arr[i].y;
    }
    return finish;
}

int main() {
    struct Move moves[3]; // Пример массива
    int n = 3;
    moves[0].x = 1;
    moves[0].y = 2;   
    moves[1].x = 3;
    moves[1].y = 4;   
    moves[2].x = 5;
    moves[2].y = -7;
        
    struct Move finish = getFinishPoint(moves, n);
    printf("Finish: %d %d\n", finish.x, finish.y);
    return 0;
}

