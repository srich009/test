#include <iostream>
#include <string>

// #include necessary classes
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
#include "sqr.h"
#include "base.h"
#include "op.h"

using namespace std ;

int main () 
{
    
Op * op7 = new Op ( 7 );
Op * op4 = new Op ( 4 );
Op * op3 = new Op ( 3 );
Op * op2 = new Op ( 2 );
Mult * A = new Mult ( op7 , op4 );
Add * B = new Add ( op3 , A );
Sub * C = new Sub ( B , op2 );
Sqr * D = new Sqr ( C );
Div * E = new Div ( op4 , op2 ); //man made
Div * F = new Div ( op7 , op3 ); //man made


//Outputting results of eval - PART 1 TEST
cout << op7->evaluate() << endl;
cout << op4->evaluate() << endl;
cout << op3->evaluate() << endl;
cout << op2->evaluate() << endl;
cout << A->evaluate() << endl;
cout << B->evaluate() << endl;
cout << C->evaluate() << endl;
cout << D->evaluate() << endl;
cout << E->evaluate() << endl;
cout << F->evaluate() << endl;


// VectorContainer * container = new VectorContainer ();
// container -> add_element ( A );
// container -> add_element ( B );
// container -> add_element ( C );
// container -> add_element ( D );
// cout << "Container Before Sort: " << endl ;
// container -> print ();
// cout << "Container After Sort: " << endl ;
// container -> set_sort_function ( new SelectionSort ());
// container -> sort ();
// container -> print ();

return 0;

}