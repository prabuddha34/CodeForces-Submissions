<h2><a href="https://codeforces.com/contest/1003/problem/A" target="_blank" rel="noopener noreferrer">1003A — Polycarp's Pockets</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1003A](https://codeforces.com/contest/1003/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Polycarp's Pockets</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp has $$$n$$$ coins, the value of the $$$i$$$-th coin is $$$a_i$$$. Polycarp wants to distribute all the coins between his pockets, but he cannot put two coins with the same value into the same pocket.</p><p>For example, if Polycarp has got six coins represented as an array $$$a = [1, 2, 4, 3, 3, 2]$$$, he can distribute the coins into two pockets as follows: $$$[1, 2, 3], [2, 3, 4]$$$.</p><p>Polycarp wants to distribute all the coins with the minimum number of used pockets. Help him to do that.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$1 \le n \le 100$$$) — the number of coins.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 100$$$) — values of coins.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print only one integer — the minimum number of pockets Polycarp needs to distribute all the coins so no two coins with the same value are put into the same pocket.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00006458573897569653" id="id0011996670107035656" class="input-output-copier">Copy</div></div><pre id="id00006458573897569653">6<br>1 2 4 3 3 2<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006732333132124683" id="id001818376753358295" class="input-output-copier">Copy</div></div><pre id="id006732333132124683">2<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002779306373810192" id="id0029091301378644674" class="input-output-copier">Copy</div></div><pre id="id002779306373810192">1<br>100<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003687290080278425" id="id0034406260128632293" class="input-output-copier">Copy</div></div><pre id="id003687290080278425">1<br></pre></div></div></div>