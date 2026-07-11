<h2><a href="https://codeforces.com/contest/1108/problem/D" target="_blank" rel="noopener noreferrer">1108D — Diverse Garland</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1108D](https://codeforces.com/contest/1108/problem/D) |

## Topics
`constructive algorithms` `dp` `greedy`

---

## Problem Statement

<div class="header"><div class="title">D. Diverse Garland</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a garland consisting of $$$n$$$ lamps. Each lamp is colored red, green or blue. The color of the $$$i$$$-th lamp is $$$s_i$$$ ('<span class="tex-font-style-tt">R</span>', '<span class="tex-font-style-tt">G</span>' and '<span class="tex-font-style-tt">B</span>' — colors of lamps in the garland).</p><p>You have to recolor some lamps in this garland (recoloring a lamp means changing its initial color to another) in such a way that the obtained garland is <span class="tex-font-style-bf">diverse</span>.</p><p>A garland is called <span class="tex-font-style-bf">diverse</span> if any two adjacent (consecutive) lamps (i. e. such lamps that the distance between their positions is $$$1$$$) have distinct colors.</p><p>In other words, if the obtained garland is $$$t$$$ then for each $$$i$$$ from $$$1$$$ to $$$n-1$$$ the condition $$$t_i \ne t_{i + 1}$$$ should be satisfied.</p><p>Among all ways to recolor the initial garland to make it <span class="tex-font-style-bf">diverse</span> you have to choose one with the <span class="tex-font-style-bf">minimum</span> number of recolored lamps. If there are multiple optimal solutions, print <span class="tex-font-style-bf">any</span> of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of lamps.</p><p>The second line of the input contains the string $$$s$$$ consisting of $$$n$$$ characters '<span class="tex-font-style-tt">R</span>', '<span class="tex-font-style-tt">G</span>' and '<span class="tex-font-style-tt">B</span>' — colors of lamps in the garland.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line of the output print one integer $$$r$$$ — the <span class="tex-font-style-bf">minimum</span> number of recolors needed to obtain a <span class="tex-font-style-bf">diverse</span> garland from the given one.</p><p>In the second line of the output print one string $$$t$$$ of length $$$n$$$ — a <span class="tex-font-style-bf">diverse</span> garland obtained from the initial one with <span class="tex-font-style-bf">minimum</span> number of recolors. If there are multiple optimal solutions, print <span class="tex-font-style-bf">any</span> of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020865136158660946" id="id005286032188726011" class="input-output-copier">Copy</div></div><pre id="id0020865136158660946">9
RBGRRBRGG
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008379526585358721" id="id005000445077969019" class="input-output-copier">Copy</div></div><pre id="id008379526585358721">2
RBGRGBRGR
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002871012043919551" id="id009246930688153535" class="input-output-copier">Copy</div></div><pre id="id002871012043919551">8
BBBGBRRR
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0008778404686014629" id="id009940657535365829" class="input-output-copier">Copy</div></div><pre id="id0008778404686014629">2
BRBGBRGR
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009343553260404208" id="id008748423104834112" class="input-output-copier">Copy</div></div><pre id="id009343553260404208">13
BBRRRRGGGGGRR
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006278676520367259" id="id005485500321468563" class="input-output-copier">Copy</div></div><pre id="id006278676520367259">6
BGRBRBGBGBGRG
</pre></div></div></div>