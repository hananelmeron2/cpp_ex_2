/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;

TEST_CASE(""){
    string text = "Dond vorri be haffy";
    CHECK(find(text,"happy")==string("haffy"));
    CHECK(find(text,"happy")==string("haffy"));
    CHECK(find(text,"dont")==string("Dond"));
    CHECK(find(text,"worry")==string("vorri"));
    CHECK(find(text,"be")==string("be"));
    CHECK(find(text,"Be")==string("be"));
    CHECK(find(text,"happy")==string("haffy"));

    string text1 = "COme HomE weri";
    CHECK(find(text1,"come")==string("COme"));
    CHECK(find(text1,"home")==string("HomE"));
    CHECK(find(text1,"come")==string("COme"));
    CHECK(find(text1,"home")==string("HomE"));
    CHECK(find(text1,"home")==string("HomE"));

    string text2 = "Dond vorri be haffy";
    CHECK(find(text2,"happy")==string("haffy"));
    CHECK(find(text2,"happy")==string("haffy"));
    CHECK(find(text2,"dont")==string("Dond"));
    CHECK(find(text2,"worry")==string("vorri"));
    CHECK(find(text2,"be")==string("be"));
    CHECK(find(text2,"Be")==string("be"));
    CHECK(find(text2,"happy")==string("haffy"));

    string text3 = "COme HomE weri";
    CHECK(find(text3,"come")==string("COme"));
    CHECK(find(text3,"home")==string("HomE"));
    CHECK(find(text3,"come")==string("COme"));
    CHECK(find(text3,"home")==string("HomE"));
    CHECK(find(text3,"home")==string("HomE"));
    string text4 = "Dond vorri be haffy";
    CHECK(find(text4,"happy")==string("haffy"));
    CHECK(find(text4,"happy")==string("haffy"));
    CHECK(find(text4,"dont")==string("Dond"));
    CHECK(find(text4,"worry")==string("vorri"));
    CHECK(find(text4,"be")==string("be"));
    CHECK(find(text4,"Be")==string("be"));
    CHECK(find(text4,"happy")==string("haffy"));

    string text5 = "COme HomE weri";
    CHECK(find(text5,"come")==string("COme"));
    CHECK(find(text5,"home")==string("HomE"));
    CHECK(find(text5,"come")==string("COme"));
    CHECK(find(text5,"home")==string("HomE"));
    CHECK(find(text5,"home")==string("HomE"));
    string text6 = "Dond vorri be haffy";
    CHECK(find(text6,"happy")==string("haffy"));
    CHECK(find(text6,"happy")==string("haffy"));
    CHECK(find(text6,"dont")==string("Dond"));
    CHECK(find(text6,"worry")==string("vorri"));
    CHECK(find(text6,"be")==string("be"));
    CHECK(find(text6,"Be")==string("be"));
    CHECK(find(text6,"happy")==string("haffy"));

    string text7 = "COme HomE weri";
    CHECK(find(text7,"come")==string("COme"));
    CHECK(find(text7,"home")==string("HomE"));
    CHECK(find(text7,"come")==string("COme"));
    CHECK(find(text7,"home")==string("HomE"));
    CHECK(find(text7,"home")==string("HomE"));
    string text8 = "Dond vorri be haffy";
    CHECK(find(text8,"happy")==string("haffy"));
    CHECK(find(text8,"happy")==string("haffy"));
    CHECK(find(text8,"dont")==string("Dond"));
    CHECK(find(text8,"worry")==string("vorri"));
    CHECK(find(text8,"be")==string("be"));
    CHECK(find(text8,"Be")==string("be"));
    CHECK(find(text8,"happy")==string("haffy"));

    string text9 = "COme HomE weri";
    CHECK(find(text9,"come")==string("COme"));
    CHECK(find(text9,"home")==string("HomE"));
    CHECK(find(text9,"come")==string("COme"));
    CHECK(find(text9,"home")==string("HomE"));
    CHECK(find(text9,"home")==string("HomE"));
    string text10 = "Dond vorri be haffy";
    CHECK(find(text10,"happy")==string("haffy"));
    CHECK(find(text10,"happy")==string("haffy"));
    CHECK(find(text10,"dont")==string("Dond"));
    CHECK(find(text10,"worry")==string("vorri"));
    CHECK(find(text10,"be")==string("be"));
    CHECK(find(text10,"Be")==string("be"));
    CHECK(find(text10,"happy")==string("haffy"));

    string text11 = "COme HomE weri";
    CHECK(find(text11,"come")==string("COme"));
    CHECK(find(text11,"home")==string("HomE"));
    CHECK(find(text11,"come")==string("COme"));
    CHECK(find(text11,"home")==string("HomE"));
    CHECK(find(text11,"home")==string("HomE"));

    string text111 = "COme HomE weri";
    CHECK(find(text111,"come")==string("COme"));
    CHECK(find(text111,"home")==string("HomE"));
    CHECK(find(text111,"come")==string("COme"));
    CHECK(find(text111,"home")==string("HomE"));
    CHECK(find(text111,"home")==string("HomE"));

    string text112 = "COme HomE weri";
    CHECK(find(text112,"come")==string("COme"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"come")==string("COme"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"come")==string("COme"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"come")==string("COme"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"come")==string("COme"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"come")==string("COme"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"come")==string("COme"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"come")==string("COme"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"come")==string("COme"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"come")==string("COme"));
    CHECK(find(text112,"home")==string("HomE"));
    CHECK(find(text112,"home")==string("HomE"));



    

   
    



}
