/**
 * AUTHORS: Maoz Lev
 * 
 * Date: 2021-03
 */
#include <math.h> 
#include "doctest.h"
#include "snowman.hpp"
#include <string>
using namespace ariel;
using namespace std;

TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(12222212) == string("  _===_\n\\(o.o)/\n  ( : )\n  (" ")"));
    CHECK(snowman(33232124) == string("    _\n   /_\\\n\\(o_O)\n  (] [)>\n  (   )"));
    CHECK(snowman(11111111) == string(" _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(snowman(22222222) == string("   ___\n  .....\n\\(o.o)/\n  (] [)\n  (   )\n   " ""));
    CHECK(snowman(33333333) == string("   _\n  /_\\n (O_O)\n/(> <)\\n (___)"));
    CHECK(snowman(44444444) == string("  ___\n(_*_)\n(- -)\n(   )\n(   )"));
    CHECK(snowman(44134444) == string(" ___\n(_*_)\n(. O)\n(   )\n(   )"));
    CHECK(snowman(24134442) == string("  ___\n .....\n (. O)\n (   )\n (   )\n  " ""));
    CHECK(snowman(12341234) == string(" _===_\n (O.-)/\n<(> <)\n (   )"));
    CHECK(snowman(43214321) == string("  ___\n(_*_)\n(o_.)\n(] [)\\n( : )"));
    CHECK(snowman(12344321) == string("_===_\n(O.-)\n(] [)\\n( : )"));
    CHECK(snowman(43211234) == string("  ___\n (_*_)\n (o_.)/\n<(> <)\n (   )"));
    CHECK(snowman(11223344) == string(" _===_\n (o,o)\n/(   )\\n (   )"));
    CHECK(snowman(11122233) == string("  _===_\n\\(.,o)/\n (> <)\n (___)"));
    CHECK(snowman(11133344) == string("  _===_\n (.,O)\n/(   )\\n (   )"));
    CHECK(snowman(44433322) == string("  ___\n (_*_)\n (- O)\n/(] [)\\n (   )\n  " ""));
    CHECK(snowman(22443311) == string("  ___\n .....\n (-.-)\n/( : )\\n ( : )"));
    CHECK(snowman(12123434) == string(" _===_\n (..o)\n/(> <)\n (   )"));
    CHECK(snowman(43432121) == string("   ___\n (_*_)\n\\(-_O)\n (] [)>\n ( : )"));
    CHECK(snowman(33214422) == string("   _\n /_\\n(o_.)\n(] [)\n(   )\n " ""));
    CHECK(snowman(32321414) == string("   _\n  /_\\n (O.o)\n<( : )\n (   )"));
    CHECK(snowman(41144114) == string(" ___\n(_*_)\n(.,-)\n( : )>\n(   )"));
    CHECK(snowman(12322312) == string(" _===_\n\\(O.o)\n ( : )\\n (   )\n  " ""));
    CHECK(snowman(44212314) == string("  ___\n (_*_)\n\\(o .)\n ( : )\\n (   )"));
    CHECK(snowman(31234311) == string("   _\n /_\\n(o,O)\n( : )\\n( : )"));
    CHECK(snowman(22111122) == string("   ___\n .....\n (...)\n<(] [)>\n (   )\n  " ""));
    CHECK(snowman(44222244) == string("  ___\n (_*_)\n\\(o o)/\n (   )\n (   )"));
    CHECK(snowman(11444444) == string("_===_\n(-,-)\n(   )\n(   )"));
    CHECK(snowman(44223311) == string("   ___\n (_*_)\n (o o)\n/( : )\\n ( : )"));
}

TEST_CASE("Bad snowman code (short number)") { 
      for (int i = 0; i < 10; i++)
   {
       int v = rand() % 9+1;
       CHECK_THROWS(snowman(v));
   }
     for (int i = 0; i < 10; i++)
   {
       int v = rand() % 99+10;
       CHECK_THROWS(snowman(v));
   }
     for (int i = 0; i < 10; i++)
   {
       int v = rand() % 999+100;
       CHECK_THROWS(snowman(v));
   }
     for (int i = 0; i < 10; i++)
   {
       int v = rand() % 9999+1000;
       CHECK_THROWS(snowman(v));
   }
    for (int i = 0; i < 10; i++)
   {
       int v = rand() % 99999+10000;
       CHECK_THROWS(snowman(v));
   }
    for (int i = 0; i < 10; i++)
   {
       int v = rand() % 999999+100000;
       CHECK_THROWS(snowman(v));
   }
   for (int i = 0; i < 10; i++)
   {
       int v = rand() % 9999999+1000000;
       CHECK_THROWS(snowman(v));
   }
}

TEST_CASE("Bad snowman code (negative short number)") { 
      for (int i = 0; i < 10; i++)
   {
       int v = rand() % -1 + -9;
       CHECK_THROWS(snowman(v));
   }
     for (int i = 0; i < 10; i++)
   {
       int v = rand() % -10 + -99;
       CHECK_THROWS(snowman(v));
   }
     for (int i = 0; i < 10; i++)
   {
       int v = rand() % -100 + -999;
       CHECK_THROWS(snowman(v));
   }
     for (int i = 0; i < 10; i++)
   {
       int v = rand() % -1000 + -9999;
       CHECK_THROWS(snowman(v));
   }
    for (int i = 0; i < 10; i++)
   {
       int v = rand() % -10000 + -99999;
       CHECK_THROWS(snowman(v));
   }
    for (int i = 0; i < 10; i++)
   {
       int v = rand() % -100000 + -999999;
       CHECK_THROWS(snowman(v));
   }
    for (int i = 0; i < 10; i++)
   {
       int v = rand() % -1000000 + -9999999;
       CHECK_THROWS(snowman(v));
   }
}

TEST_CASE("Bad snowman code (long number)") {
   for (int i = 0; i < 10; i++)
   {
       int v = rand() % 999999999+100000000;
       CHECK_THROWS(snowman(v));
   }
}

TEST_CASE("Bad snowman code (negative long number)") {
   for (int i = 0; i < 10; i++)
   {
       int v = rand() % -100000000 + -999999999;
       CHECK_THROWS(snowman(v));
   }
}

TEST_CASE("Bad snowman code negative number"){
   
   for (int i = 0; i < 10; i++)
   {
       int v = rand() % -10000000 + -99999999;
       CHECK_THROWS(snowman(v));
   }
}

TEST_CASE("Bad snowman code (invalid number every iteration put number between 5-9)"){
    int number = 11111111;
    int j = 0; 
    while(j<20){
        int v = rand() % 6 + 4;
        for (int i = 0; i < 8; i++)
        {
            //  cout<<v<<endl;
            // cout<<number+v*(pow(10,i))<<endl;
            CHECK_THROWS(snowman(number+v*(pow(10,i))));
        }
        j++;
    }
    CHECK_THROWS(snowman(11111110));
    CHECK_THROWS(snowman(11111101));
    CHECK_THROWS(snowman(11111011));
    CHECK_THROWS(snowman(11110111));
    CHECK_THROWS(snowman(11101111));
    CHECK_THROWS(snowman(11011111));
    CHECK_THROWS(snowman(10111111));
    CHECK_THROWS(snowman(01111111));
}







