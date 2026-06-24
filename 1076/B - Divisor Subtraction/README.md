<h2><a href="https://codeforces.com/contest/1076/problem/B" target="_blank" rel="noopener noreferrer">1076B — Divisor Subtraction</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1076B](https://codeforces.com/contest/1076/problem/B) |

## Topics
`implementation` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Divisor Subtraction</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer number $$$n$$$. The following algorithm is applied to it:</p><ol> <li> if $$$n = 0$$$, then end algorithm; </li><li> find the smallest <span class="tex-font-style-bf">prime</span> divisor $$$d$$$ of $$$n$$$; </li><li> subtract $$$d$$$ from $$$n$$$ and go to step $$$1$$$. </li></ol><p>Determine the number of subtrations the algorithm will make.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains a single integer $$$n$$$ ($$$2 \le n \le 10^{10}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the number of subtractions the algorithm will make.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004647688015909339" id="id0019449704424756187" class="input-output-copier">Copy</div></div><pre id="id004647688015909339">5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00894540418781532" id="id0016077941192808443" class="input-output-copier">Copy</div></div><pre id="id00894540418781532">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0048400231089709045" id="id005808698786330327" class="input-output-copier">Copy</div></div><pre id="id0048400231089709045">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005978562236981334" id="id007118570427174279" class="input-output-copier">Copy</div></div><pre id="id005978562236981334">2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example $$$5$$$ is the smallest prime divisor, thus it gets subtracted right away to make a $$$0$$$.</p><p>In the second example $$$2$$$ is the smallest prime divisor at both steps.</p></div>