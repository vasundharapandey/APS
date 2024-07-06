# APS
# Revolutionising nykaa- a shopping experience so good you want to lose all your money



<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>Vasundhara Pandey</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
<dt>Portfolio Topic/Domain</dt>
<dd>Nykaa</dd>
</dl>

* * *


#### Note:
This page hosts:

1. Introduction
2. Objectives
3. Business Use Cases
4. Learnings and key takeaways
# Introduction:


# Objectives:

# Business Use Cases:
## 1. Personalized Product Recommendations 
### Use Case:

Nykaa aims to provide users with the most relevant suggestions for makeup and skincare.
-   Vast and dynamic data
-   Diverse user queries (typos, abbreviations, preferences)

Expected Results:

 - Search for Face.
 - Show Face Washes, Face Scrubs,  etc...
![image](https://github.com/vasundharapandey/APS/assets/105374701/b077d2f0-7ade-4eee-8728-75647e70882b)


Algorithms:
-   **Inverted Index:**
    
    -   **Structure:** A mapping of keywords to the documents (producrs) they appear in.
    -   **Use:** Quickly retrieves all documents containing a specific keyword, ideal for broader keyword searches.
    -   **Time Complexity (Search):** O(k), where k is the number of documents containing the keyword.
    -   **Space Complexity:** O(N*L), where N is the number of documents and L is the average document length.
    
   **Approach:**
    -   **Design:** Combine tries and inverted indexes to handle both substring and keyword searches.
    -   **Implementation:** Use tries for substring matching and auto-suggestions as the user types. Use the inverted index for broader keyword searches.
 
## 2.Inventory Management
### Use Case:
-  Nykaa needs to track inventory levels in real-time with high accuracy during sales and peak hours.
-  Expected Results: Accurate inventory tracking.
 Algorithm: 
**Fenwick Tree (Binary Indexed Tree)**
- Space Complexity: O(N) where N is the number of products.
- Time Complexity: O(log N) for updates and queries.
**Approach:**
  - Use a Fenwick Tree to keep track of inventory levels, allowing for efficient updates and queries on stock levels.
   
## 3.Dynamic Pricing
### Use Case:
**Fibonacci Heap**

- **Space Complexity:** O(N) where N is the number of products.
- **Time Complexity:**
- **Insertion:** O(1) amortized.
- Decrease Key: O(1) amortized.
Approach:

Representation: Use a Fibonacci heap to manage product prices, with the minimum price at the root.
Price Adjustments: Insert and adjust prices using the heap operations. Decrease key operation is used to quickly reduce prices based on demand drops.
Price Extraction: Extract the minimum price to ensure the most competitive pricing.
Improvement: The Fibonacci heap offers efficient key operations, making it suitable for frequently adjusting prices based on real-time data.
