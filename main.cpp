//Student Name: Israel Paredes

//Teacher: Dr. Tyson McMillan

//Date: 11/10/22

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.comLinks to an external site.

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//San francisco, CA = 1, Denver, CO = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp

City 1, Day 1: 59

City 1, Day 2: 61

City 1, Day 3: 63

City 1, Day 4: 63

City 1, Day 5: 61

City 1, Day 6: 58

City 1, Day 7: 59

City 2, Day 1: 48

City 2, Day 2: 38

City 2, Day 3: 35

City 2, Day 4: 36

City 2, Day 5: 42

City 2, Day 6: 31

City 2, Day 7: 36

*/

 

int main()

{

      const int CITY = 2;

      const int WEEK = 7;
      int cityOne[7] = { 59, 61, 63, 63, 61, 58, 59};
      int cityTwo[7] = { 48, 38, 35, 36, 42, 31, 36};
      string cities[2] = {"San Francisco, CA", "Denver, CO"};

    int temperature[CITY][WEEK];

    //Note your input data from the above

    //cout << "Enter all temperature for a week of first city and then second city. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    /*
    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }
    */

    /*
    for(int i = 0; i < WEEK; i++)
    {
      temperature[0][i] = cityOne[i];
      temperature[1][i] = cityTwo[i];
    }
    */

    for(int i = 0; i < CITY; i++)
      {
        for(int j = 0; j< WEEK; j++)
          {
            if(i == 0)
            {
              temperature[i][j] = cityOne[j];
            }
            else
            {
              temperature[i][j] = cityTwo[j];
            }
          }
      }


    ///*
    cout << "\n\nDisplaying Values:\n";

 
    // Accessing the values from the temperature array
    
    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }
    //*/
  
    /* My alternate print out
    cout << "\n\nDisplaying Weather For Week of 11/12/22-11/18/22:\n";
    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {
            cout << cities[i]  << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }
    */
  
   /*For up to 5 Points Extra Credit

      Expand this program:

      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....

      2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....

      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.

      4. print the results of temperature[i][j]; to the screen.

    */

 

 

    return 0;

}

//Source: https://www.programiz.com/cpp-programming/multidimensional-arrays