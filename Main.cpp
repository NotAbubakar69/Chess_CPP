
    //M Abubakar Nadeem_Harris hassan_22I-2003_22I-1947__PF(J)_PF-PROJECT

#include<iostream>
#include<iomanip>

using namespace std;
using std::cout;
using std::cin;

void makegrid()
{
    char  array[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {

            array[i][j] = '\0';

        }
    }
}

char  get_peice(int id, char team)
{
    if (team == 'a')
    {
        static int horses = 2;
        static int king = 1;
        static int queen = 1;
        static int rock = 2;
        static int bishop = 2;
        char piece_array[8] = { 'h','h','k','q','r','r','b','b' };

        char ch = piece_array[id];
        if (ch == 'h' && horses > 0)
        {
            horses--;
            return ch;

        }
        else if (ch == 'k' && king > 0)
        {
            king--;
            return ch;

        }
        else if (ch == 'q' && queen > 0)
        {
            queen--;
            return ch;

        }
        else if (ch == 'r' && rock > 0)
        {
            rock--;
            return ch;
        }
        else if (ch == 'b' && bishop > 0)
        {
            bishop--;
            return ch;
        }
        else
        {
            // cout<<"error while getting your desired piece"<<endl;
            return '\0';
        }
    }
    else if (team = 'b')
    {
        static int Horses = 2;
        static int King = 1;
        static int Queen = 1;
        static int Rock = 2;
        static int Bishop = 2;
        char Piece_array[8] = { 'H','H','K','Q','R','R','B','B' };

        char CH = Piece_array[id];
        if (CH == 'H' && Horses > 0)
        {
            Horses--;
            return CH;

        }
        else if (CH == 'K' && King > 0)
        {
            King--;
            return CH;

        }
        else if (CH == 'Q' && Queen > 0)
        {
            Queen--;
            return CH;

        }
        else if (CH == 'R' && Rock > 0)
        {
            Rock--;
            return CH;
        }
        else if (CH == 'B' && Bishop > 0)
        {
            Bishop--;
            return CH;
        }
        else
        {
            // cout<<"error while getting your desired piece"<<endl;
            return '\0';
        }
    }
    else {
        cout << " only two teams with whose names are a,b";
    }


}

void initalize_grid(char array[][8])
{
    // int selected_array[8];int index =0 ;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            array[i][j] = '\0';
        }
    }

    int i = 0;
    for (int j = 0; j < 8; j++)
    {
        int random = rand() % 8 + 0;

        char ch = get_peice(random, 'a');
        while (ch == '\0')
        {
            random = rand() % 8 + 0;
            ch = get_peice(random, 'a');
        }
        array[i][j] = ch;
    }
    i = 7;
    for (int j = 0; j < 8; j++)
    {
        int random = rand() % 8 + 0;

        char ch = get_peice(random, 'b');
        while (ch == '\0')
        {
            random = rand() % 8 + 0;
            ch = get_peice(random, 'b');
        }
        array[i][j] = ch;
    }



}


