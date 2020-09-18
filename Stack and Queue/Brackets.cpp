#include <string>
#include <set>
#include <deque>

int solution(string &S) {
    if (S.size() == 1) return 0;
    if (S.size() == 0) return 1;
    
    std::set<char> opens = {'(', '{', '['};
    std::deque<char> q;
    
    for (int i = 0; i < S.size(); i++){
        char curr = S[i];
        if (opens.find(curr) != opens.end()){
            q.push_back(curr);
        }
        else if (q.empty()){
            return 0;
        }
        else{
            char last = q.back();
            if ((last == '(' && curr == ')') || (last == '{' && curr == '}') || (last == '[' && curr == ']')){
                q.pop_back();
            }
            else{
                return 0;
            }
        }
    }
    
    if (q.empty()){
        return 1;
    }
    else{
        return 0;
    }
}