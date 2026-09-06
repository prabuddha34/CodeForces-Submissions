<h2><a href="https://codeforces.com/contest/1413/problem/A" target="_blank" rel="noopener noreferrer">1413A — Finding Sasuke</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1413A](https://codeforces.com/contest/1413/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Finding Sasuke</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Naruto has sneaked into the Orochimaru's lair and is now looking for Sasuke. There are $$$T$$$ rooms there. Every room has a door into it, each door can be described by the number $$$n$$$ of seals on it and their integer energies $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$. All energies $$$a_i$$$ are <span class="tex-font-style-bf">nonzero</span> and do not exceed $$$100$$$ by absolute value. Also, <span class="tex-font-style-bf">$$$n$$$ is even</span>.</p><p>In order to open a door, Naruto must find such $$$n$$$ seals with integer energies $$$b_1$$$, $$$b_2$$$, ..., $$$b_n$$$ that the following equality holds: $$$a_{1} \cdot b_{1} + a_{2} \cdot b_{2} + ... + a_{n} \cdot b_{n} = 0$$$. All $$$b_i$$$ must <span class="tex-font-style-bf">be nonzero</span> as well as $$$a_i$$$ are, and also <span class="tex-font-style-bf">must not exceed $$$100$$$</span> by absolute value. Please find required seals for every room there.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the only integer $$$T$$$ ($$$1 \leq T \leq 1000$$$) standing for the number of rooms in the Orochimaru's lair. The other lines contain descriptions of the doors.</p><p>Each description starts with the line containing the only even integer $$$n$$$ ($$$2 \leq n \leq 100$$$) denoting the number of seals.</p><p>The following line contains the space separated sequence of nonzero integers $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$ ($$$|a_{i}| \leq 100$$$, $$$a_{i} \neq 0$$$) denoting the energies of seals.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each door print a space separated sequence of nonzero integers $$$b_1$$$, $$$b_2$$$, ..., $$$b_n$$$ ($$$|b_{i}| \leq 100$$$, $$$b_{i} \neq 0$$$) denoting the seals that can open the door. If there are multiple valid answers, print any. It can be proven that at least one answer always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009375395872852578" id="id00970290752137841" class="input-output-copier">Copy</div></div><pre id="id009375395872852578">2
2
1 100
4
1 2 3 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008884076274289757" id="id006212022991271008" class="input-output-copier">Copy</div></div><pre id="id008884076274289757">-100 1
1 1 1 -1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first door Naruto can use energies $$$[-100, 1]$$$. The required equality does indeed hold: $$$1 \cdot (-100) + 100 \cdot 1 = 0$$$.</p><p>For the second door Naruto can use, for example, energies $$$[1, 1, 1, -1]$$$. The required equality also holds: $$$1 \cdot 1 + 2 \cdot 1 + 3 \cdot 1 + 6 \cdot (-1) = 0$$$.</p></div>