int** possiblePaths(char grid[][8], char piece, int row, int col) {
    

    if (piece == 'H' || piece == 'h')
    {
        int** moves = new int* [8];
        for (int i = 0; i < 8; ++i)
        {
            moves[i] = new int[2];
        }
        moves[0][0] = -2;
        moves[0][1] = -1;
        moves[1][0] = -2;
        moves[1][1] = 1;
        moves[2][0] = -1;
        moves[2][1] = -2;
        moves[3][0] = -1;
        moves[3][1] = 2;
        moves[4][0] = 1;
        moves[4][1] = -2;
        moves[5][0] = 1;
        moves[5][1] = 2;
        moves[6][0] = 2;
        moves[6][1] = -1;
        moves[7][0] = 2;
        moves[7][1] = 1;

        cout << "Possible moves for " << piece << " at " << row << "," << col << " are: ";
        for (int i = 0; i < 8; i++) {
            int newRow = row + moves[i][0];
            int newCol = col + moves[i][1];
            if (newRow >= 0 && newRow < 8 && newCol >= 0 && newCol < 8) {
                std::cout << newRow << "," << newCol << " ";
            }
        }
        cout << endl;

        return moves;
    }
    else if (piece == 'K' || piece == 'k')
    {
        // Possible moves for a King
        int** moves = new int* [8];
        for (int i = 0; i < 8; ++i)
        {
            moves[i] = new int[2];
        }
        moves[0][0] = -1;
        moves[0][1] = -1;
        moves[1][0] = -1;
        moves[1][1] = 0;
        moves[2][0] = -1;
        moves[2][1] = 1;
        moves[3][0] = 0;
        moves[3][1] = -1;
        moves[4][0] = 0;
        moves[4][1] = 1;
        moves[5][0] = 1;
        moves[5][1] = -1;
        moves[6][0] = 1;
        moves[6][1] = 0;
        moves[7][0] = 1;
        moves[7][1] = 1;

        // moves[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

        cout << "Possible moves for " << piece << " at " << row << "," << col << " are: ";
        for (int i = 0; i < 8; i++) {
            int newRow = row + moves[i][0];
            int newCol = col + moves[i][1];
            if (newRow >= 0 && newRow < 8 && newCol >= 0 && newCol < 8) {
                std::cout << newRow << "," << newCol << " ";
            }
        }
        cout << endl;

        return moves;



    }
    else if (piece == 'Q' || piece == 'q')

    {
        // Possible moves for a Queen
        // cout<<" in possible paths ____ "<<endl;
        // int moves[8][2]= {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        int** moves = new int* [8];
        for (int i = 0; i < 8; ++i)
        {
            moves[i] = new int[2];
        }
        moves[0][0] = -1;
        moves[0][1] = -1;
        moves[1][0] = -1;
        moves[1][1] = 0;
        moves[2][0] = -1;
        moves[2][1] = 1;
        moves[3][0] = 0;
        moves[3][1] = -1;
        moves[4][0] = 0;
        moves[4][1] = 1;
        moves[5][0] = 1;
        moves[5][1] = -1;
        moves[6][0] = 1;
        moves[6][1] = 0;
        moves[7][0] = 1;
        moves[7][1] = 1;






        cout << "Possible moves for " << piece << " at " << row << "," << col << " are: ";
        cout << "You can move diagonally, horizontally and vertically" << endl;
        return moves;



    }
    else if (piece == 'R' || piece == 'r')
    {
        // Possible moves for a Rook
        int** moves = new int* [4];
        for (int i = 0; i < 4; ++i)
        {
            moves[i] = new int[2];
        }
        // int moves[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

        moves[0][0] = -1;
        moves[0][1] = 0;
        moves[1][0] = 0;
        moves[1][1] = -1;
        moves[2][0] = 0;
        moves[2][1] = 1;
        moves[3][0] = 1;
        moves[3][1] = 0;


        cout << "Possible moves for " << piece << " at " << row << "," << col << " are: ";
        cout << " You can move  horizontally and vertically" << endl;

        return moves;
    }
    else if (piece == 'B' || piece == 'b')
    {
        // Possible moves for a Bishop
        // int moves[4][2] = {{-1,1},{1,-1},{-1,-1},{1,1}};

        int** moves = new int* [4];
        for (int i = 0; i < 4; ++i)
        {
            moves[i] = new int[2];
        }

        moves[0][0] = -1;
        moves[0][1] = 1;
        moves[1][0] = 1;
        moves[1][1] = -1;
        moves[2][0] = -1;
        moves[2][1] = -1;
        moves[3][0] = 1;
        moves[3][1] = 1;





        cout << "Possible moves for " << piece << " at " << row << "," << col << " are: ";
        cout << "You can move diagonally" << endl;
        return moves;

    }


}


