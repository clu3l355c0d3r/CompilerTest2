#include "ast.hpp"
#include "parser.tab.hpp"
#include <iomanip>
#include <string>
#include <iostream>
#include <stdio.h>


int main()
{ std::ostream& assembly = std::cout;

  const baseNode *ast=parseAST();

/*
  SETTERS
*/
  ast->setChildDefs();
  ast->setParamUses();


/*
  PRINTERS
*/  
  // Print python to cout

  //
  
  // Print the assembly output to cout
  Context ctxt(&assembly);
  ast->generate_assembly(ctxt);

  delete ast;

  return 0;

}
