<h2><a href="https://codeforces.com/contest/1068/problem/B" target="_blank" rel="noopener noreferrer">1068B — LCM</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1068B](https://codeforces.com/contest/1068/problem/B) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. LCM</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ivan has number $$$b$$$. He is sorting through the numbers $$$a$$$ from $$$1$$$ to $$$10^{18}$$$, and for every $$$a$$$ writes $$$\frac{[a, \,\, b]}{a}$$$ on blackboard. Here $$$[a, \,\, b]$$$ stands for least common multiple of $$$a$$$ and $$$b$$$. Ivan is very lazy, that's why this task bored him soon. But he is interested in how many different numbers he would write on the board if he would finish the task. Help him to find the quantity of different numbers he would write on the board.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains one integer — $$$b$$$ $$$(1 \le b \le 10^{10})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one number — answer for the problem.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023545007240186133" id="id0013632387438858318" class="input-output-copier">Copy</div></div><pre id="id0023545007240186133">1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006571274058417544" id="id006919599938275339" class="input-output-copier">Copy</div></div><pre id="id006571274058417544">1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005023773342091659" id="id0023698122186262316" class="input-output-copier">Copy</div></div><pre id="id005023773342091659">2<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009988004254960307" id="id009760138721446143" class="input-output-copier">Copy</div></div><pre id="id009988004254960307">2</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example $$$[a, \,\, 1] = a$$$, therefore $$$\frac{[a, \,\, b]}{a}$$$ is always equal to $$$1$$$.</p><p>In the second example $$$[a, \,\, 2]$$$ can be equal to $$$a$$$ or $$$2 \cdot a$$$ depending on parity of $$$a$$$. $$$\frac{[a, \,\, b]}{a}$$$ can be equal to $$$1$$$ and $$$2$$$.</p></div>