<h2><a href="https://codeforces.com/contest/1657/problem/B" target="_blank" rel="noopener noreferrer">1657B — XY Sequence</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1657B](https://codeforces.com/contest/1657/problem/B) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">B. XY Sequence</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given four integers $$$n$$$, $$$B$$$, $$$x$$$ and $$$y$$$. You should build a sequence $$$a_0, a_1, a_2, \dots, a_n$$$ where $$$a_0 = 0$$$ and for each $$$i \ge 1$$$ you can choose: </p><ul> <li> either $$$a_i = a_{i - 1} + x$$$ </li><li> or $$$a_i = a_{i - 1} - y$$$. </li></ul><p>Your goal is to build such a sequence $$$a$$$ that $$$a_i \le B$$$ for all $$$i$$$ and $$$\sum\limits_{i=0}^{n}{a_i}$$$ is maximum possible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Next $$$t$$$ cases follow.</p><p>The first and only line of each test case contains four integers $$$n$$$, $$$B$$$, $$$x$$$ and $$$y$$$ ($$$1 \le n \le 2 \cdot 10^5$$$; $$$1 \le B, x, y \le 10^9$$$).</p><p>It's guaranteed that the total sum of $$$n$$$ doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the maximum possible $$$\sum\limits_{i=0}^{n}{a_i}$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005799301923534036" id="id006191159098258837" class="input-output-copier">Copy</div></div><pre id="id005799301923534036"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">5 100 1 30</div><div class="test-example-line test-example-line-even test-example-line-2">7 1000000000 1000000000 1000000000</div><div class="test-example-line test-example-line-odd test-example-line-3">4 1 7 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0073817037683073" id="id00952756564800957" class="input-output-copier">Copy</div></div><pre id="id0073817037683073">15
4000000000
-10
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the optimal sequence $$$a$$$ is $$$[0, 1, 2, 3, 4, 5]$$$.</p><p>In the second test case, the optimal sequence $$$a$$$ is $$$[0, 10^9, 0, 10^9, 0, 10^9, 0, 10^9]$$$.</p><p>In the third test case, the optimal sequence $$$a$$$ is $$$[0, -3, -6, 1, -2]$$$.</p></div>