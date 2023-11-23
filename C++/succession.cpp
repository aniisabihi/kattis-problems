/* EXPLANATION OF THE PROBLEM
 * A king in the country Utopia has died. To determine who the next ruler should be, all
 * that claim the throne need their blood compared to each other. The next ruler must have
 * the most amount of the country founder's blood in their veins. To determine how much of
 * a claimant's blood consists of the founder's blood, we check how far the claimant descents
 * from the founder. For example, if a claimant is the child of the founder, it will have
 * 1/2 of the founder's blood in their veins. The program input will be lines that include
 * the founder's name, different family relations (a child and its parents), claimants of the
 * throne, and numbers that indicate how many lines of the input are family relations and claimants.
*/

/* SOLUTION TO THE PROBLEM
 * Start reading the first input line and save the first value as numberOfRelations (N)
 * and the second value as numberOfClaimants (M). The second input line is read and saved
 * as the founder's name. We store the founder and its blood value (1 representing 100%)
 * in a map called bloodValues. Next, we read the following N lines and separate each name
 * (child, parent1, parent2) into strings. A multimap called family stores every child's
 * relation with each of its parents. Next, the claimants are read in the following M lines.
 * For each claimant, we check if their name occurs in family; if it doesn't we set the
 * claimant's blood to 0, otherwise, we check how the claimant descends from the founder.
 * The claimant's blood is determined by calculating the parent's blood recursively and
 * summing it up. Every time a claimant's blood value is larger than the previous claimant,
 * the value is stored as bestBlood and the claimant's name as heir. When every claimant is
 * checked, the program outputs the heir.
*/

#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>

std::map<std::string, double> bloodValues;

double findBlood(const std::string& person, const std::string& founder,
                const std::multimap <std::string, std::string>& family){

    if(bloodValues.find(person) != bloodValues.end())
        return bloodValues[person];

    double blood = 0.0;
    for (auto & itr : family)
        if (itr.first == person)
            blood += findBlood(itr.second, founder, family) / 2.0;

    bloodValues.insert(make_pair(person, blood));

    return blood;
}

std::string findHeir(const std::string& founder, const int N, const int M){

    double claimsBlood, bestBlood = 0.0;
    std::string relation, child, parent2, parent1, claim, heir;
    std::multimap<std::string, std::string> family;

    for(int i = 0; i < N; i++)
    {
        std::getline( std::cin, relation );
        std::istringstream ss(relation);
        ss >> child >> parent1 >> parent2;

        family.insert(std::pair <std::string, std::string> (child, parent1));
        family.insert(std::pair <std::string, std::string> (child, parent2));
    }

    for(int i = 0; i < M; i++)
    {
        std::getline( std::cin, claim );

        if(family.find(claim) != family.end())
            claimsBlood = findBlood(claim, founder, family);
        else
            claimsBlood = 0.0;

        if(claimsBlood > bestBlood)
        {
            bestBlood = claimsBlood;
            heir = claim;
        }
    }

    return heir;
}

int main() {

    std::string founder, numbers, heir;
    int numberOfRelations, numberOfClaims;

    std::getline( std::cin, numbers );
    std::istringstream ss(numbers);
    ss >> numberOfRelations >> numberOfClaims;

    std::getline( std::cin, founder );
    bloodValues.insert(make_pair(founder, 1.0));

    heir = findHeir(founder, numberOfRelations, numberOfClaims);
    std::cout << heir;

    return 0;
}