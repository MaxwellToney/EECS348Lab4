#include<stdio.h>

int main(){
    float temp, scale, conversion, result;
    printf("Enter the Temperature: ");
    scanf("%f", &temp);
    printf("\nChoose the current scale (1)Celsius, (2)Fahrenheit, (3)Kelvin: ");
    scanf("%f", &scale);
    printf("\nConvert to (1)Celsius, (2)Fahrenheit, (3)Kelvin: ");
    scanf("%f", &conversion);
    if (conversion == 1){
        if (scale == conversion){
            celsius_rating(temp);
        }
        else if (scale == 2){
            float new = fahrenheit_to_celsius(temp);
            celsius_rating(new);
        }
        else if (scale == 3){
            float new = kelvin_to_celsius(temp);
            celsius_rating(new);
        }
        else{
            prinf("Invalid Input");
        }
    }
    else if (conversion == 2){
        if (scale == conversion){
            fahrenheit_rating(temp);
        }
        else if (scale == 1){
            float new = celsius_to_fahrenheit(temp);
            fahrenheit_rating(new);
        }
        else if (scale == 3){
            float new = kelvin_to_celsius(temp);
            float newest = celsius_to_fahrenheit(new);
            fahrenheit_rating(newest);
        }
        else{
            prinf("Invalid Input");
        }
    }
    else if (conversion == 3){
        if (scale == conversion){
            kelvin_rating(temp);
        }
        else if (scale == 1){
            float new = celsius_to_kelvin(temp);
            kelvin_rating(new);
        }
        else if (scale == 3){
            float new = fahrenheit_to_celsius(temp);
            float newest = celsius_to_kelvin(new);
            kelvin_rating(newest);
        }
        else{
            prinf("Invalid Input");
        }
    }
}

int celsius_rating (float celsius){
    printf("\nConverted temperature: %f", celsius);
    if (celsius < 0){
        printf("\nTemperature category: Freezing\nWeather advisory: Wear a jacket.");
    }
    else if (celsius < 10){
        printf("\nTemperature category: Cold\nWeather advisory: Consider wearing layers.");
    }
    else if (celsius < 25){
        printf("\nTemperature category: Comfortable\nWeather advisory: Have a lovely day!");
    }
    else if (celsius < 35){
        printf("\nTemperature category: Hot\nWeather advisory: Wear some shorts.");
    }
    else;
        printf("\nTemperature category: Extreme Heat\nWeather advisory: Don't leave the house, you WILL melt.");
    return 0;
}

int fahrenheit_rating (float fah){
    printf("\nConverted temperature: %f", fah);
    if (fah < 32){
        printf("\nTemperature category: Freezing\nWeather advisory: Wear a jacket.");
    }
    else if (fah < 50){
        printf("\nTemperature category: Cold\nWeather advisory: Consider wearing layers.");
    }
    else if (fah < 70){
        printf("\nTemperature category: Comfortable\nWeather advisory: Have a lovely day!");
    }
    else if (fah < 95){
        printf("\nTemperature category: Hot\nWeather advisory: Wear some shorts.");
    }
    else;
        printf("\nTemperature category: Extreme Heat\nWeather advisory: Don't leave the house, you WILL melt.");
    return 0;
}

int kelvin_rating (float kel){
    printf("\nConverted temperature: %f", kel);
    if (kel < 273.15){
        printf("\nTemperature category: Freezing\nWeather advisory: Wear a jacket.");
    }
    else if (kel < 283.15){
        printf("\nTemperature category: Cold\nWeather advisory: Consider wearing layers.");
    }
    else if (kel < 298.15){
        printf("\nTemperature category: Comfortable\nWeather advisory: Have a lovely day!");
    }
    else if (kel < 308.15){
        printf("\nTemperature category: Hot\nWeather advisory: Wear some shorts.");
    }
    else;
        printf("\nTemperature category: Extreme Heat\nWeather advisory: Don't leave the house, you WILL melt.");
    return 0;
}

float celsius_to_fahrenheit (float cel){
    float fahrenheit = (9/5)*cel + 32;
    return fahrenheit;
}

float fahrenheit_to_celsius (float fah){
    float celsius = (5/9)*(fah-32);
    return celsius;
}

float celsius_to_kelvin (float cel){
    float kelvin = cel + 273.15;
    return kelvin;
}

float kelvin_to_celsius (float kel){
    float celsius = kel - 273.15;
    return celsius;
}