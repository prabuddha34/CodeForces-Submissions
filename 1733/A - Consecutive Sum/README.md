<h2><a href="https://codeforces.com/contest/1733/problem/A" target="_blank" rel="noopener noreferrer">1733A — Consecutive Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1733A](https://codeforces.com/contest/1733/problem/A) |

## Topics
`greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Consecutive Sum</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ with $$$n$$$ integers. You can perform the following operation at most $$$k$$$ times:</p><ul> <li> Choose two indices $$$i$$$ and $$$j$$$, in which $$$i \,\bmod\, k = j \,\bmod\, k$$$ ($$$1 \le i  \lt  j \le n$$$). </li><li> Swap $$$a_i$$$ and $$$a_j$$$. </li></ul><p>After performing all operations, you have to select $$$k$$$ consecutive elements, and the sum of the $$$k$$$ elements becomes your score. Find the maximum score you can get.</p><p>Here $$$x \bmod y$$$ denotes the remainder from dividing $$$x$$$ by $$$y$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 600$$$) — the number of test cases.</p><p>Each test case consists of two lines. </p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 100$$$) — the length of the array and the number in the statement above.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 10^9$$$)  — the array itself.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the maximum score you can get, one per line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003083690503629808" id="id007188587284882783" class="input-output-copier">Copy</div></div><pre id="id003083690503629808"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">3 2</div><div class="test-example-line test-example-line-odd test-example-line-1">5 6 0</div><div class="test-example-line test-example-line-even test-example-line-2">1 1</div><div class="test-example-line test-example-line-even test-example-line-2">7</div><div class="test-example-line test-example-line-odd test-example-line-3">5 3</div><div class="test-example-line test-example-line-odd test-example-line-3">7 0 4 0 4</div><div class="test-example-line test-example-line-even test-example-line-4">4 2</div><div class="test-example-line test-example-line-even test-example-line-4">2 7 3 4</div><div class="test-example-line test-example-line-odd test-example-line-5">3 3</div><div class="test-example-line test-example-line-odd test-example-line-5">1000000000 1000000000 999999997</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005152814054396767" id="id006857232462126136" class="input-output-copier">Copy</div></div><pre id="id005152814054396767">11
7
15
10
2999999997
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we can get a score of $$$11$$$ if we select $$$a_1, a_2$$$ without performing any operations.</p><p>In the third test case, we can get a score of $$$15$$$ if we first swap $$$a_1$$$ with $$$a_4$$$ and then select $$$a_3, a_4, a_5$$$. </p></div>