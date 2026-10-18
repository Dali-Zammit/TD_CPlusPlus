
#ifndef SEARCHINGALGORITHM_H
#define SEARCHINGALGORITHM_H

#include <vector>
#include <iostream>

class SearchingAlgorithm {
protected:
    int numberComparisons;
    static int totalComparisons;
    static int totalSearch;
    static double averageComparisons;

public:
    // Question 2 : constructeur par défaut
    SearchingAlgorithm();
    
    // Question 3 : fonction virtuelle pure
    virtual int search(const std::vector<int>& elements,
                       int target) = 0;

    // Question 4 : affichage des résultats
    void displaySearchResults(std::ostream& out,
                              int results,
                              int target);
                              
};
#endif
