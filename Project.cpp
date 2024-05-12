#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <string>

using namespace std;

struct User {
    string username;
    string rollNumber;
    string password;
};

int main() {
    const int MAX_USERS = 100;
    User users[MAX_USERS];
    int numUsers = 0;

    // Sign up
     cout << "Sign up\n";
    cout << "Enter your username: ";
    cin >> users[numUsers].username;
    cout << "Enter your roll number: " << endl;
    cin >> users[numUsers].rollNumber;
    cout << "Enter your password: ";
    cin >> users[numUsers].password;
    numUsers++;


    // Program runs again
    cout << "\nLogin\n";
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Confirm login credentials
    bool found = false;
    for (int i = 0; i < numUsers; i++) {
        if (users[i].username == username && users[i].password == password) {
            cout << "\n Login successful. Welcome, " << username << "!"<<"\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Invalid username or password.";
        cout<<" ";
        return 1;
    }


    int score = 0;
    string percentage;
    string grade;
    string remarks;
    string userName;
    string rollNumber;
    string opt;

    string myArray[20] = {
        "Q: What is the capital city of Pakistan? \n a) Lahore \n b) Islamabad  \n c) Karachi",
        "Q: Who is the current Deputy Prime Minister of Pakistan? \n a) Arif Alvi \n b) Ishaq Dar  \n c) Mehmood Khan",
        "Q: What is the national poet of Pakistan? \n a) Dr. Allama Iqbal  \n b) John Elia  \n c) Ahmed Faraz",
        "Q: Who is the founder of Pakistan?  \n a) Allama Iqbal  \n b) Quaid-e-Azam Muhammad Ali Jinnah  \n c) Liaquat Ali Khan",
        "Q: Which province of Pakistan is known as the Land of Five Rivers? \n a) Punjab  \n b) Sindh  \n c) Balochistan",
        "Q: What is the national sport of Pakistan? \n a) Cricket  \n b) Football  \n c) Hockey",
        "Q: Which Pakistani city is known as the City of Lights? \n a) Lahore  \n b) Islamabad  \n c) Karachi",
        "Q: What is the currency of Pakistan? \n a) Rupee  \n b) Dollar  \n c) Euro",
        "Q: Who is the current Prime Minister of Pakistan? \n a) Shehbaz Sharif  \n b) Imran Khan  \n c) Benazir Bhutto",
        "Q: What is the national bird of Pakistan? \n a) Peacock  \n b) Chukar Partridge  \n c) Eagle",
        "Q: What is the name of Pakistan's largest province by area? \n a) Punjab  \n b) Sindh  \n c) Balochistan",
        "Q: What is the name of Pakistan's national airline? \n a) Emirates  \n b) PIA (Pakistan International Airlines)  \n c) Qatar Airways",
        "Q: Who is the first female Prime Minister of Pakistan? \n a) Benazir Bhutto  \n b) Fatima Jinnah  \n c) Hina Rabbani Khar",
        "Q: What is the name of Pakistan's highest military award? \n a) Sitara-e-Imtiaz  \n b) Nishan-e-Haider  \n c) Nishan-e-Pakistan",
        "Q: What is the name of the Pakistani film industry? \n a) Lollywood  \n b) Bollywood  \n c) Hollywood",
        "Q: Who is the current President of Pakistan? \n a) Arif Alvi   \n b) Mamnoon Hussain  \n c) Asif Ali Zardari",
        "Q: Which Pakistani city is known as the City of Saints? \n a) Karachi  \n b) Multan  \n c) Lahore",
        "Q: What is the name of Pakistan's national animal? \n a) Markhor  \n b) Snow Leopard  \n c) Bengal Tiger",
        "Q: What is HTML ? \n a) Programming Language  \n b) Scripting Language  \n c) Markup Language",
        "Q: What is the Abbrivation of CSS ? \n a) Cascading Style Sheet  \n b) Cascading Simple Sheet  \n c) Coding Style Sheet",

    };
    // Initialize random seed:
    srand(time(0));

    for (int i = 1; i <= 5; i++)
    {
        cout << " " << endl;
        // Generate random number between 0 and 99
        int randomNumber = rand() % 19;
        // int randomIndex = rand() % 45;
        cout << myArray[randomNumber] << endl;
        cout << "Please select (a, b or c): ";
        cin >> opt;

        //
        string ansArray[20] = {
            "b",
            "b",
            "a",
            "b",
            "a",

            "c",
            "c",
            "a",
            "a",
            "c",

            "c",
            "b",
            "a",
            "b",
            "a",

            "c",
            "b",
            "a",
            "c",
            "a",

        };

        //
        if (opt == ansArray[randomNumber]) // Comparing with correct answers
        {
            // cout << "Correct \n";
            score += 20;
        }
       
    }

    // Result Compiling
    cout << "\n \t\t_____________ *** Result  Sheet *** _____________ \n \n";

   cout << "\t\t Name: " << username << endl;
    cout << "\t\t Roll Number: " << users[0].rollNumber << endl;
    cout << "\t\t Score: " << score << endl;
    cout << "\t\t Precentage: " << score << "%" << endl;


    if (score > 80)
    {

        cout << "\t\tCongratulations!, You got Grade \"A\"\n"; // Use double quotes
    }

    else if (score > 60)
    {
        cout << "\t\tCongratulations!, You got Grade \"B\"\n"; // Use double quotes
    }
    else if (score > 40)
    {
        cout << "\t\tCongratulations!, You got Grade \"C\"\n"; // Use double quotes
    }
    else
    {
        cout << "\t\t Soory!, You were unable to qualify for next semester \n";
    }
    
    
    return 0;
}




