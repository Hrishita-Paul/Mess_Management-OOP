#include <bits/stdc++.h>
using namespace std;

map<string, pair<string, string>> mpp1;
map<int, vector<string>> mpp2;
map<int, vector<float>> mpp3;

class Registration
{

public:
    void createStudent(string sName, int sID, string hostelNumber)
    {
        mpp2[sID] = {sName, hostelNumber};
    }
    void updateStudent(int sID)
    {
        string sName, hostelNumber;
        cout << "Enter student's name:-";
        cin.ignore(1, '\n');
        getline(cin, sName);
        cout << "Enter latest hostel number:-";
        cin >> hostelNumber;
        mpp2[sID] = {sName, hostelNumber};
    }
};
class Login : public Registration
{
protected:
    int ID;

public:
    string sName;
    string hostelNumber;

public:
    void setID(int sID)
    {
        ID = sID;
    }

    string setName_HostelNumber(int ID)
    {
        sName = mpp2[ID][0];
        hostelNumber = mpp2[ID][1];
    }
};
class MessMenu : public Login
{
private:
    string day;

public:
    void getMenu(Login log)
    {

        cout << "Enter day(eg:-Sunday):-";
        cin >> day;
        switch (log.hostelNumber[0])
        {

        case 'B':
            cout << "\nBoys hostel mess menu\n"
                 << endl;
            if (day == "Sunday")
            {
                cout << "Breakfast:- Sprout, bread, aloo paratha, chutney, tea/coffee, boiled egg/banana.\nLunch:- Rice, Dal, Roti, Sabji, Soyabean, Chutney.\nSnacks:- Tea, Aloo Chop/Bread Pakora.\nDinner:- Pulao, Methi puri, Dal Makhni, Chicken/Paneer." << endl;
            }
            else if (day == "Monday")
            {
                cout << "Breakfast:-Sprout,bread,aloo matar,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Rajma, Chutney\nSnacks:- Tea, Onion Pakora\nDinner:- Rice, Roti, Dal, Egg Curry/Chola Masala." << endl;
            }
            else if (day == "Tuesday")
            {
                cout << "Breakfast:-Sprout,bread,Veg Burger,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Chana Sabji, Chutney\nSnacks:- Tea, Pasta\nDinner:- Rice, Roti, Dal, Butter Chicken/ButterPaneer." << endl;
            }
            else if (day == "Wednesday")
            {
                cout << "Breakfast:-Sprout,bread,chola bhatura,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Dal Pakora, Dahi\nSnacks:- Tea, Poha/Upma\nDinner:- Rice, Roti, Dal, Garlic Chicken/Matar Paneer." << endl;
            }
            else if (day == "Thursday")
            {
                cout << "Breakfast:-Sprout,bread,Idli Sambhar/Curry maggie,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Mixed Veg, Chutney\nSnacks:- Tea, Veg Chow\nDinner:- Rice, Roti, Dal, Shahi Paneer." << endl;
            }
            else if (day == "Friday")
            {
                cout << "Breakfast:-Sprout,bread,Satu Parantha,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Mixed Veg, Chutney\nSnacks:- Tea, Pao/Samosa\nDinner:- Chicken Biryani/Paneer Biryani." << endl;
            }
            else if (day == "Saturday")
            {
                cout << "Breakfast:-Sprout,bread,dosa/uttapam,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Khichdi, Chutney\nSnacks:- Tea, Chat\nDinner:- Rice, Roti, Dal, Fish/Mushroom Matar Masala." << endl;
            }
            else
            {
                cout << "Entered day is invalid.";
            }
            break;

        case 'G':
            cout << "\nGirls hostel mess menu\n"
                 << endl;

            if (day == "Sunday")
            {
                cout << "Breakfast:- Sprout, bread, aloo paratha, chutney, tea/coffee, boiled egg/banana.\nLunch:- Rice, Dal, Roti, Sabji, Soyabean, Chutney.\nSnacks:- Tea, Aloo Chop/Bread Pakora.\nDinner:- Pulao, Methi puri, Dal Makhni, Chicken/Paneer." << endl;
            }
            else if (day == "Monday")
            {
                cout << "Breakfast:-Sprout,bread,aloo matar,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Rajma, Chutney\nSnacks:- Tea, Onion Pakora\nDinner:- Rice, Roti, Dal, Egg Curry/Chola Masala." << endl;
            }
            else if (day == "Tuesday")
            {
                cout << "Breakfast:-Sprout,bread,Veg Burger,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Chana Sabji, Chutney\nSnacks:- Tea, Pasta\nDinner:- Rice, Roti, Dal, Butter Chicken/ButterPaneer." << endl;
            }
            else if (day == "Wednesday")
            {
                cout << "Breakfast:-Sprout,bread,chola bhatura,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Dal Pakora, Dahi\nSnacks:- Tea, Poha/Upma\nDinner:- Rice, Roti, Dal, Garlic Chicken/Matar Paneer." << endl;
            }
            else if (day == "Thursday")
            {
                cout << "Breakfast:-Sprout,bread,Idli Sambhar/Curry maggie,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Mixed Veg, Chutney\nSnacks:- Tea, Veg Chow\nDinner:- Rice, Roti, Dal, Shahi Paneer." << endl;
            }
            else if (day == "Friday")
            {
                cout << "Breakfast:-Sprout,bread,Satu Parantha,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Mixed Veg, Chutney\nSnacks:- Tea, Pao/Samosa\nDinner:- Chicken Biryani/Paneer Biryani." << endl;
            }
            else if (day == "Saturday")
            {
                cout << "Breakfast:-Sprout,bread,dosa/uttapam,chutney,tea/coffee, boiled egg/banana\nLunch:- Rice, Dal, Roti, Sabji, Khichdi, Chutney\nSnacks:- Tea, Chat\nDinner:- Rice, Roti, Dal, Fish/Mushroom Matar Masala." << endl;
            }
            else
            {
                cout << "Entered day is invalid.";
            }

            break;
        default:
            cout << "No case is running." << endl;
            break;
        }
    }
    void getCaterer()
    {
        string hostelName;
        cout << "Enter your hostel name:-";
        cin >> hostelName;
        cout << "Caterer name of " << hostelName << " is " << mpp1[hostelName].first << endl;
    }
};
class MMC : public Login
{
public:
    void postComplaint()
    {
        int choice;
        cout << "\nEnter 1,2 or 3\n1.Quality of food\n2.Mess hygiene\n3.Mess timings\n\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "\nRaise complaint regarding food served on which day:- ";
            cout << "\n";
            string timeOfDay;
            cin >> timeOfDay;
            cout << "\n";
            cout << "I would like to raise complaint regarding the quality of food served during " << timeOfDay << "\n";

            break;
        }
        case 2:
            cout << "\nI would like to bring to the notice of the authorities about the untidy maintenance of the mess.Kindly keep the serving place clean.\n";

