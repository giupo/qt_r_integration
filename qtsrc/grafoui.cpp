#include "grafoui.h"

#include <QApplication>
#include "mydialog.h"

SEXP grafoui(){
    using namespace Rcpp ;
    
    CharacterVector x = CharacterVector::create( "foo", "bar" )  ;
    NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    List z            = List::create( x, y ) ;
    
    int argc = 0;
    char **argv = '\0';
    QApplication app(argc, argv);
    myQtApp *dialog = new myQtApp;
 
    dialog->show();
    app.exec();
    
    return z ;
}
