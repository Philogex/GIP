#include <iostream>
using std::cout, std::cin, std::endl;


int main() {
    int total_votes, first_candidate, second_candidate, third_candidate = 0;


    cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmen ein: ? ";
    cin >> total_votes;
    cout << "Bitte geben Sie die Anzahl Stimmen des ersten Kandidaten ein: ? ";
    cin >> first_candidate;
    cout << "Bitte geben Sie die Anzahl Stimmen des zweiten Kandidaten ein: ? ";
    cin >> second_candidate;

    third_candidate = total_votes - first_candidate - second_candidate; 
    cout << "Auf den dritten Kandidaten sind somit " << third_candidate << " Stimmen entfallen.\n";

    double one_vote_percent = 100. / total_votes;
    double first_candidate_percent = one_vote_percent * first_candidate;
    double second_candidate_percent = one_vote_percent * second_candidate;
    double third_candidate_percent = one_vote_percent * third_candidate;
    cout << "Kandidat 1 erhielt " << first_candidate_percent <<"% der Stimmen.\n";
    cout << "Kandidat 2 erhielt " << second_candidate_percent <<"% der Stimmen.\n";
    cout << "Kandidat 3 erhielt " << third_candidate_percent <<"% der Stimmen." << endl;
    system("pause");
    return 0;
}