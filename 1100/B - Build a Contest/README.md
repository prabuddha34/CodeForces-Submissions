<h2><a href="https://codeforces.com/contest/1100/problem/B" target="_blank" rel="noopener noreferrer">1100B — Build a Contest</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1100B](https://codeforces.com/contest/1100/problem/B) |

## Topics
`data structures` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Build a Contest</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Arkady coordinates rounds on some not really famous competitive programming platform. Each round features $$$n$$$ problems of distinct difficulty, the difficulties are numbered from $$$1$$$ to $$$n$$$.</p><p>To hold a round Arkady needs $$$n$$$ new (not used previously) problems, one for each difficulty. As for now, Arkady creates all the problems himself, but unfortunately, he can't just create a problem of a desired difficulty. Instead, when he creates a problem, he evaluates its difficulty from $$$1$$$ to $$$n$$$ and puts it into the problems pool.</p><p>At each moment when Arkady can choose a set of $$$n$$$ new problems of distinct difficulties from the pool, he holds a round with these problems and removes them from the pool. Arkady always creates one problem at a time, so if he can hold a round after creating a problem, he immediately does it.</p><p>You are given a sequence of problems' difficulties in the order Arkady created them. For each problem, determine whether Arkady held the round right after creating this problem, or not. Initially the problems pool is empty.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 10^5$$$) — the number of difficulty levels and the number of problems Arkady created.</p><p>The second line contains $$$m$$$ integers $$$a_1, a_2, \ldots, a_m$$$ ($$$1 \le a_i \le n$$$) — the problems' difficulties in the order Arkady created them.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a line containing $$$m$$$ digits. The $$$i$$$-th digit should be $$$1$$$ if Arkady held the round after creation of the $$$i$$$-th problem, and $$$0$$$ otherwise.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005994600428679913" id="id005712112132661059" class="input-output-copier">Copy</div></div><pre id="id005994600428679913">3 11
2 3 1 2 2 2 3 2 2 3 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006671529048583947" id="id0024653922245127857" class="input-output-copier">Copy</div></div><pre id="id006671529048583947">00100000001
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006917524206142516" id="id004898942217389338" class="input-output-copier">Copy</div></div><pre id="id006917524206142516">4 8
4 1 3 3 2 3 3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0027388065957702945" id="id007491952689161228" class="input-output-copier">Copy</div></div><pre id="id0027388065957702945">00001000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example Arkady held the round after the first three problems, because they are of distinct difficulties, and then only after the last problem.</p></div>