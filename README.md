# Leetcode-979.-Distribute-Coins-in-Binary-Tree
# ⚖️ Distribute Coins in Binary Tree

This project solves the classic **"Distribute Coins in Binary Tree"** problem using a **post-order traversal** strategy.

In a binary tree where each node has some number of coins, the goal is to move coins such that **every node has exactly one coin**. A move consists of transferring one coin from a node to its parent or child. The objective is to **minimize the number of moves**.

---

## 🧠 Approach

We use a **recursive post-order traversal** of the tree:

1. Compute the **net balance of coins** needed from the left and right subtrees.
2. Each node returns the number of excess or deficit coins (`val - 1`) after considering its subtree.
3. Accumulate the total number of moves using the **absolute values** of coins moved at each node.

This approach ensures all coins are pushed or pulled optimally towards balance.

---

## ⏱️ Time and Space Complexity

- **Time Complexity:** `O(N)`  
  (where `N` is the number of nodes in the tree — each node is visited once)

- **Space Complexity:** `O(H)`  
  (due to the recursion stack, where `H` is the height of the tree)

---

## ✍️ Author

**Ridham Garg**  
👨‍💻 Passionate Computer Engineer | Problem Solver | C++ Enthusiast  
🎓 Thapar University, Patiala  
📧 Feel free to connect and explore more projects!

---

🌟 If you like this project, don't forget to ⭐️ the repository!
