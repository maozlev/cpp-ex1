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

TEST_CASE("Good snowman code") { // every snowman have 4 levels:
//
// hat, head, belly, base
// each level have 7 chars
// ** the hat have 2 levels - because there are hats that have 2 levels.. 

    CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(11112211) == string("       \n _===_ \n\\(.,.)/\n ( : ) \n ( : ) "));
    CHECK(snowman(12222212) == string("       \n _===_ \n\\(o.o)/\n ( : ) \n (\" \") "));
    CHECK(snowman(11112311) == string("       \n _===_ \n\\(.,.) \n ( : )\\\n ( : ) "));
    CHECK(snowman(13111112) == string("       \n _===_ \n (._.) \n<( : )>\n (\" \") "));
    CHECK(snowman(12344434) == string("       \n _===_ \n (O.-) \n (> <) \n (   ) "));   
    CHECK(snowman(14321143) == string("       \n _===_ \n (O o) \n<(   )>\n (___) "));
    CHECK(snowman(12341234) == string("       \n _===_ \n (O.-)/\n<(> <) \n (   ) "));

    CHECK(snowman(22222222) == string("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
    CHECK(snowman(21441112) == string("  ___  \n ..... \n (-,-) \n<( : )>\n (\" \") "));
    CHECK(snowman(22244421) == string("  ___  \n ..... \n (o.-) \n (] [) \n ( : ) "));
    CHECK(snowman(23113334) == string("  ___  \n ..... \n (._.) \n/(> <)\\\n (   ) "));
    CHECK(snowman(24333343) == string("  ___  \n ..... \n (O O) \n/(   )\\\n (___) "));
    CHECK(snowman(22443311) == string("  ___  \n ..... \n (-.-) \n/( : )\\\n ( : ) "));
    CHECK(snowman(22111122) == string("  ___  \n ..... \n (...) \n<(] [)>\n (\" \") "));
    CHECK(snowman(24444444) == string("  ___  \n ..... \n (- -) \n (   ) \n (   ) "));

    CHECK(snowman(33333333) == string("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
    CHECK(snowman(33232124) == string("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) "));
    CHECK(snowman(33214422) == string("   _   \n  /_\\  \n (o_.) \n (] [) \n (\" \") "));
    CHECK(snowman(32321414) == string("   _   \n  /_\\  \n (O.o) \n<( : ) \n (   ) "));
    CHECK(snowman(31342243) == string("   _   \n  /_\\  \n\\(O,-)/\n (   ) \n (___) "));
    CHECK(snowman(33221132) == string("   _   \n  /_\\  \n (o_o) \n<(> <)>\n (\" \") "));
    CHECK(snowman(33442221) == string("   _   \n  /_\\  \n\\(-_-)/\n (] [) \n ( : ) "));
    CHECK(snowman(34414414) == string("   _   \n  /_\\  \n (- .) \n ( : ) \n (   ) "));

    CHECK(snowman(44444444) == string("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
    CHECK(snowman(41442221) == string("  ___  \n (_*_) \n\\(-,-)/\n (] [) \n ( : ) "));
    CHECK(snowman(42224432) == string("  ___  \n (_*_) \n (o.o) \n (> <) \n (\" \") "));
    CHECK(snowman(43332313) == string("  ___  \n (_*_) \n\\(O_O) \n ( : )\\\n (___) "));
    CHECK(snowman(44441144) == string("  ___  \n (_*_) \n (- -) \n<(   )>\n (   ) "));
    CHECK(snowman(43432121) == string("  ___  \n (_*_) \n\\(-_O) \n (] [)>\n ( : ) "));
    CHECK(snowman(44433322) == string("  ___  \n (_*_) \n (- O) \n/(] [)\\\n (\" \") "));
    CHECK(snowman(44134444) == string("  ___  \n (_*_) \n (. O) \n (   ) \n (   ) "));

    }

    // checks random short numbers

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

// checks random negative short numbers

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

// checks random long numbers

TEST_CASE("Bad snowman code (long number)") {
   for (int i = 0; i < 10; i++)
   {
       int v = rand() % 999999999+100000000;
       CHECK_THROWS(snowman(v));
   }
}

// checks random negative long numbers

TEST_CASE("Bad snowman code (negative long number)") {
   for (int i = 0; i < 10; i++)
   {
       int v = rand() % -100000000 + -999999999;
       CHECK_THROWS(snowman(v));
   }
}

// checks random negative numbers

TEST_CASE("Bad snowman code negative number"){ 
   for (int i = 0; i < 10; i++)
   {
       int v = rand() % -10000000 + -99999999;
       CHECK_THROWS(snowman(v));
   }
}

// checks random invalid number each place

TEST_CASE("Bad snowman code (invalid number every iteration put number between 5-9)"){
    int number = 11111111;
    int j = 0; 
    while(j<20){
        int v = rand() % 6 + 4;//
        for (int i = 0; i < 8; i++)
        {
            //  cout<<v<<endl;
            // cout<<number+v*(pow(10,i))<<endl;
            CHECK_THROWS(snowman(number+v*(pow(10,i))));
        }
        j++;
    }
}







