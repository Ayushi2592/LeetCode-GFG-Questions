#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> findNextGreaterElements(const vector<int>& arr) {
    vector<int> result(arr.size());
    stack<int> st;

    // Traverse the array in reverse order
    for (int i = arr.size() - 1; i >= 0; i--) {
        // Pop elements from the stack smaller than or equal to the current element
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        // If the stack is empty, there is no greater element
        if (st.empty()) {
            result[i] = -1;
        } else {
            result[i] = st.top();
        }

        // Push the current element to the stack
        st.push(arr[i]);
    }

    return result;
}

int main() {
    // Example usage
    vector<int> arr = {4, 6, 3, 2, 8, 1, 9};
    vector<int> nextGreater = findNextGreaterElements(arr);

    cout << "Next Greater Elements: ";
    for (int i = 0; i < nextGreater.size(); i++) {
        cout << nextGreater[i] << " ";
    }
    cout << endl;

    return 0;
}
