<h2><a href="https://codeforces.com/contest/1076/problem/C" target="_blank" rel="noopener noreferrer">1076C — Meme Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1076C](https://codeforces.com/contest/1076/problem/C) |

## Topics
`binary search` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Meme Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Try guessing the statement from this picture: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/1818bdbefb33915e3dc4c590707e345859fcdd75.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>You are given a non-negative integer $$$d$$$. You have to find two non-negative real numbers $$$a$$$ and $$$b$$$ such that $$$a + b = d$$$ and $$$a \cdot b = d$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains $$$t$$$ ($$$1 \le t \le 10^3$$$) — the number of test cases.</p><p>Each test case contains one integer $$$d$$$ $$$(0 \le d \le 10^3)$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test print one line.</p><p>If there is an answer for the $$$i$$$-th test, print "Y", and then the numbers $$$a$$$ and $$$b$$$.</p><p>If there is no answer for the $$$i$$$-th test, print "N".</p><p>Your answer will be considered correct if $$$|(a + b) - a \cdot b| \le 10^{-6}$$$ and $$$|(a + b) - d| \le 10^{-6}$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003409480392561832" id="id0036600928209919636" class="input-output-copier">Copy</div></div><pre id="id003409480392561832">7
69
0
1
4
5
999
1000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009104784536517274" id="id008338422865403228" class="input-output-copier">Copy</div></div><pre id="id0009104784536517274">Y 67.985071301 1.014928699
Y 0.000000000 0.000000000
N
Y 2.000000000 2.000000000
Y 3.618033989 1.381966011
Y 997.998996990 1.001003010
Y 998.998997995 1.001002005
</pre></div></div></div>