void displayGrid(char grid[8][8]) {
    std::cout << "  |";
    for (int i = 0; i < 8; i++) {
        std::cout << std::setw(4) << i;
    }
    std::cout << std::endl;

    std::cout << "--|";
    for (int i = 0; i < 8; i++) {
        std::cout << "----";
    }
    std::cout << std::endl;

    for (int i = 0; i < 8; i++) {
        std::cout << std::setw(2) << i << " |";
        for (int j = 0; j < 8; j++) {
            if (grid[i][j] == '\0')
            {
                std::cout << "  " << grid[i][j] << " |";
            }
            else
            {
                std::cout << " " << grid[i][j] << " |";
            }

        }
        std::cout << std::endl;
        std::cout << "--|";
        for (int j = 0; j < 8; j++) {
            std::cout << "----";
        }
        std::cout << std::endl;
    }
}

bool verify_path(char grid[][8], char piece, int row, int col, int new_row, int new_col)
{

    if (grid[new_row][new_col] != '\0')
    {
        return false;
    }
    if (piece == 'H' || piece == 'h')
    {
        // int** moves = new int*[8];
        int** moves;
        moves = possiblePaths(grid, grid[row][col], row, col);


        for (int i = 0; i < 8; i++)
        {

            if (moves[i][0] + row == new_row && moves[i][1] + col == new_col)
            {
                return true;
            }

        }
        return false;


    }
    else if (piece == 'K' || piece == 'k')
    {
        // Possible moves for a King
        // int** moves = new int*[8];
        // int moves[8][2];

        int** moves;
        moves = possiblePaths(grid, grid[row][col], row, col);

        for (int i = 0; i < 8; i++)
        {

            if (moves[i][0] + row == new_row && moves[i][1] + col == new_col)
            {
                return true;
            }

        }
        return false;





    }
    else if (piece == 'Q' || piece == 'q')
    {

        int** moves = nullptr;
        moves = possiblePaths(grid, grid[row][col], row, col);
        bool is_scaler_multiple = false;


        for (int i = 0; i < 8; i++)
        {

            //   cout<<"hello R "<<endl;
            int x_factor = moves[i][0];
            int y_factor = moves[i][1];
            int temp_row = row;
            int temp_col = col;
            cout << "________________________________" << endl;
            // cout<<"x_factor = "<<x_factor<<endl;
            // cout<<"y_factor = "<<y_factor<<endl;

            while (temp_row < 8 && temp_row >= -1 && temp_col < 8 && temp_col >= -1 && !is_scaler_multiple)
            {
                // cout<<"temp row = "<<temp_row<<endl;
                // cout<<"temp col = "<<temp_col<<endl;

                if (moves[i][0] + temp_row == new_row && moves[i][1] + temp_col == new_col)
                {
                    is_scaler_multiple = true;

                    return true;
                }
                temp_row = temp_row + moves[i][0];
                temp_col = temp_col + moves[i][1];
            }
            // cout<<"loop iteration end"<<endl;
        }


        if (is_scaler_multiple = false)
        {

            return false;
        }






    }
    else if (piece == 'R' || piece == 'r')
    {

        int** moves = nullptr;
        moves = possiblePaths(grid, grid[row][col], row, col);
        bool is_scaler_multiple = false;


        for (int i = 0; i < 4; i++)
        {

            //   cout<<"hello R "<<endl;
            int x_factor = moves[i][0];
            int y_factor = moves[i][1];
            int temp_row = row;
            int temp_col = col;
            cout << "________________________________" << endl;
            // cout<<"x_factor = "<<x_factor<<endl;
            // cout<<"y_factor = "<<y_factor<<endl;

            while (temp_row < 8 && temp_row >= -1 && temp_col < 8 && temp_col >= -1 && !is_scaler_multiple)
            {
                // cout<<"temp row = "<<temp_row<<endl;
                // cout<<"temp col = "<<temp_col<<endl;

                if (moves[i][0] + temp_row == new_row && moves[i][1] + temp_col == new_col)
                {
                    is_scaler_multiple = true;

                    return true;
                }
                temp_row = temp_row + moves[i][0];
                temp_col = temp_col + moves[i][1];
            }
            // cout<<"loop iteration end"<<endl;
        }


        if (is_scaler_multiple = false)
        {

            return false;
        }



    }
    else if (piece == 'B' || piece == 'b')
    {

        int** moves = nullptr;
        moves = possiblePaths(grid, grid[row][col], row, col);
        bool is_scaler_multiple = false;


        for (int i = 0; i < 4; i++)
        {

            //   cout<<"hello R "<<endl;
            int x_factor = moves[i][0];
            int y_factor = moves[i][1];
            int temp_row = row;
            int temp_col = col;
            cout << "________________________________" << endl;
            // cout<<"x_factor = "<<x_factor<<endl;
            // cout<<"y_factor = "<<y_factor<<endl;

            while (temp_row < 8 && temp_row >= -1 && temp_col < 8 && temp_col >= -1 && !is_scaler_multiple)
            {
                // cout<<"temp row = "<<temp_row<<endl;
                // cout<<"temp col = "<<temp_col<<endl;

                if (moves[i][0] + temp_row == new_row && moves[i][1] + temp_col == new_col)
                {
                    is_scaler_multiple = true;

                    return true;
                }
                temp_row = temp_row + moves[i][0];
                temp_col = temp_col + moves[i][1];
            }
            // cout<<"loop iteration end"<<endl;
        }


        if (is_scaler_multiple = false)
        {

            return false;
        }

    }
}

