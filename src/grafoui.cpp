#include "grafoui.h"

//#include <QApplication>
//#include "myqtapp.h"

// This is a fake entry point useful for initial deployment inside R installation.
// the *real* C++ source code is in $PRJHOME/qtsrc

SEXP grafoui(){
    using namespace Rcpp ;
    
    CharacterVector x = CharacterVector::create( "foo", "bar" )  ;
    NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    List z            = List::create( x, y ) ;
      
    return z ;
}
