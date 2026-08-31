<h2><a href="https://codeforces.com/contest/1316/problem/A" target="_blank" rel="noopener noreferrer">1316A — Grade Allocation</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1316A](https://codeforces.com/contest/1316/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Grade Allocation</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>$$$n$$$ students are taking an exam. The highest possible score at this exam is $$$m$$$. Let $$$a_{i}$$$ be the score of the $$$i$$$-th student. You have access to the school database which stores the results of all students.</p><p>You can change each student's score as long as the following conditions are satisfied: </p><ul> <li> All scores are integers </li><li> $$$0 \leq a_{i} \leq m$$$ </li><li> The average score of the class doesn't change. </li></ul><p>You are student $$$1$$$ and you would like to maximize your own score.</p><p>Find the highest possible score you can assign to yourself such that all conditions are satisfied.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. </p><p>The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 200$$$). The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n \leq 10^{3}$$$, $$$1 \leq m \leq 10^{5}$$$)  — the number of students and the highest possible score respectively.</p><p>The second line of each testcase contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$ 0 \leq a_{i} \leq m$$$)  — scores of the students.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, output one integer  — the highest possible score you can assign to yourself such that both conditions are satisfied._</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003632035591457886" id="id003984765279654041" class="input-output-copier">Copy</div></div><pre id="id003632035591457886">2
4 10
1 2 3 4
4 5
1 2 3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003152543819154351" id="id004950710876260497" class="input-output-copier">Copy</div></div><pre id="id003152543819154351">10
5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first case, $$$a = [1,2,3,4] $$$, with average of $$$2.5$$$. You can change array $$$a$$$ to $$$[10,0,0,0]$$$. Average remains $$$2.5$$$, and all conditions are satisfied.</p><p>In the second case, $$$0 \leq a_{i} \leq 5$$$. You can change $$$a$$$ to $$$[5,1,1,3]$$$. You cannot increase $$$a_{1}$$$ further as it will violate condition $$$0\le a_i\le m$$$.</p></div>