            break;
        case 3:
            cout << "\nIt is a request to serve the morning meals by 7:45 a.m. positively as we may have classes at 8 a.m. on some days. Also, sometimes,the breakfast isn't even prepared before our 9 a.m class. Kindly implement proper mess timings.\n";

            break;
        }
    }
    void showMembers()
    {
        string hostelName;
        cout << "Enter hostel name:-";
        cin >> hostelName;
        cout << "MMC member name of " << hostelName << " is " << mpp1[hostelName].second << endl;
    }
};
class CreateMessBill : public Registration
{
public:
    int sID;

protected:
    int daysOfFoodIntake;
    float amount;
    float fine;
    float totalBill;
    float refund;

public:
    void prepareMessBill()
    {
        cout << "Enter days of food intake:- ";
        cin >> daysOfFoodIntake;
        cout << "Enter hostel number:-";
        string hostelNumber;
        cin >> hostelNumber;
        if (hostelNumber[0] == 'B')
        {
            amount = 116 * daysOfFoodIntake;
        }
        else
        {
            amount = 100 * daysOfFoodIntake;
        }
    }
    void imposedFine()
    {

        cout << "\nEnter the fine amount imposed:- ";
        cin >> fine;
    }
    void totalMessBill()
    {
        totalBill = amount + fine;
    }
    void refundAmount()
    {
        refund = 18000 - totalBill;
        mpp3[sID] = {amount, fine, totalBill, refund};
    }
};
class ShowMessBill : public CreateMessBill
{
public:
    int ID;

public:
    void setID(int sID)
    {
        ID = sID;
    }
    float showAmount()
    {
        return mpp3[ID][0];
    }
    float showImposedFine()
    {
        return mpp3[ID][1];
    }
    float showTotalMessBill()
    {
        return mpp3[ID][2];
    }
    float showRefund()
    {
        return mpp3[ID][3];
    }
};
int main()
{
    mpp1["G1"] = {"Paresh Choudhury", "Madhusmita Dey"};
    mpp1["G2"] = {"Paresh Choudhury", "Sheetal Rani"};
    mpp1["G3"] = {"Rohit Das", "Kiran Jain"};
    mpp1["B1"] = {"Rahul Banik", "Sushmit Nath"};
    mpp1["B2"] = {"Mohan Kar", "Shyam Choudhury"};
    mpp1["B3"] = {"Bipin Purkaystha", "Tushar Kalita"};
    mpp1["B4"] = {"Rohit Das", "Shaan Borah"};
    mpp1["B5"] = {"Rahul Banik", "Shayan Deb"};
    mpp1["B6"] = {"Bipin Purkaystha", "Meet Singh"};
    mpp1["B7"] = {"Mohan Kar", "Meghnath Rao"};
    mpp1["B8"] = {"Rohit Das", "Mridul Roy"};
    mpp1["B9"] = {"Mohan Kar", "Jay Rawat"};
    while (1)
    {
        cout << "\n\nChoose your role:-" << endl;
        cout << "1.DeanSW office" << endl;
        cout << "2.Supervisor" << endl;
        cout << "3.Student" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter your choice:-";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "\nEnter the password:";
            string password;
            cin >> password;
            if (password == "admin@NITS")
            {
                cout << "\n\nWelcome to the DeanSW office portal" << endl;
                cout << "\nChoose one of the following:-" << endl;
                cout << "1.Create Student" << endl;
                cout << "2.Update existing student details" << endl;
                cout << "3.Exit" << endl;
                Registration dean;
                cout << "\nEnter your choice:-";
                int choiceRegister;
                cin >> choiceRegister;
                switch (choiceRegister)
                {
                    int sID;
                case 1:
                {
                    string sName;
                    string hostelNumber;
                    cout << "Enter student name:-";
                    cin.ignore(1, '\n');
                    getline(cin, sName);
                    cout << "Enter Student scholar ID:-";
                    cin >> sID;
                    cout << "Enter hostel number:-";
                    cin >> hostelNumber;
                    dean.createStudent(sName, sID, hostelNumber);
                }
                break;
                case 2:
                {
                    cout << "Enter student's scholar ID:-";
                    cin >> sID;
                    dean.updateStudent(sID);
                }
                break;
                case 3:
                    exit(1);
                }
            }
            else
            {
                cout << "Please enter the correct password!" << endl;
            }
        }
        break;
        case 2:
        {
            cout << "\nEnter the password:";
            string password;
            cin >> password;
            if (password == "super@NITS")
            {
                cout << "\n\nWelcome to the supervisor portal" << endl;
                CreateMessBill c;
                cout << "Enter student's scholar ID:-";
                int ID;
                cin >> ID;
                c.sID = ID;
                c.prepareMessBill();
                c.imposedFine();
                c.totalMessBill();
                c.refundAmount();
            }
            else
            {
                cout << "Please enter the correct password!" << endl;
            }
        }
        break;
        case 3:
        {
            cout << "\n\nWelcome to the student portal" << endl;
            Login log;
            cout << "Enter your scholar ID:-";
            int sID;
            cin >> sID;
            log.setID(sID);
            if (mpp2.find(sID) != mpp2.end())
            {

                cout << "Logged in successfully" << endl;
                log.setName_HostelNumber(sID);
                cout << "Welcome " << log.sName << endl;
                cout << "Your hostelNumber is:- " << log.hostelNumber << endl;
            }
            else
            {
                cout << "Registration is incomplete" << endl;
                exit(1);
            }
            while (1)
            {
                cout << "\n\nChoose any one of the following:-" << endl;
                cout << "1. View mess menu" << endl;
                cout << "2. Get caterer name" << endl;
                cout << "3. Show MMC member name" << endl;
                cout << "4. Post complaints" << endl;
                cout << "5. View mess bill" << endl;
                cout << "6. Exit" << endl;
                int schoice;
                cout << "\nEnter your choice:-";
                cin >> schoice;
                MessMenu menu;
                MMC mmc;
                ShowMessBill sb;
                switch (schoice)
                {

                case 1:
                    menu.getMenu(log);
                    break;
                case 2:
                    menu.getCaterer();
                    break;
                case 3:
                    mmc.showMembers();
                    break;
                case 4:
                    mmc.postComplaint();
                    break;
                case 5:
                {
                    if (mpp3.find(sID) != mpp3.end())
                    {
                        sb.setID(sID);
                        cout << "Amount is:-" << sb.showAmount() << endl;
                        cout << "Imposed Fine is:-" << sb.showImposedFine() << endl;
                        cout << "Total mess bill is:- " << sb.showTotalMessBill() << endl;
                        cout << "Refund amount is:-" << sb.showRefund() << endl;
                        ;
                    }
                    else
                    {
                        cout << "Mess bill is not prepared yet" << endl;
                    }
                }
                break;

                case 6:
                    exit(1);
                }
            }
        }
        break;
        case 4:
            exit(1);
        }
    }
    return 0;
}
