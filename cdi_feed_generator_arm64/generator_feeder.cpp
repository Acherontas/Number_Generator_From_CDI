#include "generator_feeder.h"
#include <iomanip>
#include "math.h"
#include "sum_cdi.h"
using namespace std;
//ctor
generator_feeder::generator_feeder(){}
//dtor
generator_feeder::~generator_feeder(){}
//copy ctor
generator_feeder::generator_feeder(const generator_feeder& other){}
//handle self assignment//assignment operator
generator_feeder& generator_feeder::operator=(const generator_feeder& rhs){if (this == &rhs) return *this; return *this;}
int generator_feeder::gener_feed(){
        sum_cdi *scd=new sum_cdi();
        long double xi;
        xend=0;
        cout<<"for cdi of " << f_cdi <<" with row out " << row_out <<"\n";
    for(int i=0;i<10;i++){
        xi=0;
         nn=pow(10,(lt_of_each[i]-1));
         startt=nn*ch_le[i];
         endd=startt+(nn-1);
         cout<<"\n";
         cout<<"using " << startt << " " << endd <<"\n";
        for(int i=startt;i<=endd;i++){
            xi=scd->cdis(i,3);
            if(xi==f_cdi){
                   cout<< i <<" ";
                   if(xend%row_out==0){cout<<"\n";}
                   xend+=1;
            }
        }
    }
    cout<<" row out " << row_out <<"\n";
    return 0;
}

