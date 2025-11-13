#ifndef GENERATOR_FEEDER_H
#define GENERATOR_FEEDER_H


class generator_feeder
{
    public:
        generator_feeder();
        virtual ~generator_feeder();
        generator_feeder(const generator_feeder& other);
        generator_feeder& operator=(const generator_feeder& other);
        int lt_of_each[10];
        int preci;
        long double fnumber[1000];
        long double fnumber_t[1000];
        long double fnumber_th[1000];
        long double fnumber_f[1000];
        long double fnumber_s[1000];
        long double fnumber_sv[1000];
        long double fnumber_ei[1000];
        long double fnumber_ni[1000];
        long double fnumber_tn[1000];
        int rndd;
        int ch_le[10];
        int f_cdi;
        int xsi=0;
        int xfn=0;
        int xfn_t=0,xfn_th=0,xfn_f=0,xfn_s=0,xfn_sv=0,xfn_ei=0,xfn_ni=0,xfn_tn=0;
        int startt=0;
        int endd=0;
        int xend=0;
        int gener_feed();
        int show_them();
        int nn;
        int row_out=0;

    protected:

    private:
};

#endif // GENERATOR_FEEDER_H
