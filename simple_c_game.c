#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

#define WIDTH 20
#define HEIGHT 20

int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

void setup() {
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
    score = 0;
    nTail = 0;
}

void draw() {
    clear(); // Clear the screen
    for (int i = 0; i < WIDTH + 2; i++)
        printw("#");
    printw("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0)
                printw("#"); // Wall on the left
            if (i == y && j == x)
                printw("O"); // Snake head
            else if (i == fruitY && j == fruitX)
                printw("F"); // Fruit
            else {
                int isTailPart = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printw("o"); // Snake tail
                        isTailPart = 1;
                    }
                }
                if (!isTailPart)
                    printw(" ");
            }
            if (j == WIDTH - 1)
                printw("#"); // Wall on the right
        }
        printw("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++)
        printw("#");
    printw("\nScore: %d\n", score);
    refresh(); // Refresh the screen to show changes
}

void input() {
    keypad(stdscr, TRUE); // Enable keypad input
    halfdelay(1); // Wait for input for a short time
    int c = getch();
    switch (c) {
        case KEY_LEFT:
            dir = LEFT;
            break;
        case KEY_RIGHT:
            dir = RIGHT;
            break;
        case KEY_UP:
            dir = UP;
            break;
        case KEY_DOWN:
            dir = DOWN;
            break;
        case 'x':
            endwin(); // End ncurses mode
            exit(0); // Exit game
    }
}

void logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }

    if (x >= WIDTH) x = 0; else if (x < 0) x = WIDTH - 1;
    if (y >= HEIGHT) y = 0; else if (y < 0) y = HEIGHT - 1;

    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y) {
            endwin(); // End ncurses mode
            exit(0); // Collision with self
        }
    }

    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;
        nTail++;
    }
}

int main() {
    srand(time(0)); // Seed random number generator
    initscr(); // Start ncurses mode
    setup();
    
    while (1) {
        draw();
        input();
        logic();
        usleep(100000); // Sleep to slow down the game
    }

    endwin(); // End ncurses mode before exiting
    return 0;
}
