<h2><a href="https://codeforces.com/contest/1443/problem/A" target="_blank" rel="noopener noreferrer">1443A — Kids Seating</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1443A](https://codeforces.com/contest/1443/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Kids Seating</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Today the kindergarten has a new group of $$$n$$$ kids who need to be seated at the dinner table. The chairs at the table are numbered from $$$1$$$ to $$$4n$$$. Two kids can't sit on the same chair. It is known that two kids who sit on chairs with numbers $$$a$$$ and $$$b$$$ ($$$a \neq b$$$) will indulge if: </p><ol> <li> $$$gcd(a, b) = 1$$$ or, </li><li> $$$a$$$ divides $$$b$$$ or $$$b$$$ divides $$$a$$$. </li></ol><p>$$$gcd(a, b)$$$ — the maximum number $$$x$$$ such that $$$a$$$ is divisible by $$$x$$$ and $$$b$$$ is divisible by $$$x$$$.</p><p>For example, if $$$n=3$$$ and the kids sit on chairs with numbers $$$2$$$, $$$3$$$, $$$4$$$, then they will indulge since $$$4$$$ is divided by $$$2$$$ and $$$gcd(2, 3) = 1$$$. If kids sit on chairs with numbers $$$4$$$, $$$6$$$, $$$10$$$, then they will not indulge.</p><p>The teacher really doesn't want the mess at the table, so she wants to seat the kids so there are no $$$2$$$ of the kid that can indulge. More formally, she wants no pair of chairs $$$a$$$ and $$$b$$$ that the kids occupy to fulfill the condition above.</p><p>Since the teacher is very busy with the entertainment of the kids, she asked you to solve this problem.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>Each test case consists of one line containing an integer $$$n$$$ ($$$1 \leq n \leq 100$$$) — the number of kids.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$t$$$ lines, which contain $$$n$$$ distinct integers from $$$1$$$ to $$$4n$$$ — the numbers of chairs that the kids should occupy in the corresponding test case. If there are multiple answers, print any of them. You can print $$$n$$$ numbers in any order.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015407203436545192" id="id00306253728613877" class="input-output-copier">Copy</div></div><pre id="id0015407203436545192">3
2
3
4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004901649449528639" id="id007021262103623132" class="input-output-copier">Copy</div></div><pre id="id004901649449528639">6 4
4 6 10
14 10 12 8
</pre></div></div></div>