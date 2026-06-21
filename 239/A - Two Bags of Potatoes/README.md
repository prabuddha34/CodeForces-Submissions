<h2><a href="https://codeforces.com/contest/239/problem/A" target="_blank" rel="noopener noreferrer">239A — Two Bags of Potatoes</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 239A](https://codeforces.com/contest/239/problem/A) |

## Topics
`greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Two Bags of Potatoes</div><div class="time-limit"><div class="property-title">time limit per test</div>0.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Valera had two bags of potatoes, the first of these bags contains $$$x$$$ $$$(x \ge 1)$$$ potatoes, and the second — $$$y$$$ $$$(y \ge 1)$$$ potatoes. Valera — a very scattered boy, so the first bag of potatoes (it contains $$$x$$$ potatoes) Valera lost. Valera remembers that the total amount of potatoes $$$(x + y)$$$ in the two bags, firstly, was not greater than $$$n$$$, and, secondly, was divisible by $$$k$$$.</p><p>Help Valera to determine how many potatoes could be in the first bag. Print all such possible numbers in ascending order.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains three integers $$$y$$$, $$$k$$$, $$$n$$$ ($$$1 \le y, k, n \le 10^9;$$$ $$$\frac{n}{k}$$$ $$$\le 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the list of whitespace-separated integers — all possible values of $$$x$$$ in ascending order. You should print each possible value of $$$x$$$ exactly once.</p><p>If there are no such values of $$$x$$$, print a single integer $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0021053219393651867" id="id009847167962330066" class="input-output-copier">Copy</div></div><pre id="id0021053219393651867">10 1 10<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0022354108699685127" id="id0006430330596332923" class="input-output-copier">Copy</div></div><pre id="id0022354108699685127">-1<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0017289369321333414" id="id008573093162049845" class="input-output-copier">Copy</div></div><pre id="id0017289369321333414">10 6 40<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0033858867343163845" id="id004138077407996609" class="input-output-copier">Copy</div></div><pre id="id0033858867343163845">2 8 14 20 26 <br></pre></div></div></div>