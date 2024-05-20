#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    string o_name;
    int o_day, o_month, o_year;
 
    cin >> o_name >> o_day >> o_month >> o_year;
 
    string y_name = o_name;
    int y_day = o_day, y_month = o_month, y_year = o_year;
 
      
 
    for (int i = 0; i < n - 1; i++) {
        string c_name;
        int c_day, c_month, c_year;
 
        cin >> c_name >> c_day >> c_month >> c_year;
 
        // old
        if (o_year < c_year) {
            o_year = c_year;
            o_month = c_month;
            o_day = c_day;
            o_name = c_name;
        }
        else if (o_year == c_year) {
            if (o_month < c_month) {
                o_year = c_year;
                o_month = c_month;
                o_day = c_day;
                o_name = c_name;
            }
            else if (o_month == c_month) {
                if (o_day < c_day) {
                    o_year = c_year;
                    o_month = c_month;
                    o_day = c_day;
                    o_name = c_name;
                }
            }
        } 
 
        // youth
        if (y_year > c_year) {
            y_year = c_year;
            y_month = c_month;
            y_day = c_day;
            y_name = c_name;
        }
        else if (y_year == c_year) {
            if (y_month > c_month) {
                y_year = c_year;
                y_month = c_month;
                y_day = c_day;
                y_name = c_name;
            }
            else if (y_month == c_month) {
                if (y_day > c_day) {
                    y_year = c_year;
                    y_month = c_month;
                    y_day = c_day;
                    y_name = c_name;
                }
            }
        }
    }
    cout << o_name << "\n" << y_name;
    return 0;
 
}