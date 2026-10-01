<h2><a href="https://codeforces.com/contest/1684/problem/B" target="_blank" rel="noopener noreferrer">1684B — Z mod X = C</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1684B](https://codeforces.com/contest/1684/problem/B) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Z mod X = C</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three positive integers $$$a$$$, $$$b$$$, $$$c$$$ ($$$a  \lt  b  \lt  c$$$). You have to find three positive integers $$$x$$$, $$$y$$$, $$$z$$$ such that:</p><p>$$$$$$x \bmod y = a,$$$$$$ $$$$$$y \bmod z = b,$$$$$$ $$$$$$z \bmod x = c.$$$$$$</p><p>Here $$$p \bmod q$$$ denotes the remainder from dividing $$$p$$$ by $$$q$$$. It is possible to show that for such constraints the answer always exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10\,000$$$) — the number of test cases. Description of the test cases follows.</p><p>Each test case contains a single line with three integers $$$a$$$, $$$b$$$, $$$c$$$ ($$$1 \le a  \lt  b  \lt  c \le 10^8$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output three positive integers $$$x$$$, $$$y$$$, $$$z$$$ ($$$1 \le x, y, z \le 10^{18}$$$) such that $$$x \bmod y = a$$$, $$$y \bmod z = b$$$, $$$z \bmod x = c$$$.</p><p>You can output any correct answer.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003524273839586599" id="id009604401297763852" class="input-output-copier">Copy</div></div><pre id="id003524273839586599">4
1 3 4
127 234 421
2 7 8
59 94 388
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007802281221748621" id="id0062612946762894" class="input-output-copier">Copy</div></div><pre id="id007802281221748621">12 11 4
1063 234 1484
25 23 8
2221 94 2609
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case:</p><p>$$$$$$x \bmod y = 12 \bmod 11 = 1;$$$$$$</p><p>$$$$$$y \bmod z = 11 \bmod 4 = 3;$$$$$$</p><p>$$$$$$z \bmod x = 4 \bmod 12 = 4.$$$$$$</p></div>