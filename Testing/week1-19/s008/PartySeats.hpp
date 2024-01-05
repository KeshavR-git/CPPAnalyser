#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int XX_MARKER_XX;


class PartySeats
{
    public:

    vector<string> seating(vector<string> attendees)
    {
        this->attendees = attendees.size();

        /**
         * Seperate all attendees into the boys and girls vectors. If it fails
         * or there isn't enough, then 
         */
        if (this->attendees < 4 || !seperate_attendees(attendees))
        {
            boys.clear();
            girls.clear();
            
            return vector<string>();
        }

        /**
         * Sort the vectors alphabetically.
         */
        sort(boys.begin(), boys.end(), compareString);
        sort(girls.begin(), girls.end(), compareString);

        /**
         * Return the final seating order vector
         */
        return seatingOrder();
    }

    private:

    vector<string> boys;
    vector<string> girls;

    int attendees;

    /**
     * Sorts the attendees into two seperate vectors and checks whether there
     * is an equal amount of boys and girls. If there is, continue; if not,
     * notify the parent function.
     */
    bool seperate_attendees(vector<string> attendees)
    {
        for (auto attendee : attendees)
        {
            istringstream ss(attendee);
            string name = "", gender = "";

            do {
                /**
                 * The first loop will extract the name.
                 */
                if (name.size() == 0)
                    ss >> name;

                /**
                 * Second loop will extract the gender.
                 */
                else
                    ss >> gender;

            } while (ss);

            if (gender == "boy")
                boys.push_back(name);

            else
                girls.push_back(name);
        }

        /**
         * Make sure there are equal boys and girls and that there are
         * an even number of each.
         */
        if (boys.size() != girls.size() || boys.size() % 2 != 0)
        {
            return false;
        }

        return true;
    }

    /**
     * Finalise the seating order of 'boy' -> 'girl' -> 'boy' -> 'girl'
     */
    vector<string> seatingOrder()
    {
        vector<string> seating;

        /**
         * Set the host and hostess
         */
        seating.push_back("HOST");
        // seating.push_back("HOSTESS");

        int pos = 1, hostessPos = boys.size() / 2;

        for (int i = 0; i < boys.size(); i++)
        {
            /**
             * Alternate the addition of boys and girls to the seating 
             * positions.
             */
            if (i <= (hostessPos - 1))
            {
                seating.push_back(girls.at(i));
                seating.push_back(boys.at(i));
            }

            if (i == (hostessPos - 1))
            {
                seating.push_back("HOSTESS");
            }

            if (i > (hostessPos - 1)) {
                seating.push_back(boys.at(i));
                seating.push_back(girls.at(i));
            }
        }

        boys.clear();
        girls.clear();

        return seating;
    }

    /**
     * Return whether string a is in higher alphabetical order than string b
     */
    static bool compareString(string a, string b)
    {
        return a < b;
    }
};