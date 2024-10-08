    /**
     * Author: Farid Naif
     * Date: Semptember 9, 2024
     *
     * This program is about calculating the air distance between two locations
     * on Earth. Given their latitude and longitude in degrees.
     */


    #include <stdio.h>
    #include <math.h>

    #define R 6371
    #define PI 3.14159265358979323846

    double degrees_to_radians(double degree) {
    return degree * PI / 180;
    }

    int main () {
    double lat1, lon1, lat2, lon2;
    double d, delta_lon;

    printf("Enter the latitude of the origin (in degrees): ");
    scanf("%lf", &lat1);

    printf("Enter the longitude of the origin (in degrees): ");
    scanf("%lf", &lon1);

    printf("Enter the latitude of the destination (in degrees): ");
    scanf("%lf", &lat2);

    printf("Enter the longitude of the destination (in degrees): ");
    scanf("%lf", &lon2);

    lat1 = degrees_to_radians(lat1);
    lon1 = degrees_to_radians(lon1);
    lat2 = degrees_to_radians(lat2);
    lon2 = degrees_to_radians(lon2);

    delta_lon = lon2 - lon1;

    d = acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(delta_lon)) * R;

    printf("\nLocation Distance\n");
    printf("========\n");
    printf("Origin: (%lf, %lf)\n", lat1 * 180 / PI, lon1 * 180 / PI);
    printf("Destination: (%lf, %lf)\n", lat2 * 180 / PI, lon2 * 180 / PI);
    printf("Air distance is %lf km\n", d);

    return 0;
}
