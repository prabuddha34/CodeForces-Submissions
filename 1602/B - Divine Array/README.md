<h2><a href="https://codeforces.com/contest/1602/problem/B" target="_blank" rel="noopener noreferrer">1602B — Divine Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1602B](https://codeforces.com/contest/1602/problem/B) |

## Topics
`constructive algorithms` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Divine Array</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Black is gifted with a Divine array $$$a$$$ consisting of $$$n$$$ ($$$1 \le n \le 2000$$$) integers. Each position in $$$a$$$ has an initial value. After shouting a curse over the array, it becomes angry and starts an unstoppable transformation.</p><p>The transformation consists of infinite steps. Array $$$a$$$ changes at the $$$i$$$-th step in the following way: for every position $$$j$$$, $$$a_j$$$ becomes equal to the number of occurrences of $$$a_j$$$ in $$$a$$$ before starting this step.</p><p>Here is an example to help you understand the process better: </p><center> <table class="tex-tabular bordertable"><tbody><tr><td class="tex-tabular-text-align-center">Initial array:</td><td class="tex-tabular-text-align-center">$$$2$$$ $$$1$$$ $$$1$$$ $$$4$$$ $$$3$$$ $$$1$$$ $$$2$$$</td></tr><tr><td class="tex-tabular-text-align-center">After the $$$1$$$-st step:</td><td class="tex-tabular-text-align-center">$$$2$$$ $$$3$$$ $$$3$$$ $$$1$$$ $$$1$$$ $$$3$$$ $$$2$$$</td></tr><tr><td class="tex-tabular-text-align-center">After the $$$2$$$-nd step:</td><td class="tex-tabular-text-align-center">$$$2$$$ $$$3$$$ $$$3$$$ $$$2$$$ $$$2$$$ $$$3$$$ $$$2$$$</td></tr><tr><td class="tex-tabular-text-align-center">After the $$$3$$$-rd step:</td><td class="tex-tabular-text-align-center">$$$4$$$ $$$3$$$ $$$3$$$ $$$4$$$ $$$4$$$ $$$3$$$ $$$4$$$</td></tr><tr><td class="tex-tabular-text-align-center">...</td><td class="tex-tabular-text-align-center">...</td></tr></tbody></table> </center><p>In the initial array, we had two $$$2$$$-s, three $$$1$$$-s, only one $$$4$$$ and only one $$$3$$$, so after the first step, each element became equal to the number of its occurrences in the initial array: all twos changed to $$$2$$$, all ones changed to $$$3$$$, four changed to $$$1$$$ and three changed to $$$1$$$.</p><p>The transformation steps continue <span class="tex-font-style-bf">forever</span>.</p><p>You have to process $$$q$$$ queries: in each query, Black is curious to know the value of $$$a_x$$$ after the $$$k$$$-th step of transformation.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). Description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 2000$$$) — the size of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le n$$$) — the initial values of array $$$a$$$.</p><p>The third line of each test case contains a single integer $$$q$$$ ($$$1 \le q \le 100\,000$$$) — the number of queries.</p><p>Next $$$q$$$ lines contain the information about queries — one query per line. The $$$i$$$-th line contains two integers $$$x_i$$$ and $$$k_i$$$ ($$$1 \le x_i \le n$$$; $$$0 \le k_i \le 10^9$$$), meaning that Black is asking for the value of $$$a_{x_i}$$$ after the $$$k_i$$$-th step of transformation. $$$k_i = 0$$$ means that Black is interested in values of the initial array.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$2000$$$ and the sum of $$$q$$$ over all test cases doesn't exceed $$$100\,000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print $$$q$$$ answers. The $$$i$$$-th of them should be the value of $$$a_{x_i}$$$ after the $$$k_i$$$-th step of transformation. It can be shown that the answer to each query is unique.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009858816310746743" id="id005585229422893182" class="input-output-copier">Copy</div></div><pre id="id009858816310746743">2
7
2 1 1 4 3 1 2
4
3 0
1 1
2 2
6 1
2
1 1
2
1 0
2 1000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009913710936274334" id="id009231149413724545" class="input-output-copier">Copy</div></div><pre id="id0009913710936274334">1
2
3
3
1
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first test case was described ih the statement. It can be seen that: </p><ol> <li> $$$k_1 = 0$$$ (initial array): $$$a_3 = 1$$$; </li><li> $$$k_2 = 1$$$ (after the $$$1$$$-st step): $$$a_1 = 2$$$; </li><li> $$$k_3 = 2$$$ (after the $$$2$$$-nd step): $$$a_2 = 3$$$; </li><li> $$$k_4 = 1$$$ (after the $$$1$$$-st step): $$$a_6 = 3$$$. </li></ol><p>For the second test case, </p><table class="tex-tabular bordertable"><tbody><tr><td class="tex-tabular-text-align-center">Initial array:</td><td class="tex-tabular-text-align-center">$$$1$$$ $$$1$$$</td></tr><tr><td class="tex-tabular-text-align-center">After the $$$1$$$-st step:</td><td class="tex-tabular-text-align-center">$$$2$$$ $$$2$$$</td></tr><tr><td class="tex-tabular-text-align-center">After the $$$2$$$-nd step:</td><td class="tex-tabular-text-align-center">$$$2$$$ $$$2$$$</td></tr><tr><td class="tex-tabular-text-align-center">...</td><td class="tex-tabular-text-align-center">...</td></tr></tbody></table><p></p><p>It can be seen that: </p><ol> <li> $$$k_1 = 0$$$ (initial array): $$$a_1 = 1$$$; </li><li> $$$k_2 = 1000000000$$$: $$$a_2 = 2$$$; </li></ol></div>