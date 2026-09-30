<h2><a href="https://codeforces.com/contest/1668/problem/A" target="_blank" rel="noopener noreferrer">1668A — Direction Change</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1668A](https://codeforces.com/contest/1668/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Direction Change</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a grid with $$$n$$$ rows and $$$m$$$ columns. Rows and columns are numbered from $$$1$$$ to $$$n$$$, and from $$$1$$$ to $$$m$$$. The intersection of the $$$a$$$-th row and $$$b$$$-th column is denoted by $$$(a, b)$$$. </p><p>Initially, you are standing in the top left corner $$$(1, 1)$$$. Your goal is to reach the bottom right corner $$$(n, m)$$$.</p><p>You can move in four directions from $$$(a, b)$$$: up to $$$(a-1, b)$$$, down to $$$(a+1, b)$$$, left to $$$(a, b-1)$$$ or right to $$$(a, b+1)$$$.</p><p>You cannot move in the same direction in two consecutive moves, and you cannot leave the grid. What is the minimum number of moves to reach $$$(n, m)$$$?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^3$$$) — the number of the test cases. The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 10^9$$$) — the size of the grid.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer: $$$-1$$$ if it is impossible to reach $$$(n, m)$$$ under the given conditions, otherwise the minimum number of moves.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007246970950741619" id="id005621698273915771" class="input-output-copier">Copy</div></div><pre id="id007246970950741619"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 1</div><div class="test-example-line test-example-line-odd test-example-line-3">1 3</div><div class="test-example-line test-example-line-even test-example-line-4">4 2</div><div class="test-example-line test-example-line-odd test-example-line-5">4 6</div><div class="test-example-line test-example-line-even test-example-line-6">10 5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0011439668798246683" id="id0024642932213972557" class="input-output-copier">Copy</div></div><pre id="id0011439668798246683">0
1
-1
6
10
17
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Test case $$$1$$$: $$$n=1$$$, $$$m=1$$$, and initially you are standing in $$$(1, 1)$$$ so $$$0$$$ move is required to reach $$$(n, m) = (1, 1)$$$.</p><p>Test case $$$2$$$: you should go down to reach $$$(2, 1)$$$.</p><p>Test case $$$3$$$: it is impossible to reach $$$(1, 3)$$$ without moving right two consecutive times, or without leaving the grid.</p><p>Test case $$$4$$$: an optimal moving sequence could be: $$$(1, 1) \to (1, 2) \to (2, 2) \to (2, 1) \to (3, 1) \to (3, 2) \to (4, 2)$$$. It can be proved that this is the optimal solution. So the answer is $$$6$$$.</p></div>