void play(char  team, char  grid[][8])
{

    int x_index;
    int y_index;
    while (true)
    {

        cout << "Plz Enter the location Of the Piece that you want to move : " << endl;
        cout << "x index = ";
        cin >> x_index;
        cout << "y index = ";
        cin >> y_index;

        while (x_index < 0 || x_index> 7 || y_index < 0 || y_index>7 || grid[x_index][y_index] == '\0')
        {
            cout << "incorrect values, plz re_enter " << endl;
            cout << "x index = ";
            cin >> x_index;
            cout << "y index = ";
            cin >> y_index;
        }

        // possiblePaths(grid,grid[x_index][y_index],x_index,y_index);

        cout << "Enter Your Choice " << endl;
        cout << "new_x index = ";
        int new_x_index;
        cin >> new_x_index;
        cout << "new_y index = ";
        int new_y_index;
        cin >> new_y_index;
        while (!verify_path(grid, grid[x_index][y_index], x_index, y_index, new_x_index, new_y_index))
        {
            cout << "Incorrect Destination Position , Plz Re_enter " << endl;
            cout << "Enter Your Choice " << endl;
            cout << "new_x index = ";
            // int new_x_index;
            cin >> new_x_index;
            cout << "new_y index = ";
            // int new_y_index;
            cin >> new_y_index;
        }


        // cout<<new_x_index<<"_"<<new_y_index<<"_ "<<x_index<<y_index<<endl;
        grid[new_x_index][new_y_index] = grid[x_index][y_index];

        grid[x_index][y_index] = '\0';

        x_index = new_x_index;
        y_index = new_y_index;

        system("cls");          //To clear the junk froom screen
        displayGrid(grid);
    }






}

int main()
{

    cout << endl;
    cout << endl;

    cout << "\t\t\t\t\t/----\\  |   |  |------   |------   /----\\ " << endl;
    cout << "\t\t\t\t\t|       |   |  |         |         |    |  " << endl;
    cout << "\t\t\t\t\t|       |---|  |------   |------    \\     " << endl;
    cout << "\t\t\t\t\t|       |   |  |         |           \\    " << endl;
    cout << "\t\t\t\t\t|       |   |  |         |            \\   " << endl;
    cout << "\t\t\t\t\t\\----/  |   |  |------   |------   \\----/  " << endl;

    cout << endl;
    cout << endl;

    char grid[8][8];

    initalize_grid(grid);

    displayGrid(grid);

    play('a', grid);

}