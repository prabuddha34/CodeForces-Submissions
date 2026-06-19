<h2><a href="https://codeforces.com/contest/1119/problem/A" target="_blank" rel="noopener noreferrer">1119A — Ilya and a Colorful Walk</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1119A](https://codeforces.com/contest/1119/problem/A) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Ilya and a Colorful Walk</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ilya lives in a beautiful city of Chordalsk.</p><p>There are $$$n$$$ houses on the street Ilya lives, they are numerated from $$$1$$$ to $$$n$$$ from left to right; the distance between every two neighboring houses is equal to $$$1$$$ unit. The neighboring houses are $$$1$$$ and $$$2$$$, $$$2$$$ and $$$3$$$, ..., $$$n-1$$$ and $$$n$$$. The houses $$$n$$$ and $$$1$$$ are not neighboring.</p><p>The houses are colored in colors $$$c_1, c_2, \ldots, c_n$$$ so that the $$$i$$$-th house is colored in the color $$$c_i$$$. Everyone knows that Chordalsk is not boring, so there are at least two houses colored in different colors.</p><p>Ilya wants to select two houses $$$i$$$ and $$$j$$$ so that $$$1 \leq i  \lt  j \leq n$$$, and they have different colors: $$$c_i \neq c_j$$$. He will then walk from the house $$$i$$$ to the house $$$j$$$ the distance of $$$(j-i)$$$ units.</p><p>Ilya loves long walks, so he wants to choose the houses so that the distance between them is the maximum possible.</p><p>Help Ilya, find this maximum possible distance.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$3 \leq n \leq 300\,000$$$) — the number of cities on the street.</p><p>The second line contains $$$n$$$ integers $$$c_1, c_2, \ldots, c_n$$$ ($$$1 \leq c_i \leq n$$$) — the colors of the houses.</p><p>It is guaranteed that there is at least one pair of indices $$$i$$$ and $$$j$$$ so that $$$1 \leq i  \lt  j \leq n$$$ and $$$c_i \neq c_j$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the maximum possible distance Ilya can walk.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00752931317699195" id="id004643326774997977" class="input-output-copier">Copy</div></div><pre id="id00752931317699195">5
1 2 3 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003592279393198189" id="id006994380587541463" class="input-output-copier">Copy</div></div><pre id="id003592279393198189">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0004641976453782792" id="id009438741613225072" class="input-output-copier">Copy</div></div><pre id="id0004641976453782792">3
1 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006830634116834707" id="id007759545996787831" class="input-output-copier">Copy</div></div><pre id="id006830634116834707">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007736327435216014" id="id0006598525609927253" class="input-output-copier">Copy</div></div><pre id="id007736327435216014">7
1 1 3 1 1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007878732088222836" id="id0025545281569045997" class="input-output-copier">Copy</div></div><pre id="id007878732088222836">4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example the optimal way is to walk from the first house to the last one, where Ilya can walk the distance of $$$5-1 = 4$$$ units.</p><p>In the second example the optimal way is to either walk from the first house to the second or from the second to the third. Both these ways have the distance of $$$1$$$ unit.</p><p>In the third example the optimal way is to walk from the third house to the last one, where Ilya can walk the distance of $$$7-3 = 4$$$ units. </p></div>