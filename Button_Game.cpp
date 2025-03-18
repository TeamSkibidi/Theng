#include "../Header/Button_Game.hpp"

void moveUp(int** &Matrix, int n, int &score) {
    for (int cols = 0; cols < n; cols++) {
        int steprows = 0, stepcols = cols;
        for (int rows = 1; rows < n; rows++) {
            if(Matrix[rows][cols] != 0) {

                if(Matrix[rows - 1][cols] == 0 || Matrix[rows - 1][cols] == Matrix[rows][cols]) {

                    if ( Matrix[steprows][stepcols] == Matrix[rows][cols]){
                        Matrix[steprows++][stepcols] *= 2;
                        Matrix[rows][cols] = 0;
                        score += Matrix[steprows - 1][stepcols];
                    }

                    else {

                        if( Matrix[steprows][stepcols] == 0 ) {
                            Matrix[steprows][stepcols] = Matrix[rows][cols];
                            Matrix[rows][cols] = 0;
                        }

                        else {
                            Matrix[++steprows][stepcols] = Matrix[rows][cols];
                            Matrix[rows][cols] = 0;
                        }
                    }
                }
                else {
                    steprows++;
                }
            } 
        }
    }
}
void moveLeft(int** &Matrix, int n, int &score) {
    for (int rows = 0; rows < n; rows++) {
        int stepCols = 0, stepRows = rows;
        for (int cols = 1; cols < n; cols++) {
            if (Matrix[rows][cols] != 0) {
                if (Matrix[rows][cols - 1] == 0 || Matrix[rows][cols] == Matrix[rows][cols - 1]) {
                    if(Matrix[stepRows][stepCols] == Matrix[rows][cols]) {
                        Matrix[stepRows][stepCols++]  *= 2;
                        Matrix[rows][cols] = 0;
                        score += Matrix[stepRows][stepCols - 1];
                    }
                    else {
                        if(Matrix[stepRows][stepCols] == 0) {
                            Matrix[stepRows][stepCols] = Matrix[rows][cols];
                            Matrix[rows][cols] = 0;
                        }
                        else{
                            Matrix[stepRows][++stepCols] = Matrix[rows][cols];
                            Matrix[rows][cols] = 0;
                        }
                    }
                }
                else {
                    stepCols++;
                }
            }
        }
    }
}
void moveDown(int** &Matrix,int n, int &score) {
    for (int cols = 0; cols < n; cols++) {
        int stepRows = n - 1, stepCols = cols;
        for (int rows = n - 2; rows >= 0; rows--) {
            if (Matrix[rows][cols] != 0) {
                if(Matrix[rows + 1][cols] == 0 || Matrix[rows][cols] == Matrix[rows + 1][cols]) {
                    if (Matrix[stepRows][stepCols] == Matrix[rows][cols]) {
                        Matrix[stepRows--][stepCols] *= 2;
                        Matrix[rows][cols] = 0;
                        score += Matrix[stepRows + 1][stepCols];
                    }
                    else {
                        if(Matrix[stepRows][stepCols] == 0) {
                            Matrix[stepRows][stepCols] = Matrix[rows][cols];
                            Matrix[rows][cols] = 0;
                        }
                        else {
                            Matrix[--stepRows][stepCols] = Matrix[rows][cols];
                            Matrix[rows][cols] = 0;
                        }
                    }
                }
                else {
                    stepRows--;
                }
            }
        }

    }
}
void moveRight(int** &Matrix, int n, int &score) {
    for (int rows = 0; rows < n; rows++) {
        int stepCols = n - 1, stepRows = rows;
        for (int cols = n - 2; cols >= 0; cols--) {
            if (Matrix[rows][cols] != 0) {
                if (Matrix[rows][cols + 1] == 0 || Matrix[rows][cols] == Matrix[rows][cols + 1]) {
                    if (Matrix[stepRows][stepCols] == Matrix[rows][cols]) {
                        Matrix[stepRows][stepCols--] *= 2;
                        Matrix[rows][cols] = 0;
                        score += Matrix[stepRows][stepCols + 1];
                    }
                    else {
                        if (Matrix[stepRows][stepCols] == 0) {
                            Matrix[stepRows][stepCols] = Matrix[rows][cols];
                            Matrix[rows][cols] = 0;
                        }
                        else {
                            Matrix[stepRows][--stepCols] = Matrix[rows][cols];
                            Matrix[rows][cols] = 0;
                        }
                    }
                }
                else {
                    stepCols--;
                }
            }
        }
    }
}
void redo_Game(int** &Matrix, int n, int** saveRedo, int &score, int save_score) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            Matrix[i][j] = saveRedo[i][j];
        }
        score = save_score;
    }
    int temp = score;
    score = save_score;
    save_score = temp;
}
void undo_Game(int **&Matrix, int n, int ** saveUndo, int &score, int save_score){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            Matrix[i][j] = saveUndo[i][j];
        }
    }
    score = save_score;
}



