<h2><a href="https://codeforces.com/contest/1213/problem/C" target="_blank" rel="noopener noreferrer">1213C — Book Reading</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1213C](https://codeforces.com/contest/1213/problem/C) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">C. Book Reading</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp is reading a book consisting of $$$n$$$ pages numbered from $$$1$$$ to $$$n$$$. Every time he finishes the page with the number divisible by $$$m$$$, he writes down the last digit of this page number. For example, if $$$n=15$$$ and $$$m=5$$$, pages divisible by $$$m$$$ are $$$5, 10, 15$$$. Their last digits are $$$5, 0, 5$$$ correspondingly, their sum is $$$10$$$.</p><p>Your task is to calculate the sum of all digits Polycarp has written down.</p><p>You have to answer $$$q$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$q$$$ ($$$1 \le q \le 1000$$$) — the number of queries.</p><p>The following $$$q$$$ lines contain queries, one per line. Each query is given as two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 10^{16}$$$) — the number of pages in the book and required divisor, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query print the answer for it — the sum of digits written down by Polycarp.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009379622574576177" id="id005658190185479111" class="input-output-copier">Copy</div></div><pre id="id009379622574576177">7
1 1
10 1
100 3
1024 14
998244353 1337
123 144
1234312817382646 13
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007981438577846803" id="id005978430670411181" class="input-output-copier">Copy</div></div><pre id="id007981438577846803">1
45
153
294
3359835
0
427262129093995
</pre></div></div></div>