#include "doctest.h"
#include "solver.hpp"
#include <complex>
using solver::solve, solver::RealVariable, solver::ComplexVariable;
#include <string>
using namespace std;

TEST_CASE("Test case 1 | + x |") {
    RealVariable x;    
    CHECK(solve(x==7) == 7);
    CHECK(solve(x+1==7+1) == 7);
    CHECK(solve(x+x==8) == 4);
    CHECK(solve(x+x==7+1) == 4);
    CHECK(solve(x+x==7+x) == 7);
    CHECK(solve(x+2+3==7) == 2);
    CHECK(solve(x+x+2+3==9) == 2);
    CHECK(solve(x+x+2+3==9+2) == 3);
    CHECK(solve(x+4+x+3==7) == 0);
    CHECK(solve(x+4+x+3==7+4) == 2);
    CHECK(solve(x+4+x+3==x+4+3+2) == 2);
    CHECK(solve(x+5+x+7+x==7+x+1+x) == -4);
}

TEST_CASE("Test case 1 | - x |") {
    RealVariable x;    
    CHECK(solve(x-1==7-1) == 7);
    CHECK(solve(x+x-x==8) == 8);
    CHECK(solve(x+x-x==7-1) == 6);
    CHECK(solve(x+x==7-x) == 7/3);
    CHECK(solve(x+2-3==7) == 8);
    CHECK(solve(x-x+2-3-x==9) == -8);
    CHECK(solve(x+x+2+3-x==9-2) == 2);
    CHECK(solve(x-4+x-3==7) == 7);
    CHECK(solve(x+4+x-3==7-4) == -1);
    CHECK(solve(x-4+x-3==x-4+3-2) == 4);
    CHECK(solve(-1*x-5-x-7-x==-7-x-1-x) == -4);
}

TEST_CASE("Test case 1 | \ x |") {
    RealVariable x;    
    CHECK(solve(x/1==7/1) == 7.0);
   // CHECK(solve(x+x/x==8) == 7.0);
    CHECK(solve(x+x/(6-4)==7/1) == 21/5);
   // CHECK(solve(x+x/x==7+x/x) == 7);
    CHECK(solve(x+5+x/2+x==7+x/1+x) == -4);
}

TEST_CASE("Test case 1 | * x |") {
    RealVariable x;    
    CHECK(solve(x==7) == 7);
    CHECK(solve(x*1==7*1) == 7);
    CHECK(solve(x*1+x*1==8) == 4);
    CHECK(solve(x*2==7*1) == 7/2);
    CHECK(solve(x+5+x*7+x==7*x*1+x) == -5);
}

TEST_CASE("Test case 1 | + (x^2) |") {
    RealVariable x;    
    CHECK(solve((x^2)==16) == 4);
    CHECK(solve((x^2)+1==16+1) == 4);
    CHECK(solve((x^2)-5*x==-6) == 2);
    CHECK(solve((x^2)+(x^2)==0) == 0);
    CHECK(solve((x^2)-10+(x^2)-7+(x^2)==7+(x^2)+1+(x^2)) == 5);
}

TEST_CASE("Test case 1 | - (x^2) |") {
    RealVariable x;
    CHECK(solve((x^2)-1==25-1) ==5);
    CHECK(solve((x^2)-(x^2)==(x^2)) == 0);
  //  CHECK(solve(-(x^2)+5+(x^2)-8-(x^2)==-7+(x^2)+1+(x^2)) == -1);
}


TEST_CASE("Test case 1 | \ (x^2) |") {
    RealVariable x;    
    CHECK(solve((x^2)/1==16/1) == 4);
    CHECK(solve((x^2)+1/2==16+1/2) == 4);
  //  CHECK(solve((x^2)/(x^2)-5x==-6) == 7/5);
   // CHECK(solve((x^2)+(x^2)/x==0) == 0);
  //  CHECK(solve(-(x^2)+5+(x^2)-8-(x^2)==-7+(x^2)+(x^2)/(x^2)+(x^2)) == 1);
}

TEST_CASE("Test case 1 | * (x^2) |") {
    RealVariable x;    
 //   CHECK(solve(x*x==16) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
    CHECK(solve((x^2)*1==49) == 7);
   // CHECK(solve(x*x==36) == 6);
 //   CHECK(solve(1*x*x==15+1) == 4);
  //  CHECK(solve(x+5+x*7*x==7+x*1*x) == -5);
}


TEST_CASE("Test case 2 | + y |") {
    RealVariable y;    
   // CHECK(solve(y==7) == 7+0i);
   // CHECK(solve(y+1i==7+1i) == 7+0i);
   // CHECK(solve(y+y==8+9i) == 4+4.5i);
   // CHECK(solve(y+5+y+7+y+i==7+y+1+y) == -4-i);
}

TEST_CASE("Test case 1 | - y |") {
    RealVariable y;
   // CHECK(solve(-y==-7) == 7+0i);
   // CHECK(solve(y-1i==-7-1i) == 7+0i);
   // CHECK(solve(-y-y==-8-9i) == 4+4.5i);
   // CHECK(solve(-y-5-y-7-y-i==-7-y-1-y) == -4-i);
}

TEST_CASE("Test case 1 | \ y |") {
    RealVariable y;    
   // CHECK(solve(y/1==7/1+8i) == 7.0+8i);
   // CHECK(solve(y+y/y+9i==8+5i) == 3.5-2i);
   // CHECK(solve(y+y/(1-i)==7/1+2i) == 23/5-i/5);
   // CHECK(solve(y+(y/y)-i==7+(y/y)+5i) == 7-i);
   // CHECK(solve(y+5+2*y+i==7+y/1+y+4i) == 3i+2);
}

TEST_CASE("Test case 1 | * y |") {
    RealVariable y;    
   // CHECK(solve(y+9i==7+9i)== 7+0i);
  //  CHECK(solve(y*1+8i==7*1+8i) == 7+0i);
  //  CHECK(solve(y*1+y*1+0i==8+9i) == 4+4.5i);
  //  CHECK(solve(y*2+0i+1i==7*1-6i) == 7/2-7/2i);
 //   CHECK(solve(y+5+y*7+y+8i-5i==7*y*1+y+8i-2i) == 3i-5);
}

TEST_CASE("Test case 1 | + (y^2) |") {
    RealVariable y;    
  //  CHECK(solve((y^2)+8i==16+8i) == 4+0i);
  //  CHECK(solve((y^2)+1-9i==16+1-9i) == 4+0i);
  //  CHECK(solve((y^2)+i^2==0) == -1+0i);
  //  CHECK(solve((y^2)+9i+(y^2)==0+9i) == 0+0i);
  //  CHECK(solve((y^2)+9i-10+(y^2)-7+(y^2)==7+(y^2)+1+(y^2)+9i) == 5+0i);
}

TEST_CASE("Test case 1 | \ (x^2) |") {
    RealVariable y;    
   // CHECK(solve((y^2)/1+8i==16/1+8i) == 4+0i);
   // CHECK(solve((y^2)+1/2+9i==16+1/2+9i) == 4+0i);
    //CHECK(solve((y^2)/(y^2)-5y+6i==-6+4i) == 7/5+2i/5);
    //CHECK(solve((y^2)+(y^2)/y==0+0i) == 0);
}
