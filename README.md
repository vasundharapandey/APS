# Nykaa: A Shopping Experience So Good You Want to Lose All Your Money

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
3. [Challenges](#challenges)
4. [Business Use Cases](#business-use-cases)
5. [Learnings and Key Takeaways](#learnings-and-key-takeaways)

---

## Introduction

Providing a seamless and efficient shopping experience is crucial for retaining customers and staying competitive. Nykaa, a leading e-commerce platform for beauty and wellness products, continually seeks innovative ways to enhance its user experience. The focus is on improving various business use cases such as product search, filtering, inventory management, dynamic pricing, and shopping bag functionality. By leveraging efficient algorithms and data structures, we can significantly enhance the performance and responsiveness of Nykaa's platform, ensuring a delightful and hassle-free shopping experience for its users. The motivation behind this project stems from the need to address common challenges in e-commerce platforms, such as slow search results, inefficient inventory management, and suboptimal pricing strategies. Nykaa's vast product catalog and high user traffic demand robust solutions to maintain a competitive edge and ensure customer satisfaction.

## Objectives

The aim is to:

1. Faster overall functioning of app features like search, wishlist to create an enjoyable user experience.
2. Optimise wait times and resource management
3. Provide a smooth and responsive platform to boost customer loyalty.

This portfolio will showcase how advanced data structures and algorithms can revolutionize Nykaa's e-commerce operations, ultimately leading to a shopping experience so compelling that users will keep coming back for more.
## Challenges
Here's a list of tasks I plan to tackle for this portfolio project:

Research and Choose Algorithms: Explore different algorithms from the course syllabus (and beyond) to implement key functionalities.
Research Data Structures: Research appropriate data structures to efficiently store user profiles, product catalog, and performance data.
Evaluate and Analyze Results: Measure the performance of the system using various metrics, identify areas for improvement, and reflect on the algorithms and design choices.
## Business Use Cases

Let's dive deeper into each use case, elaborating on the algorithms and their application in the context of Nykaa's e-commerce platform.

### 1. Inventory tracking

**Use Case**: Nykaa needs to track inventory levels in real-time with high accuracy during sales and peak hours.

-  Efficiently update and query inventory levels amidst frequent changes.


     ![image](https://github.com/vasundharapandey/APS/assets/105374701/f6ad0c58-072c-47ea-b177-9534ca3de8e3)

- **Data Structure Suggested**:
  - **Fenwick Tree (Binary Indexed Tree)**:A tree-based data structure that provides efficient methods for cumulative frequency tables.
    -  Efficiently handles updates and prefix sum queries.
    - **Time Complexity**:
      Update: O(log N)
       Query: O(log N)
    - **Space Complexity**: O(N), where N is the number of products.
  
  -  Approach: Implement a Fenwick Tree to maintain inventory levels. Each product’s stock update is processed in logarithmic time, ensuring high accuracy even during high-traffic periods.



    <div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/Fenwick.cpp">Fenwick</a></div>

### 2. Dynamic Pricing

**Use Case**: Nykaa adjusts prices based on demand and supply.
-For example, monsoon will see rise in demand of certain hair care products and they need to be on home page to catch the viewers eye.
-  Rapidly adjust prices in response to changing market conditions.
   ![image](https://github.com/vasundharapandey/APS/assets/105374701/5ff99d62-a590-4a73-883a-0332e7348798)
- **Data Structure Suggested**:
  - **Fibonacci Heap**:
    - A collection of trees satisfying the minimum heap property.
    -  Efficiently supports a variety of priority queue operations.
    - **Time Complexity**:
       Insertion O(1) 
       Decrease Key: O(1) 
       Extract Min: O(log N)
      - **Space Complexity:** O(N), where N is the number of products.

  - Approach: Use a Fibonacci heap to manage product prices, with the minimum price at the root. Insert new prices or adjust existing ones using heap operations. The decrease key operation is used to quickly reduce prices in response to a drop in demand, ensuring competitive pricing.

 
 
 <div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/FibHeap.cpp">Fibonacci Heap</a>
</div>

### 3. Product Filtering

**Use Case**: Users filter products by attributes like brand, price, and ratings.

-Efficiently process multiple filter criteria to quickly narrow down product lists.
![image](https://github.com/vasundharapandey/APS/assets/105374701/6153f364-bf76-4ec8-a2e4-fa55ad6e1e30)
- **Data Structure Suggested**:
  - **Segment Trees**:A binary tree used for storing intervals or segments.
    -  Efficiently supports range queries and updates.
    - **Time Complexity**:
       Query: O(log N)
       Update: O(log N)
    - **Space Complexity**: O(N), where N is the number of products.
    **Approach**: Build segment trees for various product attributes (price, ratings, etc.). Each segment tree preprocesses the data to enable quick range queries and updates. For instance, filtering products within a certain price range is achieved through a logarithmic time query on the price segment tree, ensuring swift and responsive filtering.
 
 
 <div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/SegmentTree.cpp">Segment Tree</a>
</div>

### 4. Optimised search results

**Use Case**: Nykaa aims to provide users with the most relevant suggestions for makeup and skincare.
![image](https://github.com/vasundharapandey/APS/assets/105374701/b077d2f0-7ade-4eee-8728-75647e70882b)

- Handling vast and dynamic data with diverse user queries, including typos and abbreviations.
- **Algorithm**:
  - **Trie and Inverted Index Combination**:.
    - Inverted Index: A mapping of keywords to the documents (products) they appear in.
      - Quickly retrieves all documents containing a specific keyword, ideal for broader keyword searches.
      - **Time Complexity (Search)**: O(k), where k is the number of documents containing the keyword.
      - **Space Complexity**: O(N * L), where N is the number of documents and L is the average document length.
 
  
         - **Isomorphic strings**: Use isomorphic string concept to map typos to correctly searched items
         - overall time complexity is O(m×n) where m is the number of words to be checked against the word and n is the average length of the words
       
         - 
  - **Approach**: Use a trie for handling prefix searches and autocomplete, combined with an inverted index to efficiently retrieve products matching broader keyword searches. This hybrid approach ensures quick and relevant recommendations, even with user input variations.



<div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/isomorphic.cpp">IsoMorphic</a>
     <a href="https://github.com/vasundharapandey/APS/blob/main/codes/inverted.cpp">Inverted</a>
</div>

### 5. Product Recommendations

Recommend products based on user browsing history.
 Effectively use user behavior data to generate meaningful recommendations.
 ![Animated_BFS](https://github.com/vasundharapandey/APS/assets/105374701/8e9d79eb-cb02-456f-a15f-0920c713db29)
 - **Algorithm**:
  - Graph Algorithms (DFS/BFS for Traversal):
    - Represent products and user interactions as a graph.
    - Traverse the graph to find related products.
    -**Time Complexity**: O(N + E) for traversal, where N is the number of nodes (products) and E is the number of edges (connections).
    - **Space Complexity**: O(N + E)
  - Model products and user interactions as a graph, where nodes represent products and edges represent user interactions (e.g., viewed together, purchased together). Use DFS or BFS to traverse the graph and find related products. For example, if a user views a product, traverses its neighbors in the graph to recommend similar products, leveraging the structure to provide relevant suggestions.
<div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/DFS.cpp">DFS</a>
</div>

### 6. Cart Management

**Use Case**: Efficiently manage items in the user's cart.


- Handle frequent additions, removals, and lookups of cart items.
- ![image](https://github.com/vasundharapandey/APS/assets/105374701/5f19d46e-a7a5-4f45-9347-2239fdeda87a)
- **Data Strutcure Recommended**:
  - **Skip list**:
    - Create a node structure that includes the product information and pointers to the next nodes at different levels.Provides constant-time complexity for insertions, deletions, and lookups.
    - **Time Complexity**:
      - Insert: O(log N)
      - Delete: O(log N)
      - Lookup: O(log N)
    - **Space Complexity**: O(N), where N is the number of items.
  - **Approach**: Use a hash table to store cart items, mapping product IDs to quantities. This allows constant-time operations for adding, removing, and retrieving items, ensuring a responsive and seamless cart management experience.

 <div class="codes">Codes
    <a href="https://gist.github.com/hjy0102/d83518e77b0d01864b8a427b78053bed">SkipList</a>
</div>

### 7. Order Processing

**Use Case**: Efficiently process user orders.
 Ensure orders are processed in the order they are received.
- **Data Structure Recommended**:
  - **Priority Queue**:
    - Orders can be prioritized based on various factors such as order time, customer priority (e.g., premium customers), order size, or delivery deadlines
    - **Time Complexity**:
      - **Enqueue**: O(logN)
      - **Dequeue**: O(logN)
    - **Space Complexity**: O(N), where N is the number of orders.
     Implement a priority queue to manage order processing. Orders are enqueued as they are received and dequeued for processing in the same sequence. This ensures fairness and maintains the order of operations, crucial for a smooth user experience.

<div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/pq.cpp">PriorityQueue</a>
</div>

### 8. Delivery Route Optimization

Optimize delivery routes for orders.
![image](https://github.com/vasundharapandey/APS/assets/105374701/48b5d353-cfdd-48f2-94d7-4bdc0471de55)
-Minimize delivery time and cost by finding the shortest routes.
- **Algorithm**:
  - **Dijkstra’s Algorithm**: A graph algorithm used for finding the shortest paths between nodes. Finds the shortest delivery routes in a weighted graph.
     **Time Complexity**: O(V^2) for dense graphs, where V is the number of vertices (locations).
     **Space Complexity**: O(V^2)
  - **Approach**: Model the delivery locations and routes as a weighted graph, where vertices represent locations and edges represent routes with associated costs (time or distance). Apply Dijkstra’s algorithm to find the shortest paths from the warehouse to delivery points, optimizing routes to reduce delivery time and cost.
   <div class="codes">Codes
    <a href="https://github.com/muzixing/graph_algorithm/blob/master/Dijkstra(single%20source%20shortest%20path).cpp">Dijstras</a>
</div>

### 9. Customer Support Chat

**Use Case**: Provide quick and relevant responses in customer support chat.

- **Challenge**: Efficiently search for multiple keywords in user queries to provide relevant answers.
- **Algorithm**: Aho-Corasick Algorithm
     A tree-based structure for efficient multi-pattern matching. Searches for multiple keywords simultaneously in linear time.
    - **Time Complexity**: O(N + M), where N is the length of the text and M is the sum of the lengths of all keywords.
    - **Space Complexity**: O(N)
  - **Approach**: Build an Aho-Corasick automaton with the set of keywords (common customer queries). When a user query is received, run it through the automaton to find all matching keywords in linear time. This allows for quick and relevant responses based on predefined keywords, enhancing the efficiency of customer support.
 <div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/aho-corasick.cpp">Aho-corasick</a>
</div>

### 10. Discount Application
 Apply discounts to products based on various conditions.Efficiently determine and apply applicable discounts to products.
- **Algorithm**:
  - **Interval Trees**: A tree-based data structure that holds intervals.Efficiently queries intervals overlapping with a given point or range.
    - **Time Complexity**:
      - Insertion: O(log N)
        Query: O(log N + R), where R is the number of overlapping intervals.
    - **Space Complexity**: O(N), where N is the number of discount intervals.
  - **Approach**: Use interval trees to manage discount periods and conditions. When a product is viewed or added to the cart, query the interval tree to check for overlapping discount intervals, ensuring applicable discounts are identified and applied quickly.
 <div class="codes">Codes
    <a href="https://github.com/5cript/interval-tree">Interval Trees</a>
</div>


### 11. Product Review Analysis

**Use Case**: Analyze product reviews for insights.
 Efficiently search and analyze large volumes of text in product reviews.
- **Algorithm**:
  - Suffix Array: array of suffixes of a string, sorted in lexicographical order.
    - Enables efficient substring searches and pattern matching.
    - **Time Complexity**:
      - Construction: O(N log N)
      - Pattern Matching: O(M), where N is the length of the text and M is the length of the pattern.
    - **Space Complexity**: O(N)
  - **Approach**:  Construct a suffix array for the product reviews to facilitate efficient substring searches and pattern matching. Initially, the text's suffixes are generated and sorted to create the suffix array, which allows for logarithmic time complexity searches through binary search methods. This approach enables rapid identification of specific keywords or patterns within product reviews, providing valuable insights into customer feedback and sentiment analysis.

 <div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/binsearch.cpp">Binary Search</a>
</div>




### 12. Wishlist Management

**Use Case**: Efficiently manage user wishlists.
 Handle frequent additions, deletions, and lookups of wishlist items.
- Data Structure Recommended:
  - Balanced Binary Search Tree ( AVL Tree): A self-balancing binary search tree.
    Maintains sorted order with logarithmic time complexity for operations.
    - **Time Complexity**:
      Insertion: O(log N)
      Deletion: O(log N)
      Search: O(log N)
    - **Space Complexity**: O(N)
  - **Approach**: Use a balanced BST to store wishlist items, ensuring that the tree remains balanced after each operation. This guarantees logarithmic time complexity for insertions, deletions, and searches, providing efficient management of user wishlists.

 <div class="codes">Codes
    <a href="https://gist.github.com/Harish-R/097688ac7f48bcbadfa5">AVL Trees</a>
</div>

### 13. Flash Sales
 Handle high traffic during flash sales.
 Efficiently manage product availability and inventory under high load.
- Data Structure Recommended
  - **Red-Black Tree**:A self-balancing binary search tree. Maintains balance with logarithmic time complexity for operations.
    - **Time Complexity**:
      - Insertion: O(log N)
      - Deletion: O(log N)
      - Search: O(log N)
    - **Space Complexity**: O(N)
  - **Approach**: Use a red-black tree to manage product availability and inventory during flash sales. The tree remains balanced, ensuring efficient insertions, deletions, and searches, which is critical for maintaining performance under high load conditions.

 <div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/Redblack.cpp">Red Black Trees</a>
</div>


### 14. Product Bundling

**Use Case**: Offer product bundles.
 Optimize the selection of products for bundles to maximize value and relevance.
- **Algorithm**:
  - **Knapsack Problem (Dynamic Programming)**: A method for solving optimization problems with constraints.
     Determines the optimal set of products for bundling within a weight (cost) limit.
    - **Time Complexity**: O(N * W), where N is the number of products and W is the maximum weight.
    - **Space Complexity**: O(N * W)
  - **Approach**: Model the bundling problem as a knapsack problem, where each product has a value and a weight (price). Use dynamic programming to find the optimal set of products that maximizes value within the cost limit, ensuring that the product bundles offered are attractive and relevant to customers.

 <div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/knapsack.cpp">Knapsack</a>
</div>

### 15. Personalized Promotions

**Use Case**: Offer personalized promotions to users.
 Identify relevant promotions based on user behavior.
**Algorithm**:
  - **Longest Common Subsequence (Dynamic Programming)**: A method for finding the longest subsequence common to two sequences.
     Matches user behavior with promotion history to identify relevant promotions.
    - **Time Complexity**: O(N * M), where N is the length of the user history and M is the length of the promotion history.
    - **Space Complexity**: O(N * M)
  - **Approach**: Use dynamic programming to find the longest common subsequence between user behavior and promotion history. This helps in identifying the most relevant promotions to offer, ensuring that promotions are personalized and more likely to appeal to the user.
 <div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/lcs.cpp">LCS</a>
</div>

### 16. Fraud Detection

**Use Case**: Detect fraudulent activities. Identify anomalies and cycles in transaction patterns to detect fraud.
- **Algorithm**:
  - **Union-Find (Disjoint Set)**: A data structure that keeps track of elements partitioned into disjoint sets.
  - Efficiently detects cycles and connected components.
    - **Time Complexity**:
      - Union: O(α(N)), where α is the inverse Ackermann function.
      - Find: O(α(N))
    - **Space Complexity**: O(N), where N is the number of transactions.
  - **Approach**: Use the union-find data structure to manage sets of transactions. Each transaction is represented as an edge, and users as nodes. Union operations are used to merge sets, and find operations to detect cycles and anomalies, identifying potential fraudulent activities quickly and efficiently.

<div class="codes">Codes
    <a href="https://github.com/prakashbh/day-today-codes/blob/master/10-union-find-basic.c">Union Find</a>
</div>

### 17. Coupon Code Validation

**Use Case**: Validate user-entered coupon codes.
![image](https://github.com/vasundharapandey/APS/assets/105374701/f96bc08e-67fb-43db-85ad-db2e292b0e6c)
 Ensure quick and accurate validation of coupon codes.
- **Algorithm**:
  - **SHA 256 hashing**
  - Combine user-specific information (e.g., user ID, email) with a unique identifier (e.g., timestamp, random string) and a secret key.
Hash this combined string using SHA-256 to generate the coupon code.Validate and enhance coupon codes security.
      **Time Complexity**:
    Insert: O(1)
      - Lookup: O(1)
    - **Space Complexity**: O(N), where N is the number of coupon codes.
  - **Approach**: Store valid coupon codes in a hash set, enabling constant-time validation of user-entered codes. This ensures quick and accurate application of discounts, enhancing the user experience.

 <div class="codes">Codes
    <a href="https://github.com/vasundharapandey/APS/blob/main/codes/sha256.cpp">SHA256</a>
</div>


---

## Learnings and Key Takeaways

Throughout this project, I have learned the importance of selecting appropriate algorithms and data structures to solve specific problems efficiently. Each use case in Nykaa's e-commerce platform demonstrates how a well-chosen algorithm can significantly enhance performance, user experience, and operational efficiency. This project underscores the value of algorithmic problem-solving skills in developing robust, scalable, and high-performing systems in the real world.


## References
[1]Alfred V. Aho and Margaret J. Corasick. 1975. Efficient string matching: an aid to bibliographic search. Commun. ACM 18, 6 (June 1975), 333–340. https://doi.org/10.1145/360825.360855
