#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

const int ROW=50;
const int COL=50;

int board[ROW][COL];
bool open[ROW][COL];

void initBoard(int rows, int cols)
{
    int m;
    cout << "Nhap so luong min: ";
    cin >> m;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            board[i][j]=0;
            open[i][j]=false;
        }
    }
    int count=0;
    while(count < m)
    {
        int row=rand()%rows;
        int col=rand()%cols;
        if(board[row][col]!=9)
        {
            board[row][col]=9;
            count ++;
        }
    }
}

    void printBoard(int rows,int cols){
        cout << "  ";
        for (int j = 0; j < cols; j++) {
            cout << j << " ";
        }
        cout << endl;

        for (int i = 0; i < rows; i++) {
            cout << i << " ";
            for (int j = 0; j < cols; j++) {
                if (open[i][j]) {
                    cout << board[i][j] << " ";
                } else {
                    cout << "- ";
                }
            }
            cout << endl;
        }
    }

    int countMinesAround(int row, int col,int rows,int cols) {
        int count = 0;
        for (int i = row - 1; i <= row + 1; i++) {
            for (int j = col - 1; j <= col + 1; j++) {
                if (i >= 0 && i < rows && j >= 0 && j < cols && board[i][j] == 9) {
                    count++;
                }
            }
        }
        return count;
    }

    int main()
    {
        int rows,cols;
        cin >> rows >> cols;
        initBoard(rows,cols);
        bool win =false;
        bool gameover=false;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (board[i][j] != 9) {
                   board[i][j] = countMinesAround(i, j,rows,cols);
                }
            }
        }
        while(!gameover)
        {
            printBoard(rows,cols);

            int row,col;
            cout << "Nhap toa do: ";
            cin >> row >> col;
            if(board[row][col]==9)
            {
                cout << "GameOver." << endl;
                gameover=true;
                for(int i=0;i<rows;i++)
                    for(int j=0;j<cols;j++) open[i][j]=true;
                printBoard(rows,cols);

            }else{
                open[row][col]=true;
                bool allopen=true;
                for(int i=0;i<rows;i++)
                    for(int j=0;j<cols;j++)
                {
                    if(!open[i][j]&&board[i][j]!=9) allopen=false;
                }
                if(allopen){
                    win=true;
                    break;
                }

            }

        }
        if(win)
            cout << "Chuc mung ban da chien thang!";
        return 0;

    }

