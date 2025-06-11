#include <cxxtest/TestSuite.h>
#include <sstream>
#include <iostream>
#include "code.h"

          
class codewit_test : public CxxTest::TestSuite 
{
   public:
      void testJuan(){
        std::stringstream in("juan");
        std::streambuf *cin_buf = std::cin.rdbuf(); //save old buf
        std::cin.rdbuf(in.rdbuf()); //redirect std::cin to in input stream
        
        std::stringstream out;
        std::streambuf *cout_buf = std::cout.rdbuf(); //save old buf
        std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!

        //invoke submitted code (as nested in submission class)
        //code::submission runner;
        code::main();

        std::cin.rdbuf(cin_buf);   //reset to standard input again
        std::cout.rdbuf(cout_buf); //reset to standard output again

        TS_ASSERT_EQUALS( "Hi, juan\n", out.str() );
      }
      void testDestiny(){
        std::stringstream in("Destiny");
        std::streambuf *cin_buf = std::cin.rdbuf(); //save old buf
        std::cin.rdbuf(in.rdbuf()); //redirect std::cin to in input stream
        
        std::stringstream out;
        std::streambuf *cout_buf = std::cout.rdbuf(); //save old buf
        std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!

        //invoke submitted code (as nested in submission class)
        //code::submission runner;
        code::main();

        std::cin.rdbuf(cin_buf);   //reset to standard input again
        std::cout.rdbuf(cout_buf); //reset to standard output again

        TS_ASSERT_EQUALS( "Hi, Destiny\n", out.str() );
      }
};