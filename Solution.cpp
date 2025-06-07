/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;               // Number of coins at this node
    TreeNode *left;        // Pointer to left child
    TreeNode *right;       // Pointer to right child
    
    // Constructors
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    /**
     * Helper function to perform post-order traversal and
     * calculate the number of moves required.
     * 
     * @param root Pointer to the current node.
     * @param moves Reference to the total number of moves.
     * @return Net coins to pass to the parent node (positive: excess, negative: needs).
     */
    int distributeCoinss(TreeNode* root, int &moves) {
        if (!root)
            return 0;

        // Get excess/deficit from left and right subtrees
        int l = distributeCoinss(root->left, moves);
        int r = distributeCoinss(root->right, moves);

        // Total moves increase by absolute imbalance at this node
        moves += abs(l) + abs(r);

        // Return total excess coins (current node + children - 1 needed coin)
        return l + r + root->val - 1;
    }

    /**
     * Main function to be called. Initializes moves and starts recursion.
     * 
     * @param root Pointer to the root of the binary tree.
     * @return Total number of moves required to distribute coins.
     */
    int distributeCoins(TreeNode* root) {
        int moves = 0;
        distributeCoinss(root, moves);
        return moves;
    }
};
