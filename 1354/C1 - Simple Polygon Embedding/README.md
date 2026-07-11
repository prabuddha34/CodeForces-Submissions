<h2><a href="https://codeforces.com/contest/1354/problem/C1" target="_blank" rel="noopener noreferrer">1354C1 — Simple Polygon Embedding</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1354C1](https://codeforces.com/contest/1354/problem/C1) |

## Topics
`binary search` `geometry` `math` `ternary search`

---

## Problem Statement

<div class="header"><div class="title">C1. Simple Polygon Embedding</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">The statement of this problem is the same as the statement of problem C2. The only difference is that, in problem C1, $$$n$$$ is always even, and in C2, $$$n$$$ is always odd.</span></p><p>You are given a regular polygon with $$$2 \cdot n$$$ vertices (it's convex and has equal sides and equal angles) and all its sides have length $$$1$$$. Let's name it as $$$2n$$$-gon.</p><p>Your task is to find the square of the minimum size such that you can embed $$$2n$$$-gon in the square. Embedding $$$2n$$$-gon in the square means that you need to place $$$2n$$$-gon in the square in such way that each point which lies inside or on a border of $$$2n$$$-gon should also lie inside or on a border of the square.</p><p>You can rotate $$$2n$$$-gon and/or the square.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$T$$$ ($$$1 \le T \le 200$$$) — the number of test cases.</p><p>Next $$$T$$$ lines contain descriptions of test cases — one per line. Each line contains single <span class="tex-font-style-bf">even</span> integer $$$n$$$ ($$$2 \le n \le 200$$$). Don't forget you need to embed $$$2n$$$-gon, not an $$$n$$$-gon.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$T$$$ real numbers — one per test case. For each test case, print the minimum length of a side of the square $$$2n$$$-gon can be embedded in. Your answer will be considered correct if its absolute or relative error doesn't exceed $$$10^{-6}$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005256526992271119" id="id009578956138069147" class="input-output-copier">Copy</div></div><pre id="id005256526992271119">3
2
4
200
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009923327519312746" id="id002245631354296317" class="input-output-copier">Copy</div></div><pre id="id009923327519312746">1.000000000
2.414213562
127.321336469
</pre></div></div></div>