
#include <iostream>
#include <stack>
using namespace std;

class PostfixEvaluator {
public:
    int evaluate(string exp) {
        stack<int> st;

        for (char c : exp) {
            if (isdigit(c))
                st.push(c - '0');
            else {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if (c == '+') st.push(a + b);
                if (c == '-') st.push(a - b);
                if (c == '*') st.push(a * b);
                if (c == '/') st.push(a / b);
            }
        }
        return st.top();
    }
};

int main() {
    PostfixEvaluator p;
    cout << "Result: " << p.evaluate("23*54*+9-") << endl;
    return 0;
}
