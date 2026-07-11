<h2><a href="https://codeforces.com/contest/1162/problem/B" target="_blank" rel="noopener noreferrer">1162B — Double Matrix</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1162B](https://codeforces.com/contest/1162/problem/B) |

## Topics
`brute force` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Double Matrix</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given <span class="tex-font-style-bf">two</span> $$$n \times m$$$ matrices containing integers. A sequence of integers is strictly increasing if each next number is greater than the previous one. A row is strictly increasing if all numbers from left to right are strictly increasing. A column is strictly increasing if all numbers from top to bottom are strictly increasing. A matrix is increasing if all rows are strictly increasing <span class="tex-font-style-bf">and</span> all columns are strictly increasing. </p><p>For example, the matrix $$$\begin{bmatrix} 9&10&11\\ 11&12&14\\ \end{bmatrix}$$$ is increasing because each individual row and column is strictly increasing. On the other hand, the matrix $$$\begin{bmatrix} 1&1\\ 2&3\\ \end{bmatrix}$$$ is not increasing because the first row is not strictly increasing.</p><p>Let a position in the $$$i$$$-th row (from top) and $$$j$$$-th column (from left) in a matrix be denoted as $$$(i, j)$$$. </p><p>In one operation, you can choose any two numbers $$$i$$$ and $$$j$$$ and swap the number located in $$$(i, j)$$$ in the first matrix with the number in $$$(i, j)$$$ in the second matrix. In other words, you can swap two numbers in different matrices if they are located in the corresponding positions.</p><p>You would like to make both matrices increasing by performing some number of operations (possibly none). Determine if it is possible to do this. If it is, print "<span class="tex-font-style-tt">Possible</span>", otherwise, print "<span class="tex-font-style-tt">Impossible</span>".</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n,m \leq 50$$$) — the dimensions of each matrix.</p><p>Each of the next $$$n$$$ lines contains $$$m$$$ integers $$$a_{i1}, a_{i2}, \ldots, a_{im}$$$ ($$$1 \leq a_{ij} \leq 10^9$$$) — the number located in position $$$(i, j)$$$ in the first matrix.</p><p>Each of the next $$$n$$$ lines contains $$$m$$$ integers $$$b_{i1}, b_{i2}, \ldots, b_{im}$$$ ($$$1 \leq b_{ij} \leq 10^9$$$) — the number located in position $$$(i, j)$$$ in the second matrix.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a string "<span class="tex-font-style-tt">Impossible</span>" or "<span class="tex-font-style-tt">Possible</span>".</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005375895655268985" id="id0018467847932735426" class="input-output-copier">Copy</div></div><pre id="id005375895655268985">2 2
2 10
11 5
9 4
3 12
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003705066589877126" id="id005627591299146301" class="input-output-copier">Copy</div></div><pre id="id003705066589877126">Possible
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00319070684888493" id="id005209125395780547" class="input-output-copier">Copy</div></div><pre id="id00319070684888493">2 3
2 4 5
4 5 6
3 6 7
8 10 11
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0028549425551744667" id="id0011328933857516887" class="input-output-copier">Copy</div></div><pre id="id0028549425551744667">Possible
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0022870945265785725" id="id0021705514733567977" class="input-output-copier">Copy</div></div><pre id="id0022870945265785725">3 2
1 3
2 4
5 10
3 1
3 6
4 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009320803167461067" id="id0026821731946652283" class="input-output-copier">Copy</div></div><pre id="id009320803167461067">Impossible
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first example, we can do an operation on the top left and bottom right cells of the matrices. The resulting matrices will be $$$\begin{bmatrix} 9&10\\ 11&12\\ \end{bmatrix}$$$ and $$$\begin{bmatrix} 2&4\\ 3&5\\ \end{bmatrix}$$$.</p><p>In the second example, we don't need to do any operations.</p><p>In the third example, no matter what we swap, we can't fix the first row to be strictly increasing in both matrices. </p></div>