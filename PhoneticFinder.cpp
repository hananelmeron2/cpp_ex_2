#include <iostream>
#include <stdexcept>
#include <cstring>
#include "PhoneticFinder.hpp"
using namespace std;
 
 
 namespace phonetic{
       
        string find(string text ,string word)
        {
           
              string text1 = text;
              string word1 = word;
              
              char c[] = {'w','f','p','j','k','q','z','t','u','y'};  // the letters that can change
              string help[20];
              string help1[20];
              string help2[20];
              string ans1 = "1";
              string str;
              string str1;
              string check;
              int k=0;
              int l=0;
              int i=0;
              int b=0;
              int u=0;
              int m=0;
          
              // turn all the text to lower case letters.
              for(int i=0; i<text.size(); i++)
              {
                  if(text[i]>=65 && text[i]<=92)
                  {
	                   text[i]=text[i]+32;
                  }
              }

              for(int i=0; i<word1.size(); i++)
              {
                  if(word1[i]>=65 && word1[i]<=92)
                  {
	                   word1[i] = word1[i]+32;
                  }
              }
              

              //finding all the options
              for( i=0; i<10; i++)
              {
                 for(int j = 0; j < word.size(); j++)
                 {
                       
                 if(word[j] == c[i] && i == 0)
                 {
                    //cout << "i was here ";
                    word[j] = 'v';
                    help[l] = word;
                    l++;
                    
                 }

                 if(word[j] == c[i] && i == 1)
                 {
                    word[j] = 'b';
                    help[l] = word;
                    l++;
                 }

                 if(word[j] == c[i] && i == 2)
                 {
                    word[j] = 'f';
                    help[l] = word;
                    l++;
                 }

                 if(word[j] == c[i] && i == 3)
                 {
                    word[j] = 'j';
                    help[l] = word;
                    l++;
                 }

                 if(word[j] == c[i] && i == 4)
                 {
                    word[j] = 'c';
                    help[l] = word;
                    l++;
                 }

                 if(word[j] == c[i] && i == 5)
                 {
                    word[j] = 'k';
                    help[l] = word;
                    l++;
                 }

                 if(word[j] == c[i] && i == 6)
                 {
                    word[j] = 's';
                    help[l] = word;
                    l++;
                 }

                 if(word[j] == c[i] && i == 7)
                 {
                    
                    word[j] = 'd';
                    help[l] = word;
                    l++;
                 }

                 if(word[j] == c[i] && i == 8)
                 {
                    word[j] = 'o';
                    help[l] = word;
                    l++;
                 }

                 if(word[j] == c[i] && i == 9)
                 {
                    word[j] = 'i';
                    help[l] = word;
                    l++;
                 }
                 
            
                 }

              }

              if(l==0)
              {
                 help[l] = word1;
              }
              
            { // create array of strings
                 
              for(auto x:text)
              {
                
                if(x == ' ')
                {
                   
                   help1[u] = str;
                   u++;
                   str.erase();
                }
            
                      else
                      {
                         str=str+x;
                      }
                      
               }

                              help1[u] = str;
              }


              {
                 
              for(auto x:text1)
              {
                
                if(x == ' ')
                {
                   
                   help2[b] = str1;
                   b++;
                   str1.erase();
                }
            
                      else
                      {
                         str1=str1+x;
                      }
                      
               }

                              help2[b] = str1;
              }

               

               for(int i=0; i<20; i++)
               {
                 //cout << help[i] << ",  " << endl;
               }
            
               for(int i=0; i<20; i++)
               {
                  for(int j=0; j<text1.size(); j++)
                  {
                     if(help1[j] == help[i])
                     {
                         int ans = j;
                         ans1 = help2[j];
                         return ans1;
                     }
                  }
                  
               }
               
               
               
            
               
           return ans1;
           
        };
 };
   

    

