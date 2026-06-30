<h2><a href="https://codeforces.com/contest/1381/problem/A1" target="_blank" rel="noopener noreferrer">1381A1 — Prefix Flip (Easy Version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1381A1](https://codeforces.com/contest/1381/problem/A1) |

## Topics
`constructive algorithms` `data structures` `strings`

---

## Problem Statement

<div class="header"><div class="title">A1. Prefix Flip (Easy Version)</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">This is the easy version of the problem. The difference between the versions is the constraint on $$$n$$$ and the required number of operations. You can make hacks only if all versions of the problem are solved.</span></p><p>There are two binary strings $$$a$$$ and $$$b$$$ of length $$$n$$$ (a binary string is a string consisting of symbols $$$0$$$ and $$$1$$$). In an operation, you select a prefix of $$$a$$$, and simultaneously invert the bits in the prefix ($$$0$$$ changes to $$$1$$$ and $$$1$$$ changes to $$$0$$$) and reverse the order of the bits in the prefix.</p><p>For example, if $$$a=001011$$$ and you select the prefix of length $$$3$$$, it becomes $$$011011$$$. Then if you select the entire string, it becomes $$$001001$$$.</p><p>Your task is to transform the string $$$a$$$ into $$$b$$$ in at most $$$3n$$$ operations. It can be proved that it is always possible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\le t\le 1000$$$)  — the number of test cases. Next $$$3t$$$ lines contain descriptions of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1\le n\le 1000$$$)  — the length of the binary strings.</p><p>The next two lines contain two binary strings $$$a$$$ and $$$b$$$ of length $$$n$$$.</p><p>It is guaranteed that the sum of $$$n$$$ across all test cases does not exceed $$$1000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output an integer $$$k$$$ ($$$0\le k\le 3n$$$), followed by $$$k$$$ integers $$$p_1,\ldots,p_k$$$ ($$$1\le p_i\le n$$$). Here $$$k$$$ is the number of operations you use and $$$p_i$$$ is the length of the prefix you flip in the $$$i$$$-th operation.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0043868729524526184" id="id00693859717369165" class="input-output-copier">Copy</div></div><pre id="id0043868729524526184">5
2
01
10
5
01011
11100
2
01
01
10
0110011011
1000110100
1
0
1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005003261855964137" id="id000826862720954149" class="input-output-copier">Copy</div></div><pre id="id005003261855964137">3 1 2 1
6 5 2 5 3 1 2
0
9 4 1 2 10 4 1 2 1 5
1 1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we have $$$01\to 11\to 00\to 10$$$.</p><p>In the second test case, we have $$$01011\to 00101\to 11101\to 01000\to 10100\to 00100\to 11100$$$.</p><p>In the third test case, the strings are already the same. Another solution is to flip the prefix of length $$$2$$$, which will leave $$$a$$$ unchanged.</p></div>