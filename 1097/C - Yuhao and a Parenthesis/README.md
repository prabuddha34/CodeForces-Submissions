<h2><a href="https://codeforces.com/contest/1097/problem/C" target="_blank" rel="noopener noreferrer">1097C — Yuhao and a Parenthesis</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1097C](https://codeforces.com/contest/1097/problem/C) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">C. Yuhao and a Parenthesis</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>One day, Yuhao came across a problem about checking if some bracket sequences are correct bracket sequences.</p><p>A bracket sequence is any non-empty sequence of opening and closing parentheses. A bracket sequence is called a <span class="tex-font-style-it">correct bracket sequence</span> if it's possible to obtain a correct arithmetic expression by inserting characters "<span class="tex-font-style-tt">+</span>" and "<span class="tex-font-style-tt">1</span>" into this sequence. For example, the sequences "<span class="tex-font-style-tt">(())()</span>", "<span class="tex-font-style-tt">()</span>" and "<span class="tex-font-style-tt">(()(()))</span>" are correct, while the bracket sequences "<span class="tex-font-style-tt">)(</span>", "<span class="tex-font-style-tt">(()</span>" and "<span class="tex-font-style-tt">(()))(</span>" are not correct.</p><p>Yuhao found this problem too simple for him so he decided to make the problem harder. You are given many (not necessarily correct) bracket sequences. The task is to connect some of them into ordered pairs so that each bracket sequence occurs in at most one pair and the concatenation of the bracket sequences in each pair is a correct bracket sequence. The goal is to create as many pairs as possible.</p><p>This problem unfortunately turned out to be too difficult for Yuhao. Can you help him and solve it?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \leq n \leq 10^5$$$) — the number of bracket sequences.</p><p>Each of the following $$$n$$$ lines contains one bracket sequence — a non-empty string which consists only of characters "<span class="tex-font-style-tt">(</span>" and "<span class="tex-font-style-tt">)</span>".</p><p>The sum of lengths of all bracket sequences in the input is at most $$$5 \cdot 10^5$$$.</p><p>Note that a bracket sequence may appear in the input multiple times. In this case, you can use each copy of the sequence separately. Also note that the order in which strings appear in the input doesn't matter.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the maximum number of pairs which can be made, adhering to the conditions in the statement.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007490336507139584" id="id008953306748921329" class="input-output-copier">Copy</div></div><pre id="id007490336507139584">7
)())
)
((
((
(
)
)
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00588469578371337" id="id006321224698490435" class="input-output-copier">Copy</div></div><pre id="id00588469578371337">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0043797087991626205" id="id00323296102519678" class="input-output-copier">Copy</div></div><pre id="id0043797087991626205">4
(
((
(((
(())
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009128697416338778" id="id00799968948296257" class="input-output-copier">Copy</div></div><pre id="id009128697416338778">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004609592952274584" id="id007886332899517898" class="input-output-copier">Copy</div></div><pre id="id004609592952274584">2
(())
()
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0015340037363663717" id="id00843544594970614" class="input-output-copier">Copy</div></div><pre id="id0015340037363663717">1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, it's optimal to construct two pairs: "<span class="tex-font-style-tt">((     )())</span>" and "<span class="tex-font-style-tt">(     )</span>".</p></div>