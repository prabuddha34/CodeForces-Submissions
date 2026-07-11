<h2><a href="https://codeforces.com/contest/1197/problem/C" target="_blank" rel="noopener noreferrer">1197C — Array Splitting</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1197C](https://codeforces.com/contest/1197/problem/C) |

## Topics
`greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. Array Splitting</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a <span class="tex-font-style-bf">sorted</span> array $$$a_1, a_2, \dots, a_n$$$ (for each index $$$i  \gt  1$$$ condition $$$a_i \ge a_{i-1}$$$ holds) and an integer $$$k$$$.</p><p>You are asked to divide this array into $$$k$$$ non-empty consecutive subarrays. Every element in the array should be included in exactly one subarray. </p><p>Let $$$max(i)$$$ be equal to the maximum in the $$$i$$$-th subarray, and $$$min(i)$$$ be equal to the minimum in the $$$i$$$-th subarray. The cost of division is equal to $$$\sum\limits_{i=1}^{k} (max(i) - min(i))$$$. For example, if $$$a = [2, 4, 5, 5, 8, 11, 19]$$$ and we divide it into $$$3$$$ subarrays in the following way: $$$[2, 4], [5, 5], [8, 11, 19]$$$, then the cost of division is equal to $$$(4 - 2) + (5 - 5) + (19 - 8) = 13$$$.</p><p>Calculate the minimum cost you can obtain by dividing the array $$$a$$$ into $$$k$$$ non-empty consecutive subarrays. </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 3 \cdot 10^5$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$ 1 \le a_i \le 10^9$$$, $$$a_i \ge a_{i-1}$$$). </p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the minimum cost you can obtain by dividing the array $$$a$$$ into $$$k$$$ nonempty consecutive subarrays. </p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005264647696167694" id="id00460398069970405" class="input-output-copier">Copy</div></div><pre id="id005264647696167694">6 3
4 8 15 16 23 42
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003870566017739415" id="id0023693947970914342" class="input-output-copier">Copy</div></div><pre id="id003870566017739415">12
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007079232026344395" id="id00639980199625659" class="input-output-copier">Copy</div></div><pre id="id007079232026344395">4 4
1 3 3 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0003633675571930217" id="id003719098858928618" class="input-output-copier">Copy</div></div><pre id="id0003633675571930217">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002937421938654742" id="id0016993936593633618" class="input-output-copier">Copy</div></div><pre id="id002937421938654742">8 1
1 1 2 3 5 8 13 21
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009970797537649639" id="id000869081225922319" class="input-output-copier">Copy</div></div><pre id="id009970797537649639">20
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test we can divide array $$$a$$$ in the following way: $$$[4, 8, 15, 16], [23], [42]$$$. </p></div>