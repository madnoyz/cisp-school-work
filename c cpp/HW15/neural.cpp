/*
        A nueral net simulation used as a string acceptor.
        Dan Ross
        Dec 2009
*/
#include <iostream>
#include <fstream>
using namespace std;

#define N 4  // nodes per layer  (columns)
#define M 4  // layers           (rows)

struct node {
        int threshold;       // a value above which the neuron will fire
        int effWeight;       // a sum of inputs from previous layer
        int linkWeight[N];   // strength on connections to next layer (not used on last layer)
        bool fire;           // if effWeight > threshold
};
node net[M][N];

void initNet(void)
{

// *********************************
// *************** THRESHOLDS ******
// *********************************

        // *** LAYER ZERO ***
        net[0][0].threshold = 10;
        net[0][1].threshold = 10;
        net[0][2].threshold = 10;
        net[0][3].threshold = 10;

        // *** LAYER ONE ***
        net[1][0].threshold = 10;
        net[1][1].threshold = 10;
        net[1][2].threshold = 10;
        net[1][3].threshold = 10;

        // *** LAYER TWO ***
        net[2][0].threshold = 10;
        net[2][1].threshold = 10;
        net[2][2].threshold = 10;
        net[2][3].threshold = 10;

        // *** LAYER THREE ***
        net[3][0].threshold = 10;
        net[3][1].threshold = 10;
        net[3][2].threshold = 10;
        net[3][3].threshold = 10;

// *********************************
// *************** WEIGHTS *********
// *********************************
        
        // *** LAYER ZERO ***
        net[0][0].linkWeight[0] = 1;
        net[0][0].linkWeight[1] = 1;
        net[0][0].linkWeight[2] = 1;
        net[0][0].linkWeight[3] = 1;

        net[0][1].linkWeight[0] = 1;
        net[0][1].linkWeight[1] = 1;
        net[0][1].linkWeight[2] = 1;
        net[0][1].linkWeight[3] = 1;

        net[0][2].linkWeight[0] = 1;
        net[0][2].linkWeight[1] = 1;
        net[0][2].linkWeight[2] = 1;
        net[0][2].linkWeight[3] = 1;

        net[0][3].linkWeight[0] = 1;
        net[0][3].linkWeight[1] = 1;
        net[0][3].linkWeight[2] = 1;
        net[0][3].linkWeight[3] = 1;

        // *** LAYER ONE ***
        net[1][0].linkWeight[0] = 1;
        net[1][0].linkWeight[1] = 1;
        net[1][0].linkWeight[2] = 1;
        net[1][0].linkWeight[3] = 1;

        net[1][1].linkWeight[0] = 1;
        net[1][1].linkWeight[1] = 1;
        net[1][1].linkWeight[2] = 1;
        net[1][1].linkWeight[3] = 1;

        net[1][2].linkWeight[0] = 1;
        net[1][2].linkWeight[1] = 1;
        net[1][2].linkWeight[2] = 1;
        net[1][2].linkWeight[3] = 1;

        net[1][3].linkWeight[0] = 1;
        net[1][3].linkWeight[1] = 1;
        net[1][3].linkWeight[2] = 1;
        net[1][3].linkWeight[3] = 1;

        // *** LAYER TWO ***
        net[2][0].linkWeight[0] = 1;
        net[2][0].linkWeight[1] = 1;
        net[2][0].linkWeight[2] = 1;
        net[2][0].linkWeight[3] = 1;

        net[2][1].linkWeight[0] = 1;
        net[2][1].linkWeight[1] = 1;
        net[2][1].linkWeight[2] = 1;
        net[2][1].linkWeight[3] = 1;

        net[2][2].linkWeight[0] = 1;
        net[2][2].linkWeight[1] = 1;
        net[2][2].linkWeight[2] = 1;
        net[2][2].linkWeight[3] = 1;

        net[2][3].linkWeight[0] = 1;
        net[2][3].linkWeight[1] = 1;
        net[2][3].linkWeight[2] = 1;
        net[2][3].linkWeight[3] = 1;
}

