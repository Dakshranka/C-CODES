#include <stdio.h>
#include <string.h>

int main() {
    char car_type[10];
    float car_price, extra_fitting_price, discount = 0, gst, total, net;
    printf("Enter the type of car (Hatchback/Sedan/SUV/MUV): ");
    scanf("%s", car_type);
    printf("Enter the price of the car: ");
    scanf("%f", &car_price);
    printf("Enter the extra fitting price of the car: ");
    scanf("%f", &extra_fitting_price);
    total = car_price + extra_fitting_price;
    if (strcmp(car_type, "Hatchback") == 0) {
        discount = total * 0.03;
    } else if (strcmp(car_type, "Sedan") == 0) {
        discount = total * 0.05;
    } else if (strcmp(car_type, "SUV") == 0) {
        discount = total * 0.10;
    } else if (strcmp(car_type, "MUV") == 0) {
        discount = total * 0.15;
    } else {
        printf("Invalid Type\n");
        return 0;
    }
    gst = (total - discount) * 0.12;
    net = total - discount + gst;
    printf("Net amount to be paid: %.2f\n", net);
    return 0;
}
