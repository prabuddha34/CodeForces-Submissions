<h2><a href="https://codeforces.com/contest/1157/problem/C1" target="_blank" rel="noopener noreferrer">1157C1 — Increasing Subsequence (easy version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1157C1](https://codeforces.com/contest/1157/problem/C1) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">C1. Increasing Subsequence (easy version)</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">The only difference between problems C1 and C2 is that all values in input of problem C1 are distinct (this condition may be false for problem C2)</span>.</p><p>You are given a sequence $$$a$$$ consisting of $$$n$$$ integers. <span class="tex-font-style-bf">All these integers are distinct, each value from $$$1$$$ to $$$n$$$ appears in the sequence exactly once.</span></p><p>You are making a sequence of moves. During each move you must take either the leftmost element of the sequence or the rightmost element of the sequence, write it down and remove it from the sequence. Your task is to write down a <span class="tex-font-style-bf">strictly</span> increasing sequence, and among all such sequences you should take the longest (the length of the sequence is the number of elements in it).</p><p>For example, for the sequence $$$[2, 1, 5, 4, 3]$$$ the answer is $$$4$$$ (you take $$$2$$$ and the sequence becomes $$$[1, 5, 4, 3]$$$, then you take the rightmost element $$$3$$$ and the sequence becomes $$$[1, 5, 4]$$$, then you take $$$4$$$ and the sequence becomes $$$[1, 5]$$$ and then you take $$$5$$$ and the sequence becomes $$$[1]$$$, the obtained increasing sequence is $$$[2, 3, 4, 5]$$$).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of elements in $$$a$$$.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le n$$$), where $$$a_i$$$ is the $$$i$$$-th element of $$$a$$$. <span class="tex-font-style-bf">All these integers are pairwise distinct</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line of the output print $$$k$$$ — the maximum number of elements in a <span class="tex-font-style-bf">strictly</span> increasing sequence you can obtain.</p><p>In the second line print a string $$$s$$$ of length $$$k$$$, where the $$$j$$$-th character of this string $$$s_j$$$ should be '<span class="tex-font-style-tt">L</span>' if you take the leftmost element during the $$$j$$$-th move and '<span class="tex-font-style-tt">R</span>' otherwise. If there are multiple answers, you can print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002011240609101732" id="id003481803424070282" class="input-output-copier">Copy</div></div><pre id="id002011240609101732">5
2 1 5 4 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008436698304242254" id="id0014909272283254849" class="input-output-copier">Copy</div></div><pre id="id008436698304242254">4
LRRR
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005783261944254928" id="id002981876589257232" class="input-output-copier">Copy</div></div><pre id="id005783261944254928">7
1 3 5 6 7 4 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0039772864173420597" id="id0040239303999847664" class="input-output-copier">Copy</div></div><pre id="id0039772864173420597">7
LRLRLLL
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0029325157129852686" id="id009539368227741407" class="input-output-copier">Copy</div></div><pre id="id0029325157129852686">3
1 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006622714999400156" id="id0006861261966165488" class="input-output-copier">Copy</div></div><pre id="id006622714999400156">3
LLL
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010270323824910466" id="id0024855369848423725" class="input-output-copier">Copy</div></div><pre id="id0010270323824910466">4
1 2 4 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004403691535561767" id="id0044621142669335745" class="input-output-copier">Copy</div></div><pre id="id004403691535561767">4
LLRL
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first example is described in the problem statement.</p></div>