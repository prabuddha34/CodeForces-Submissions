<h2><a href="https://codeforces.com/contest/1029/problem/A" target="_blank" rel="noopener noreferrer">1029A — Many Equal Substrings</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1029A](https://codeforces.com/contest/1029/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Many Equal Substrings</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$t$$$ consisting of $$$n$$$ lowercase Latin letters and an integer number $$$k$$$.</p><p>Let's define a substring of some string $$$s$$$ with indices from $$$l$$$ to $$$r$$$ as $$$s[l \dots r]$$$.</p><p>Your task is to construct such string $$$s$$$ of minimum possible length that there are exactly $$$k$$$ positions $$$i$$$ such that $$$s[i \dots i + n - 1] = t$$$. In other words, your task is to construct such string $$$s$$$ of minimum possible length that there are exactly $$$k$$$ substrings of $$$s$$$ equal to $$$t$$$.</p><p>It is guaranteed that the answer is always unique.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n, k \le 50$$$) — the length of the string $$$t$$$ and the number of substrings.</p><p>The second line of the input contains the string $$$t$$$ consisting of exactly $$$n$$$ lowercase Latin letters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print such string $$$s$$$ of minimum possible length that there are exactly $$$k$$$ substrings of $$$s$$$ equal to $$$t$$$.</p><p>It is guaranteed that the answer is always unique.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006586224980840257" id="id006289055247468434" class="input-output-copier">Copy</div></div><pre id="id006586224980840257">3 4<br>aba<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005456159350969708" id="id003445566378009607" class="input-output-copier">Copy</div></div><pre id="id005456159350969708">ababababa<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007708559591822695" id="id0045401168199556985" class="input-output-copier">Copy</div></div><pre id="id007708559591822695">3 2<br>cat<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006657874568237026" id="id00841792300677542" class="input-output-copier">Copy</div></div><pre id="id006657874568237026">catcat<br></pre></div></div></div>