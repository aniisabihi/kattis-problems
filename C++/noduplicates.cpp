/* EXPLANATION OF THE PROBLEM
 * There's a game where the challenge is to say a phrase
 * where every word of the phrase is unique and no recurrence
 * of a word exists. We want a program that can determine if
 * a phrase has a word or several words that reoccur more than
 * once. Depending on what the program determines, it should
 * let the user know if the phrase they entered had reoccurring
 * words in it.
*/

/* SOLUTION TO THE PROBLEM
 * We read in the input line and first transform the whole phrase
 * into lowercase letters so all the words have the same structure.
 * We then separate each word in the phrase and put them in a map
 * together with their reoccurrence value (1). Before putting a word
 * in the map, we check if the word already exists in the map. If a
 * word exists, the program will stop reading the phrase and display
 * the word "no" indicating that the phrase is not reoccurrence free
 * and the game is lost, and then quit the program. If the program checks
 * every word in the phrase and doesn't find a word that reoccurs, it
 * will display the word "yes" indicating that the phrase is reoccurrence
 * free and the game is won, and then quit the program.
*/

#include <iostream>
#include <sstream>
#include <unordered_map>
#include <algorithm>

bool findRepeatedWords(std::string phrase){

    std::transform(phrase.begin(), phrase.end(), phrase.begin(), ::tolower);

    std::istringstream ss(phrase);
    std::string word;
    std::unordered_map<std::string, int> compareWords;

    while (ss >> word)
    {
        if(compareWords.find(word) != compareWords.end())
            return true;
        else
            compareWords.insert(make_pair(word, 1));
    }

    return false;
}

int main() {

    std::string phrase = " ";
    getline(std::cin, phrase);

    bool repeatsExist = findRepeatedWords(phrase);

    if (!repeatsExist)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;

    return 0;
}