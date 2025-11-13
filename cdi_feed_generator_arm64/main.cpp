#include <iostream>
#include <iomanip>
#include "math.h"
#include "generator_feeder.h"
using namespace std;

int main(int argc,char** argv)
{
    generator_feeder *gnfd= new generator_feeder();
    cout<<"enter the first cdi\n";
    cout<<"enter the length of digits per number max 8  \n";
    cout<<"enter precision \n";
    cout<<"enter the start digit per length\n";
    cout<<"choose lenghts to show output 10 numbers \n";
    cout<<"enter rows per line \n";
    cout<<" ./cdi_feed_generator_arm64 22 1 2 3 3 4 4 5 5 7 2 12 5 5 7 8 8 8 9 5 4 6 14";
    gnfd->f_cdi=stoi(argv[1]);
    gnfd->lt_of_each[0]=stoi(argv[2]);
    gnfd->lt_of_each[1]=stoi(argv[3]);
    gnfd->lt_of_each[2]=stoi(argv[4]);
    gnfd->lt_of_each[3]=stoi(argv[5]);
    gnfd->lt_of_each[4]=stoi(argv[6]);
    gnfd->lt_of_each[5]=stoi(argv[7]);
    gnfd->lt_of_each[6]=stoi(argv[8]);
    gnfd->lt_of_each[7]=stoi(argv[9]);
    gnfd->lt_of_each[8]=stoi(argv[10]);
    gnfd->lt_of_each[9]=stoi(argv[11]);
    gnfd->preci=stoi(argv[12]);
    gnfd->ch_le[0]=stoi(argv[13]);
    gnfd->ch_le[1]=stoi(argv[14]);
    gnfd->ch_le[2]=stoi(argv[15]);
    gnfd->ch_le[3]=stoi(argv[16]);
    gnfd->ch_le[4]=stoi(argv[17]);
    gnfd->ch_le[5]=stoi(argv[18]);
    gnfd->ch_le[6]=stoi(argv[19]);
    gnfd->ch_le[7]=stoi(argv[20]);
    gnfd->ch_le[8]=stoi(argv[21]);
    gnfd->ch_le[9]=stoi(argv[22]);
    gnfd->row_out=stoi(argv[23]);
    gnfd->gener_feed();
    return 0;
}
