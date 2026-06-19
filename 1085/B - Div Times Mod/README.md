<h2><a href="https://codeforces.com/contest/1085/problem/B" target="_blank" rel="noopener noreferrer">1085B — Div Times Mod</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1085B](https://codeforces.com/contest/1085/problem/B) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">B. Div Times Mod</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vasya likes to solve equations. Today he wants to solve $$$(x~\mathrm{div}~k) \cdot (x \bmod k) = n$$$, where $$$\mathrm{div}$$$ and $$$\mathrm{mod}$$$ stand for integer division and modulo operations (refer to the Notes below for exact definition). In this equation, $$$k$$$ and $$$n$$$ are positive integer parameters, and $$$x$$$ is a positive integer unknown. If there are several solutions, Vasya wants to find the smallest possible $$$x$$$. Can you help him?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$k$$$ ($$$1 \leq n \leq 10^6$$$, $$$2 \leq k \leq 1000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer $$$x$$$ — the smallest positive integer solution to $$$(x~\mathrm{div}~k) \cdot (x \bmod k) = n$$$. It is guaranteed that this equation has at least one positive integer solution.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008845026475165002" id="id004104090221898721" class="input-output-copier">Copy</div></div><pre id="id008845026475165002">6 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002820539160986717" id="id005874561412464876" class="input-output-copier">Copy</div></div><pre id="id002820539160986717">11
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009145455788507961" id="id004407153237421836" class="input-output-copier">Copy</div></div><pre id="id009145455788507961">1 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007503853186382715" id="id0016883273612290295" class="input-output-copier">Copy</div></div><pre id="id007503853186382715">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0017793414162949817" id="id006815805082270926" class="input-output-copier">Copy</div></div><pre id="id0017793414162949817">4 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0030540449393485924" id="id005628391445432855" class="input-output-copier">Copy</div></div><pre id="id0030540449393485924">10
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The result of integer division $$$a~\mathrm{div}~b$$$ is equal to the largest integer $$$c$$$ such that $$$b \cdot c \leq a$$$. $$$a$$$ modulo $$$b$$$ (shortened $$$a \bmod b$$$) is the only integer $$$c$$$ such that $$$0 \leq c  \lt  b$$$, and $$$a - c$$$ is divisible by $$$b$$$.</p><p>In the first sample, $$$11~\mathrm{div}~3 = 3$$$ and $$$11 \bmod 3 = 2$$$. Since $$$3 \cdot 2 = 6$$$, then $$$x = 11$$$ is a solution to $$$(x~\mathrm{div}~3) \cdot (x \bmod 3) = 6$$$. One can see that $$$19$$$ is the only other positive integer solution, hence $$$11$$$ is the smallest one.</p></div>