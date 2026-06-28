<h2><a href="https://codeforces.com/contest/1157/problem/B" target="_blank" rel="noopener noreferrer">1157B — Long Number</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1157B](https://codeforces.com/contest/1157/problem/B) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Long Number</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a long decimal number $$$a$$$ consisting of $$$n$$$ digits from $$$1$$$ to $$$9$$$. You also have a function $$$f$$$ that maps every digit from $$$1$$$ to $$$9$$$ to some (possibly the same) digit from $$$1$$$ to $$$9$$$.</p><p>You can perform the following operation <span class="tex-font-style-bf">no more than once</span>: choose a non-empty <span class="tex-font-style-bf">contiguous subsegment</span> of digits in $$$a$$$, and replace each digit $$$x$$$ from this segment with $$$f(x)$$$. For example, if $$$a = 1337$$$, $$$f(1) = 1$$$, $$$f(3) = 5$$$, $$$f(7) = 3$$$, and you choose the segment consisting of three rightmost digits, you get $$$1553$$$ as the result.</p><p>What is the maximum possible number you can obtain applying this operation no more than once?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of digits in $$$a$$$.</p><p>The second line contains a string of $$$n$$$ characters, denoting the number $$$a$$$. Each character is a decimal digit from $$$1$$$ to $$$9$$$.</p><p>The third line contains exactly $$$9$$$ integers $$$f(1)$$$, $$$f(2)$$$, ..., $$$f(9)$$$ ($$$1 \le f(i) \le 9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the maximum number you can get after applying the operation described in the statement no more than once.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0054608183031519" id="id0017029800622861269" class="input-output-copier">Copy</div></div><pre id="id0054608183031519">4
1337
1 2 5 4 6 6 3 1 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009007393547327153" id="id0016445069811818025" class="input-output-copier">Copy</div></div><pre id="id009007393547327153">1557
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0003860697423795845" id="id008600083572680329" class="input-output-copier">Copy</div></div><pre id="id0003860697423795845">5
11111
9 8 7 6 5 4 3 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00878699891988721" id="id00462144528731834" class="input-output-copier">Copy</div></div><pre id="id00878699891988721">99999
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006676571413722647" id="id006548883705942213" class="input-output-copier">Copy</div></div><pre id="id006676571413722647">2
33
1 1 1 1 1 1 1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007190306872812716" id="id001867354068423105" class="input-output-copier">Copy</div></div><pre id="id007190306872812716">33
</pre></div></div></div>