void trainNet(void)
{
        
 // put the code from initNet here and modify the values by hand as required
// *********************************
// *************** THRESHOLDS ******
// *********************************

        // *** LAYER ZERO ***
        net[0][0].threshold = 4;
        net[0][1].threshold = 13;
        net[0][2].threshold = 12;
        net[0][3].threshold = 16;

        // *** LAYER ONE ***
        net[1][0].threshold = 7;
        net[1][1].threshold = 6;
        net[1][2].threshold = 3;
        net[1][3].threshold = 2;

        // *** LAYER TWO ***
        net[2][0].threshold = 1;
        net[2][1].threshold = 1;
        net[2][2].threshold = 1;
        net[2][3].threshold = 1;

        // *** LAYER THREE ***
        net[3][0].threshold = 3;
        net[3][1].threshold = 0;
        net[3][2].threshold = 0;
        net[3][3].threshold = 0;

// *********************************
// *************** WEIGHTS *********
// *********************************
        
        // *** LAYER ZERO ***
        net[0][0].linkWeight[0] = 5;
        net[0][0].linkWeight[1] = 3;
        net[0][0].linkWeight[2] = 1;
        net[0][0].linkWeight[3] = 1;

        net[0][1].linkWeight[0] = 3;
        net[0][1].linkWeight[1] = 3;
        net[0][1].linkWeight[2] = 1;
        net[0][1].linkWeight[3] = 1;

        net[0][2].linkWeight[0] = 1;
        net[0][2].linkWeight[1] = 2;
        net[0][2].linkWeight[2] = 0;
        net[0][2].linkWeight[3] = 1;

        net[0][3].linkWeight[0] = 1;
        net[0][3].linkWeight[1] = 0;
        net[0][3].linkWeight[2] = 0;
        net[0][3].linkWeight[3] = 1;

        // *** LAYER ONE ***
        net[1][0].linkWeight[0] = 5;
        net[1][0].linkWeight[1] = 0;
        net[1][0].linkWeight[2] = 0;
        net[1][0].linkWeight[3] = 1;

        net[1][1].linkWeight[0] = 1;
        net[1][1].linkWeight[1] = 0;
        net[1][1].linkWeight[2] = 0;
        net[1][1].linkWeight[3] = 1;

        net[1][2].linkWeight[0] = 1;
        net[1][2].linkWeight[1] = 0;
        net[1][2].linkWeight[2] = 0;
        net[1][2].linkWeight[3] = 1;

        net[1][3].linkWeight[0] = 0;
        net[1][3].linkWeight[1] = 0;
        net[1][3].linkWeight[2] = 0;
        net[1][3].linkWeight[3] = 0;

        // *** LAYER TWO ***
        net[2][0].linkWeight[0] = 5;
        net[2][0].linkWeight[1] = 1;
        net[2][0].linkWeight[2] = 1;
        net[2][0].linkWeight[3] = 1;

        net[2][1].linkWeight[0] = 1;
        net[2][1].linkWeight[1] = 1;
        net[2][1].linkWeight[2] = 1;
        net[2][1].linkWeight[3] = 1;

        net[2][2].linkWeight[0] = 1;
        net[2][2].linkWeight[1] = 1;
        net[2][2].linkWeight[2] = 1;
        net[2][2].linkWeight[3] = 1;

        net[2][3].linkWeight[0] = 1;
        net[2][3].linkWeight[1] = 1;
        net[2][3].linkWeight[2] = 1;
        net[2][3].linkWeight[3] = 1;
}


void printnet(void)
{       
        /* prints for each node:

                threshold
                effective weight
                fire
                list of link weights
        
        */

        for(int row = 0; row < M; row++)
        {
                // print for each node in this layer
                for(int col = 0; col < N; col++)
                {
                        cout.width(3*N);
                        cout << net[row][col].threshold << "   ";
                }
                cout << endl;
                
                // print effective weight for each node in this layer
                for(int col = 0; col < N; col++)
                {
                        cout.width(3*N);
                        cout << net[row][col].effWeight << "   ";
                }
                cout << endl;

                // print fire flag for each node in this layer
                for(int col = 0; col < N; col++)
                {
                        cout.width(3*N);
                        cout << net[row][col].fire << "   ";
                }
                cout << endl;

                // print the weights for each node in this layer
                if(row < N - 1) 
                        for(int col = 0; col < N; col++)
                        {
                                for(int wt = 0; wt < N; wt++)
                                {
                                        cout.width(3);
                                        cout << net[row][col].linkWeight[wt];
                                }
                                cout << "   ";
                        }
                cout << endl;
        }
}

/*
        Receives a string.
        Feeds it into the net.
        Processes it thru the net.
*/
void netIN(char * buf, int size)
{
        // feed in the ASCII value of each character 
        // into each of the first layer nodes
        for(int col = 0; col < size; col++)
        {
                net[0][col].effWeight = buf[col] - 'a';
                if(net[0][col].effWeight > net[0][col].threshold) 
                        net[0][col].fire = 1;
                else
                        net[0][col].fire = 0;
        }

        // crunch it thru the net
        int tempSum = 0;
        for(int row = 1; row <= M; row++)
        {
                /* 
                generate a sum for each node on this row, 
                by looking at the correspoding weight 
                for each node on the previous row
                */
                for(int thisRowsCol = 0; thisRowsCol < N; thisRowsCol++)
                {
                        tempSum = 0;
                        for(int prevRowsCol = 0; prevRowsCol < N; prevRowsCol++)
                        {
                                tempSum = tempSum + net[row - 1][prevRowsCol].fire * net[row - 1][prevRowsCol].linkWeight[thisRowsCol];
                        }
                        net[row][thisRowsCol].effWeight = tempSum;
                        if(net[row][thisRowsCol].effWeight > net[row][thisRowsCol].threshold)
                                net[row][thisRowsCol].fire = 1;
                        else
                                net[row][thisRowsCol].fire = 0;

                }
        }

}

/*
Looks at last row of threshold bits in the NN and 
combines them into a 4 bit binary number.
Greater than 7 is woody, otherwise its tinny! 
*/
bool IsWoody(void)
{
        int value = net[3][0].fire * 8 + net[3][1].fire * 4 + net[3][2].fire * 2 + net[3][3].fire * 1;
        
        if(value > 7)
                return true;
        else
                return false;
}

void main(void)
{
        char word[5];
        bool woody;
        
        trainNet();

    // open source file
    ifstream fin( "words.txt" );
    if ( !fin ) { cerr << "Input file could not be opened\n"; exit(1); }

    // loop through strings in file
    while ( fin >> word ) {

                // process each word thru the net
                cout << word << endl;
                netIN(word, 4);
                printnet();
                if(IsWoody())
                        cout << word << " is WOODY" << endl << endl << endl;
                else
                        cout << word << " is TINNY" << endl << endl << endl;

        }

    // close file
        fin.close();

}