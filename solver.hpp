# include <iostream>
# include<complex>
using namespace std;

namespace solver{

class RealVariable
{
public:
    double _a;
    double _b;
    double _c;
public:
    RealVariable(const double& a=0,const double& b=1,const double& c=0):_a(a),_b(b),_c(c){

    }

    //getters
    double a(){return _a;}
    double b(){return _b;}
    double c(){return _c;}

    //operator
    RealVariable operator*(const double& i );
    RealVariable operator+(const double& i );
    RealVariable operator-(const double& i );
    RealVariable operator/(const double& i );
    RealVariable operator^(const int& i );
    RealVariable operator==(const double& i);
    RealVariable operator+(const RealVariable& i);
    RealVariable operator-(const RealVariable& i);
    RealVariable operator==(const RealVariable& i);
    
    
};

 RealVariable operator*(const double& n, RealVariable x);
 RealVariable operator+(const double& i, const RealVariable& x);
 ostream& operator<<(ostream& os,const RealVariable& c);

class ComplexVariable
{
public:
    RealVariable _re;
    double _im;
public:
    ComplexVariable(const double& i=0.0):_im(i){

    }
    ComplexVariable(RealVariable r, const double& i=0.0):_re(r),_im(i){

    }
    //getters
    RealVariable re(){return _re;}
    double im(){return _im;}
    //operator
    const ComplexVariable operator+(const double& n) const;
    const ComplexVariable operator-(const double& n) const;
    const ComplexVariable operator*(const double& n) const;
    const ComplexVariable operator^(const double& n) const;
    const ComplexVariable operator/(const double& n) const;
    const ComplexVariable operator==(const double& n) const;
    const ComplexVariable operator*(const ComplexVariable&) const;
    const ComplexVariable operator+(const ComplexVariable&) const;
    const ComplexVariable operator-(const ComplexVariable&) const;
    const ComplexVariable operator/(const ComplexVariable&) const;
    const ComplexVariable operator==(const ComplexVariable&) const;
    const ComplexVariable operator+(const complex<double>& x) const;
};
ComplexVariable operator*(const double& x,ComplexVariable t);
ComplexVariable operator+(const double& x,const ComplexVariable& t);
ostream& operator<<(std::ostream& os,const std::complex<double>& c);
double solve (solver::RealVariable x);
complex<double> solve (solver::ComplexVariable x);

}