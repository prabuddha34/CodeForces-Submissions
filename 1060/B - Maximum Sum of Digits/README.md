<h2><a href="https://codeforces.com/contest/1060/problem/B" target="_blank" rel="noopener noreferrer">1060B — Maximum Sum of Digits</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1060B](https://codeforces.com/contest/1060/problem/B) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Maximum Sum of Digits</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive integer $$$n$$$.</p><p>Let $$$S(x)$$$ be sum of digits in base 10 representation of $$$x$$$, for example, $$$S(123) = 1 + 2 + 3 = 6$$$, $$$S(0) = 0$$$.</p><p>Your task is to find two integers $$$a, b$$$, such that $$$0 \leq a, b \leq n$$$, $$$a + b = n$$$ and $$$S(a) + S(b)$$$ is the largest possible among all such pairs.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line of input contains an integer $$$n$$$ $$$(1 \leq n \leq 10^{12})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print largest $$$S(a) + S(b)$$$ among all pairs of integers $$$a, b$$$, such that $$$0 \leq a, b \leq n$$$ and $$$a + b = n$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008049708694859031" id="id003624469124527383" class="input-output-copier">Copy</div></div><pre id="id008049708694859031">35<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009839375515800682" id="id008010721104169706" class="input-output-copier">Copy</div></div><pre id="id009839375515800682">17<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009545057875427834" id="id006137513451514386" class="input-output-copier">Copy</div></div><pre id="id009545057875427834">10000000000<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009291203920264396" id="id0004771449998075261" class="input-output-copier">Copy</div></div><pre id="id009291203920264396">91<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, you can choose, for example, $$$a = 17$$$ and $$$b = 18$$$, so that $$$S(17) + S(18) = 1 + 7 + 1 + 8 = 17$$$. It can be shown that it is impossible to get a larger answer.</p><p>In the second test example, you can choose, for example, $$$a = 5000000001$$$ and $$$b = 4999999999$$$, with $$$S(5000000001) + S(4999999999) = 91$$$. It can be shown that it is impossible to get a larger answer.</p></div>