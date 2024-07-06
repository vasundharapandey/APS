# Revolutionizing Nykaa: A Shopping Experience So Good You Want to Lose All Your Money

## Course Information

- **Course Name**: Algorithmic Problem Solving
- **Course Code**: 23ECSE309
- **Name**: Vasundhara Pandey
- **University**: KLE Technological University, Hubballi-31
- **Portfolio Topic/Domain**: Nykaa

---

## Table of Contents

1. [Introduction](#introduction)
2. [Objectives](#objectives)
3. [Business Use Cases](#business-use-cases)
4. [Learnings and Key Takeaways](#learnings-and-key-takeaways)

---

## Introduction

Providing a seamless and efficient shopping experience is crucial for retaining customers and staying competitive. Nykaa, a leading e-commerce platform for beauty and wellness products, continually seeks innovative ways to enhance its user experience. The focus is on improving various business use cases such as product search, filtering, inventory management, dynamic pricing, and shopping bag functionality. By leveraging efficient algorithms and data structures, we can significantly enhance the performance and responsiveness of Nykaa's platform, ensuring a delightful and hassle-free shopping experience for its users. The motivation behind this project stems from the need to address common challenges in e-commerce platforms, such as slow search results, inefficient inventory management, and suboptimal pricing strategies. Nykaa's vast product catalog and high user traffic demand robust solutions to maintain a competitive edge and ensure customer satisfaction.

## Objectives

The aim is to:

1. **Enhance User Experience**: Faster search and filtering results, quick shopping bag operations, and efficient order processing contribute to a seamless user experience.
2. **Improve Operational Efficiency**: Optimizing inventory management, delivery routes, and dynamic pricing leads to cost savings and better resource utilization.
3. **Increase Customer Retention**: Providing a smooth and responsive platform encourages repeat purchases and boosts customer loyalty.

This portfolio will showcase how advanced data structures and algorithms can revolutionize Nykaa's e-commerce operations, ultimately leading to a shopping experience so compelling that users will keep coming back for more.

## Business Use Cases

### 1. Personalized Product Recommendations

**Use Case**: Nykaa aims to provide users with the most relevant suggestions for makeup and skincare.

-   Vast and dynamic data
-   Diverse user queries (typos, abbreviations, preferences)

Expected Results:

 - Search for Face.
 - Show Face Washes, Face Scrubs,  etc...

![image](https://github.com/vasundharapandey/APS/assets/105374701/b077d2f0-7ade-4eee-8728-75647e70882b)
- **Algorithms**:
  - **Inverted Index**:
    - **Structure**: A mapping of keywords to the documents (products) they appear in.
    - **Use**: Quickly retrieves all documents containing a specific keyword, ideal for broader keyword searches.
    - **Time Complexity (Search)**: O(k), where k is the number of documents containing the keyword.
    - **Space Complexity**: O(N * L), where N is the number of documents and L is the average document length.
  - **Approach**: Combine tries and inverted indexes to handle both substring and keyword searches.

### 2. Inventory Management

**Use Case**: Nykaa needs to track inventory levels in real-time with high accuracy during sales and peak hours.

- **Algorithm**: Fenwick Tree (Binary Indexed Tree)
  - **Space Complexity**: O(N) where N is the number of products.
  - **Time Complexity**: O(log N) for updates and queries.
  - **Approach**: Use a Fenwick Tree to keep track of inventory levels, allowing for efficient updates and queries on stock levels.

### 3. Dynamic Pricing

**Use Case**: Nykaa adjusts prices based on demand and supply.

- **Algorithm**: Fibonacci Heap
  - **Space Complexity**: O(N) where N is the number of products.
  - **Time Complexity**:
    - **Insertion**: O(1) amortized.
    - **Decrease Key**: O(1) amortized.
  - **Approach**: Use a Fibonacci heap to manage product prices, with the minimum price at the root. Insert and adjust prices using heap operations. Decrease key operation is used to quickly reduce prices based on demand drops.

### 4. Product Filtering

**Use Case**: Users filter products by attributes like brand, price, and ratings.

- **Algorithm**: Segment Trees
  - **Space Complexity**: O(N) where N is the number of products.
  - **Time Complexity**: O(log N) for range queries.
  - **Approach**: Use Segment Trees to preprocess the product attributes, enabling efficient range queries and updates for filters, thus speeding up the filtering process.

### 5. Product Recommendations

**Use Case**: Recommend products based on user browsing history.

- **Algorithm**: Graph Algorithms (DFS/BFS for traversal)
  - **Space Complexity**: O(N + E) where N is the number of nodes (products) and E is the number of edges (connections).
  - **Time Complexity**: O(N + E) for traversal.
  - **Approach**: Represent products and user interactions as a graph. Use DFS/BFS to traverse and find related products, improving the recommendation relevance.

### 6. Cart Management

**Use Case**: Efficiently manage items in the user's cart.

- **Algorithm**: Hash Table
  - **Space Complexity**: O(N) where N is the number of items.
  - **Time Complexity**: O(1) for insert, delete, and lookup.
  - **Approach**: Use a hash table to store cart items, enabling constant-time operations for adding, removing, and retrieving items.

### 7. Order Processing

**Use Case**: Efficiently process user orders.

- **Algorithm**: Queue
  - **Space Complexity**: O(N) where N is the number of orders.
  - **Time Complexity**: O(1) for enqueue and dequeue.
  - **Approach**: Use a queue to manage order processing, ensuring orders are processed in the order they are received.

### 8. Delivery Route Optimization

**Use Case**: Optimize delivery routes for orders.

- **Algorithm**: Dijkstra’s Algorithm
  - **Space Complexity**: O(V^2) where V is the number of vertices (locations).
  - **Time Complexity**: O(V^2) for dense graphs.
  - **Approach**: Use Dijkstra’s algorithm to find the shortest paths for delivery routes, minimizing delivery time and cost.

### 9. Customer Support Chat

**Use Case**: Provide quick and relevant responses in customer support chat.

- **Algorithm**: Aho-Corasick Algorithm
  - **Space Complexity**: O(N) where N is the sum of the lengths of all keywords.
  - **Time Complexity**: O(N + M) where M is the length of the text.
  - **Approach**: Use the Aho-Corasick algorithm to search for multiple keywords in user queries, providing quick and relevant responses.

### 10. Discount Application

**Use Case**: Apply discounts to products based on various conditions.

- **Algorithm**: Interval Trees
  - **Space Complexity**: O(N) where N is the number of discount intervals.
  - **Time Complexity**: O(log N) for insertion and querying.
  - **Approach**: Use interval trees to manage discount conditions, enabling efficient queries to determine applicable discounts.

### 11. Product Review Analysis

**Use Case**: Analyze product reviews for insights.

- **Algorithm**: Suffix Array
  - **Space Complexity**: O(N) where N is the length of the text.
  - **Time Complexity**: O(N log N) for construction and O(M) for pattern matching.
  - **Approach**: Use suffix arrays to preprocess reviews, enabling efficient substring searches and pattern matching for analysis.

### 12. Wishlist Management

**Use Case**: Efficiently manage user wishlists.

- **Algorithm**: Balanced Binary Search Tree (e.g., AVL Tree)
  - **Space Complexity**: O(N) where N is the number of items.
  - **Time Complexity**: O(log N) for insertion, deletion, and search.
  - **Approach**: Use a balanced BST to store wishlist items, ensuring logarithmic time operations for managing the wishlist.

### 13. Flash Sales

**Use Case**: Handle high traffic during flash sales.

- **Algorithm**: Red-Black Tree
  - **Space Complexity**: O(N) where N is the number of products.
  - **Time Complexity**: O(log N) for insertion, deletion, and search.
  - **Approach**: Use a red-black tree to manage product availability and inventory during flash sales, maintaining balance and ensuring efficient operations.

### 14. Customer Segmentation

**Use Case**: Segment customers based on behavior.

- **Algorithm**: K-Means Clustering (for non-ML context, use as a heuristic approach)
  - **Space Complexity**: O(N) where N is the number of customers.
  - **Time Complexity**: O(N * K * I) where K is the number of clusters and I is the number of iterations.
  - **Approach**: Use K-means clustering to group customers based on behavior, aiding in targeted marketing and personalized experiences.

### 15. Product Bundling

**Use Case**: Offer product bundles.

- **Algorithm**: Knapsack Problem (Dynamic Programming)
  - **Space Complexity**: O(N * W) where N is the number of products and W is the maximum weight.
  - **Time Complexity**: O(N * W)
  - **Approach**: Use dynamic programming to solve the knapsack problem, optimizing the selection of products for bundles to maximize value and relevance.

### 16. Personalized Promotions

**Use Case**: Offer personalized promotions to users.

- **Algorithm**: Longest Common Subsequence (Dynamic Programming

)
  - **Space Complexity**: O(N * M) where N is the length of the user history and M is the length of the promotion history.
  - **Time Complexity**: O(N * M)
  - **Approach**: Use dynamic programming to find the longest common subsequence between user behavior and promotion history, identifying the most relevant promotions to offer.

### 17. Fraud Detection

**Use Case**: Detect fraudulent activities.

- **Algorithm**: Union-Find (Disjoint Set)
  - **Space Complexity**: O(N) where N is the number of transactions.
  - **Time Complexity**: O(α(N)) for union and find operations.
  - **Approach**: Use the union-find data structure to detect cycles and anomalies in transaction patterns, identifying potential fraudulent activities.

### 18. Load Balancing

**Use Case**: Distribute user requests evenly across servers.

- **Algorithm**: Round Robin
  - **Space Complexity**: O(1)
  - **Time Complexity**: O(1) per request.
  - **Approach**: Use the round-robin algorithm to distribute user requests evenly across servers, ensuring balanced load and preventing server overload.

### 19. Coupon Code Validation

**Use Case**: Validate user-entered coupon codes.

- **Algorithm**: Hash Set
  - **Space Complexity**: O(N) where N is the number of coupon codes.
  - **Time Complexity**: O(1) for insertion and lookup.
  - **Approach**: Use a hash set to store valid coupon codes, enabling constant-time validation for user-entered codes.

### 20. User Session Management

**Use Case**: Manage user sessions efficiently.

- **Algorithm**: LRU Cache
  - **Space Complexity**: O(N) where N is the cache size.
  - **Time Complexity**: O(1) for access and updates.
  - **Approach**: Use an LRU cache to manage user sessions, ensuring quick access and updates to session data, thus providing a responsive user experience.

---

## Learnings and Key Takeaways

Throughout this project, I have learned the importance of selecting appropriate algorithms and data structures to solve specific problems efficiently. Each use case in Nykaa's e-commerce platform demonstrates how a well-chosen algorithm can significantly enhance performance, user experience, and operational efficiency. This project underscores the value of algorithmic problem-solving skills in developing robust, scalable, and high-performing systems in the real world.

---



