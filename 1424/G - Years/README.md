<h2><a href="https://codeforces.com/contest/1424/problem/G" target="_blank" rel="noopener noreferrer">1424G — Years</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1424G](https://codeforces.com/contest/1424/problem/G) |

## Topics
`data structures` `sortings`

---

## Problem Statement

<div class="header"><div class="title">G. Years</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>During one of the space missions, humans have found an evidence of previous life at one of the planets. They were lucky enough to find a book with birth and death years of each individual that had been living at this planet. What's interesting is that these years are in the range $$$(1, 10^9)$$$! Therefore, the planet was named Longlifer.</p><p>In order to learn more about Longlifer's previous population, scientists need to determine the year with maximum number of individuals that were alive, as well as the number of alive individuals in that year. Your task is to help scientists solve this problem!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the number of people.</p><p>Each of the following $$$n$$$ lines contain two integers $$$b$$$ and $$$d$$$ ($$$1 \le b \lt d \le 10^9$$$) representing birth and death year (respectively) of each individual.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two integer numbers separated by blank character, $$$y$$$  — the year with a maximum number of people alive and $$$k$$$  — the number of people alive in year $$$y$$$.</p><p>In the case of multiple possible solutions, print the solution with minimum year.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009079636349501327" id="id009890074473981383" class="input-output-copier">Copy</div></div><pre id="id009079636349501327">3
1 5
2 4
5 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005546237864847098" id="id008505735076384184" class="input-output-copier">Copy</div></div><pre id="id005546237864847098">2 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015407107995370306" id="id0048422441764720703" class="input-output-copier">Copy</div></div><pre id="id0015407107995370306">4
3 4
4 5
4 6
8 10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002571914320320945" id="id00016147880929617164" class="input-output-copier">Copy</div></div><pre id="id002571914320320945">4 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>You can assume that an individual living from $$$b$$$ to $$$d$$$ has been born at the beginning of $$$b$$$ and died at the beginning of $$$d$$$, and therefore living for $$$d$$$ - $$$b$$$ years.</p></div>