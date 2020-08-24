#include <bits/stdc++.h>
using namespace std;
//This function is to convert degree into Radian!
long double Radian_conversion(const long double degree)
{
    long double single_degree = (M_PI) / 180;
    return (single_degree * degree);
}
long double distance_formula(long double tower_latitude, long double tower_longitude, long double jason_latitude, long double jason_longitude)
{
    //Firstly, convert the Lat & Long from degree to Radian!!!
    tower_latitude = Radian_conversion(tower_latitude);
    tower_longitude = Radian_conversion(tower_longitude);
    jason_latitude = Radian_conversion(jason_latitude);
    jason_longitude = Radian_conversion(jason_longitude);
    long double lof = jason_longitude - tower_longitude;
    long double laf = jason_latitude - tower_latitude;
    //By applying the haversine formula we'll get
    long double final_answer = pow(sin(laf / 2), 2) + cos(tower_latitude) * cos(jason_latitude) * pow(sin(lof / 2), 2);
    final_answer = 2 * asin(sqrt(final_answer));
    //Given radius of Earth, calculating the final result!
    long double earth_radius = 6371;
    final_answer = final_answer * earth_radius;
    return final_answer;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long double jason_latitude;
    long double jason_longitude;
    long double latitude_array[n];
    long double longitude_array[n];
    long int height_of_towers[n];
    long double final_distance_array[n];
    long double coverage_range_array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> latitude_array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> longitude_array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> height_of_towers[i];
    }
    cin >> jason_latitude >> jason_longitude;
    for (int i = 0; i < n; i++)
    {
        final_distance_array[i] = distance_formula(latitude_array[i], longitude_array[i], jason_latitude, jason_longitude);
        //Applying the distance formula to calculate distance between Jason and all towers!
    }
    for (int i = 0; i < n; i++)
    {
        coverage_range_array[i] = sqrt(2 * 6371 * height_of_towers[i]);
    }
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (coverage_range_array[i] >= final_distance_array[i])
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}