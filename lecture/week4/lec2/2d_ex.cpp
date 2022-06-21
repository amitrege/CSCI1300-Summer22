#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int COLUMNS = 4;

/**
   Computes the row total in a table.
   @param table: a table with 4 columns
   @param row: the row that needs to be totaled
   @return the sum of all elements in the given row
*/
double row_total(double table[][COLUMNS], int row)
{
   double total = 0; 
   for (int j = 0; j < COLUMNS; j++)
   {
      total = total + table[row][j];
   }
   return total;
}

double col_total(double table[][4], int no_rows, int col)
{
   double total = 0;
   for (int i = 0; i < no_rows; i++)
   {
      total = total + table[i][col];
   }
   return total;
}

int main()
{
   const int MONTHS = 12;
   const int YEARS = 4;

   string months[] =
      {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

   // C++ uses an array with two subscripts to store a two-dimensional array. 
   // For example, here is the definition of an array with 12 rows and 4 columns, 
   // suitable for storing our sales data:
   double sales[MONTHS][YEARS] ={{57, 47.2, 61, 32},
                                 {68.1, 34, 46, 54},
                                 {43, 58, 38.6, 67.5},
                                 {82.4, 43.2, 57, 29},
                                 {27, 34.5, 42.4, 35},
                                 {34.8, 18, 31, 80},
                                 {55, 21, 47.1, 115},
                                 {61.6, 71.7, 67, 98},
                                 {107, 91.4, 87.3, 100},
                                 {86, 51, 54.1, 65},
                                 {142, 112, 173.5, 210.5},
                                 {74, 83, 107.2, 140}};

   cout << setw(15) << " Months" << setw(8) << "2018"<< setw(8) << "2019" << setw(8) << "2020" << setw(8) << "2021" << setw(8) << "Total" << endl;

   // Print countries, counts, and row totals
   for (int i = 0; i < MONTHS; i++)
   {
      cout << setw(15) << months[i];
      // Process the ith row
      for (int j = 0; j < YEARS; j++)
      {
         cout << setw(8) << sales[i][j];
      }
      double total = row_total(sales, i);
      cout << setw(8) << total << endl; 
   }
   
   
   cout << setw(15) << "Total" << setw(8) <<col_total(sales, MONTHS, 0);
   cout << setw(8) << col_total(sales, MONTHS, 1);
   cout << setw(8) << col_total(sales, MONTHS, 2);
   cout << setw(8) << col_total(sales, MONTHS, 3) << endl;

   return 0;
}