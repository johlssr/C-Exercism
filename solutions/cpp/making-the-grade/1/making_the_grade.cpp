#include <array>
#include <string>
#include <vector>

std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> input {};
    for ( int i = 0; i<student_scores.size(); i++) {
        input.emplace_back(student_scores[i]);
    }
    return input;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int result = 0;
    for (int i = 0; i<student_scores.size();i++) {
        if (student_scores[i]<=40) {
            result ++;
        }
    }  
    return result;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    std::array<int, 4> result {41,0,0,0};
    int x = (highest_score-40)/4;
    for (int i = 1; i<4; i++) {
        result[i] = result[i-1] + x;
    }
    return result;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    
    std::vector<std::string> result = {};
    int c = 1;
    for (int i = 0; i<student_scores.size();i++) {
        result.emplace_back(std::to_string(c) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
        c ++;
    }
    return result;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (int i = 0; i<student_scores.size(); i++) {
        if (student_scores[i] == 100) return (student_names[i]);
    }
    return "";
}
