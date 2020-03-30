#include <iostream>
#include <stdexcept>
#include <cstring>
#include "PhoneticFinder.hpp"
using namespace std;
 
 
 namespace phonetic
 {
       
        string find(string text ,string word)
        {
              string text1 = text;
              string word1 = word;
              string word2 = word;
              
              char c[] = {'w','f','p','j','k','q','z','t','u','y'};  // the letters that can change
              char c1[] = {'v','b','f','g','c','k','s','d','o','i'};
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

              // turn the word to lowercase
              for(int i=0; i<word1.size(); i++)
              {
                  if(word1[i]>=65 && word1[i]<=92)
                  {
	                   word1[i] = word1[i]+32;
                  }
              }


             // create array of strings
         {  
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
              for(auto y:text1)
              {
                
                if(y == ' ')
                {
                   
                   help2[m] = str1;
                   m++;
                   str1.erase();
                }
            
                      else
                      {
                         str1=str1+y;
                      }
                      
               }

                  help2[m] = str1;
         }

               for(int i=0; i<20; i++)
               {
                    for(int j=0; j<word.size(); j++) 
                    {
                       string h = help1[i];
                       if(h.size() == word.size())
                       {
                          if(h[j] != word1[j] || h[j] == word1[j])
                          {
                             if
                             (
                                (word1[j] == 'w' && h[j] == 'v')  || (word1[j] == 'v' && h[j] == 'w') || 

                                (word1[j] == 'b' && h[j] == 'f')  || (word1[j] == 'f' && h[j] == 'b') ||

                                (word1[j] == 'b' && h[j] == 'p')  || (word1[j] == 'p' && h[j] == 'b') ||

                                (word1[j] == 'f' && h[j] == 'p')  || (word1[j] == 'p' && h[j] == 'f') ||

                                (word1[j] == 'g' && h[j] == 'j')  || (word1[j] == 'j' && h[j] == 'g') ||

                                (word1[j] == 'c' && h[j] == 'k')  || (word1[j] == 'k' && h[j] == 'c') ||

                                (word1[j] == 'k' && h[j] == 'q')  || (word1[j] == 'q' && h[j] == 'k') ||

                                (word1[j] == 's' && h[j] == 'z')  || (word1[j] == 'z' && h[j] == 's') ||

                                (word1[j] == 'd' && h[j] == 't')  || (word1[j] == 't' && h[j] == 'd') ||

                                (word1[j] == 'o' && h[j] == 'u')  || (word1[j] == 'u' && h[j] == 'o') ||

                                (word1[j] == 'i' && h[j] == 'y')  || (word1[j] == 'y' && h[j] == 'i') ||

                                (word1[j] == 'c' && h[j] == 'q')  || (word1[j] == 'q' && h[j] == 'c') ||

                                (word1[j] == h[j])
                                
                              ) 
                              {
                                 k++;
                              }
                               if(k == word.size())
                               {
                                  string ans1 = help2[i];
                                  return ans1;
                               }
                               
                          } 
                       }
                    }
                    k=0;
               }

               for(int i=0; i<20; i++)
               {
                  if(help1[i] == word)
                  {
                     return word;
                  }
                  else
                  {
			  throw invalid_argument("did not found the word "+ b +" in the text");
                  }
               }

               
               string ans = " ";
               return ans;
            
           
        };
 };
   

    

 
