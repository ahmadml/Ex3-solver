# include"solver.hpp"
using namespace solver;

RealVariable solver::RealVariable::operator+(const double& i ){
    return RealVariable(_a,_b,_c+i);
}
RealVariable solver::RealVariable::operator-(const double& i ){
    return RealVariable(_a,_b,_c-i);
}
RealVariable solver::RealVariable::operator/(const double& i ){
    return RealVariable(_a/i,_b/i,_c/i);
}
RealVariable solver::RealVariable::operator*(const double& i ){
    return RealVariable(_a*i,_b*i,_c*i);
}
RealVariable solver::RealVariable::operator^(const int& i ){
    if(i==0) return RealVariable(_a,_b,_c+1);
    if(i==1) return RealVariable(_a,_b,_c);
    else return RealVariable(_a+1,0,_c);
    
}
RealVariable RealVariable::operator==(const double& i ){
return RealVariable(_a,_b,_c-i);
}
RealVariable RealVariable::operator+(const RealVariable& x){
     return RealVariable(this->_a+x._a,this->_b+x._b,this->_c+x._c);
}
RealVariable RealVariable::operator-(const RealVariable& x) {
    return RealVariable(this->_a-x._a,this->_b-x._b,this->_c-x._c);
}
RealVariable solver::RealVariable::operator==(const RealVariable& x){
   return RealVariable(this->_a-x._a,this->_b-x._b,this->_c-x._c);
}
solver::RealVariable solver::operator+(const double& n, const RealVariable& x){
  return RealVariable(x._a,x._b,x._c+n);
}
solver::RealVariable solver::operator*(const double& n,  solver::RealVariable& x){
  return RealVariable(x._a*n,x._b*n,x._c*n);
}

//operator Complex

 const ComplexVariable solver::ComplexVariable::operator+(const double& n) const{
     RealVariable x(_re._a,_re._b,_re._c+n);
     return ComplexVariable(x,_im);
 }
 const ComplexVariable solver::ComplexVariable::operator-(const double& n) const{
     RealVariable x(_re._a,_re._b,_re._c-n);
     return ComplexVariable(x,_im);
 }
 const ComplexVariable solver::ComplexVariable::operator*(const double& n) const{
     RealVariable x(_re._a*n,_re._b*n,_re._c*n);
     return ComplexVariable(x,_im);
 }
 const ComplexVariable solver::ComplexVariable::operator/(const double& n) const{
     RealVariable x(_re._a/n,_re._b/n,_re._c/n);
     return ComplexVariable(x,_im);
 }
 const ComplexVariable solver::ComplexVariable::operator^(const double& n) const{
     RealVariable x(_re._a+1,0,_re._c);
     return ComplexVariable(x,_im);
 }
 const ComplexVariable ComplexVariable::operator==(const double& n) const{
     RealVariable x(_re._a,_re._b,_re._c-n);
     return ComplexVariable(x,_im);
 }

const ComplexVariable ComplexVariable::operator*(const ComplexVariable& t) const{
    return ComplexVariable();
}
const ComplexVariable ComplexVariable::operator+(const ComplexVariable& t) const{
    RealVariable x(this->_re._a+t._re._a,this->_re._b+t._re._b,this->_re._c+t._re._c);
     return ComplexVariable(x,_im);
}
const ComplexVariable ComplexVariable::operator/(const ComplexVariable& t) const{
    return ComplexVariable();
}
const ComplexVariable ComplexVariable::operator-(const ComplexVariable& t) const{
     RealVariable x(_re._a-t._re._a,_re._b-t._re._b,_re._c-t._re._c);
     return ComplexVariable(x,_im);
}
const ComplexVariable ComplexVariable::operator==(const ComplexVariable& t) const{
    RealVariable x(this->_re._a-t._re._a,this->_re._b-t._re._b,this->_re._c-t._re._c);
     return ComplexVariable(x,_im-t._im);
}
const ComplexVariable ComplexVariable::operator+(const complex<double>& t) const{
    RealVariable x(_re._a,_re._b,_re._c);
    double n = _im+t.imag();
     return ComplexVariable(x,n);
}
ComplexVariable solver::operator*(const double& n,ComplexVariable& t){
    RealVariable x(t._re._a,t._re._b*n,t._re._c);
     return ComplexVariable(x,t._im);
}
ComplexVariable solver::operator+(const double& n, const ComplexVariable& t){
    RealVariable x(t._re._a,t._re._b,t._re._c+n);
     return ComplexVariable(x,t._im);
}

ostream& solver::operator<<(std::ostream& os, const std::complex<double>& c){
    return (os<<c.imag()<<'+'<<c.real()<<'i');
}
ostream& solver::operator<<(ostream& os,const RealVariable& c){
    return(os<<c._a<<'+'<<c._b<<'+'<<c._c);
}
double solver::solve (solver::RealVariable x){
    //cout<<x<<"\n";
    if(x._a==0 && x._b==1) return -x._c;
    if(x._a==0 && x._b>1) return-(x._c/x._b);
    return 1;
}
complex<double> solver::solve (solver::ComplexVariable x){
    //cout<<x.re()<<'+'<<x._im<<'i'<<"\n";
    if(x._re._a==0 && x._re._b==1){
        double r =  -x._re._c;
        complex<double> t (r,x._im);
        return t;
    }
    if(x._re._a==0 && x._re._b>1){
         double r =  -(x._re._c/x._re._b);
        complex<double> t (r,x._im);
        return t;
    } 
    complex<double> t (0,0);
    return t;
}
