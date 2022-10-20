// HotelManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;

    // quantity rooms and foods 
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodle = 0, Qshake = 0, Qchicken = 0;

    // sold rooms and foods
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodle = 0, Sshake = 0, Schicken = 0;

    // total prices of the rooms and foods 
    int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodle = 0, total_shake = 0, total_chicken = 0;

    
    cout << "\n\t\t\t Quantity of items we have.";

    cout << "\n Rooms available : ";
    cin >> Qrooms;
    cout << "\n Quantity of pasta : ";
    cin >> Qpasta;
    cout << "\n Quantity of burger : ";
    cin >> Qburger;
    cout << "\n Quantity of noodles : ";
    cin >> Qnoodle;
    cout << "\n Quantity of shake : ";
    cin >> Qshake;
    cout << "\n Quantity of chicken : ";
    cin >> Qchicken;

    m: // goto menu again 
    cout << "\n\t\t\t Please, Select from the menu options: " << endl;
    cout << "\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodle";
    cout << "\n5) Shake";
    cout << "\n6) Chicken-roll";
    cout << "\n7) Information regarding sales and collection.";
    cout << "\n8) Exit";

    cout << "\n\n Please, Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\nEnter the number of the rooms you want: ";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            total_rooms = total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "room/rooms have benn alloted to you!";
        }
        else
        {
            cout << "\n\tOnly " << Qrooms - Srooms << " Rooms remaining in hotel.";
        }
        break;

    case 2:
        cout << "\n\nEnter Pasta Quantity : ";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            total_pasta = total_pasta + quant * 250;
            cout << "\n\n\t\t" << quant << " pasta is order!";
        }
        else
        {
            cout << "\n\tOnly " << Qpasta - Spasta << " Pasta remaining in hotel.";
        }
        break;

    case 3:
        cout << "\n\nEnter Burger Quantity : ";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            total_burger = total_burger + quant * 250;
            cout << "\n\n\t\t" << quant << " burger is order!";
        }
        else
        {
            cout << "\n\tOnly " << Qburger - Sburger << " Pasta remaining in hotel.";
        }
        break;

    case 4:
        cout << "\n\nEnter Noodles Quantity : ";
        cin >> quant;
        if (Qnoodle - Snoodle >= quant)
        {
            Snoodle = Snoodle + quant;
            total_noodle = total_noodle + quant * 140;
            cout << "\n\n\t\t" << quant << " noodles is order!";
        }
        else
        {
            cout << "\n\tOnly " << Qnoodle - Snoodle << " Noodles remaining in hotel.";
        }
        break;

    case 5:
        cout << "\n\nEnter Shake Quantity : ";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            total_shake = total_shake + quant * 120;
            cout << "\n\n\t\t" << quant << " shake is order!";
        }
        else
        {
            cout << "\n\tOnly " << Qnoodle - Snoodle << " shake remaining in hotel.";
        }
        break;

    case 6:
        cout << "\n\nEnter Chicken Quantity : ";
        cin >> quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;
            total_chicken = total_chicken + quant * 150;
            cout << "\n\n\t\t" << quant << " chicken is order!";
        }
        else
        {
            cout << "\n\tOnly " << Qchicken - Schicken << " chicken remaining in hotel.";
        }
        break;

    case 7:
        cout << "\n\tDetails of sales and collections";
        cout << "\n\n Number of rooms we had : " << Qrooms;
        cout << "\n\n Number of rooms we gave for rent : " << Srooms;
        cout << "\n\n Remaining rooms : " << Qrooms - Srooms;
        cout << "\n\n Total rooms collection for the day : " << total_rooms;

        cout << "\n\n Number of pastas we had : " << Qpasta;
        cout << "\n\n Number of pastas we sold : " << Spasta;
        cout << "\n\n Remaining pastas : " << Qpasta - Spasta;
        cout << "\n\n Total Pasta collection for the day : " << total_pasta;

        cout << "\n\n Number of burger we had : " << Qburger;
        cout << "\n\n Number of burgers we sold : " << Sburger;
        cout << "\n\n Remaining burgers : " << Qburger - Sburger;
        cout << "\n\n Total burger collection for the day : " << total_burger;

        cout << "\n\n Number of noodles we had : " << Qnoodle;
        cout << "\n\n Number of noodles we sold : " << Snoodle;
        cout << "\n\n Remaining noodles : " << Qnoodle - Snoodle;
        cout << "\n\n Total noodle collection for the day : " << total_noodle;

        cout << "\n\n Number of shakes we had : " << Qshake;
        cout << "\n\n Number of shakes we sold : " << Sshake;
        cout << "\n\n Remaining shakes : " << Qshake - Sshake;
        cout << "\n\n Total shakes collection for the day : " << total_shake;

        cout << "\n\n Number of chicken-roll we had : " << Qchicken;
        cout << "\n\n Number of chicken-rolls we sold : " << Schicken;
        cout << "\n\n Remaining checken-rolls : " << Qchicken - Schicken;
        cout << "\n\n Total chicken-roll collection for the day : " << total_chicken;

        cout << "\n\n\n Total collection for the day: " << total_rooms + total_pasta + total_burger + total_noodle + total_shake + total_chicken;
        break;

    case 8:
        exit(0);

    default:
        cout << "\n Please, Select the numbers mentioned above!";
        break;
    }
    goto m; // goto the menu lists 

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
