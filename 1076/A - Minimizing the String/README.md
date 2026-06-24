<h2><a href="https://codeforces.com/contest/1076/problem/A" target="_blank" rel="noopener noreferrer">1076A — Minimizing the String</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1076A](https://codeforces.com/contest/1076/problem/A) |

## Topics
`greedy` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Minimizing the String</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a string $$$s$$$ consisting of $$$n$$$ lowercase Latin letters.</p><p>You have to remove <span class="tex-font-style-bf">at most one</span> (i.e. zero or one) character of this string in such a way that the string you obtain will be lexicographically smallest among all strings that can be obtained using this operation.</p><p>String $$$s = s_1 s_2 \dots s_n$$$ is <span class="tex-font-style-it">lexicographically smaller</span> than string $$$t = t_1 t_2 \dots t_m$$$ if $$$n  \lt  m$$$ and $$$s_1 = t_1, s_2 = t_2, \dots, s_n = t_n$$$ or there exists a number $$$p$$$ such that $$$p \le min(n, m)$$$ and $$$s_1 = t_1, s_2 = t_2, \dots, s_{p-1} = t_{p-1}$$$ and $$$s_p  \lt  t_p$$$.</p><p>For example, "<span class="tex-font-style-tt">aaa</span>" is smaller than "<span class="tex-font-style-tt">aaaa</span>", "<span class="tex-font-style-tt">abb</span>" is smaller than "<span class="tex-font-style-tt">abc</span>", "<span class="tex-font-style-tt">pqr</span>" is smaller than "<span class="tex-font-style-tt">z</span>".</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the length of $$$s$$$.</p><p>The second line of the input contains exactly $$$n$$$ lowercase Latin letters — the string $$$s$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one string — the smallest possible lexicographically string that can be obtained by removing <span class="tex-font-style-bf">at most one</span> character from the string $$$s$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009919158284259489" id="id0007656314747252857" class="input-output-copier">Copy</div></div><pre id="id009919158284259489">3
aaa
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005994456432156924" id="id006620944647084464" class="input-output-copier">Copy</div></div><pre id="id005994456432156924">aa
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0041612594039598716" id="id003216430622574973" class="input-output-copier">Copy</div></div><pre id="id0041612594039598716">5
abcda
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0032058030983387864" id="id0020644297770758524" class="input-output-copier">Copy</div></div><pre id="id0032058030983387864">abca
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example you can remove any character of $$$s$$$ to obtain the string "<span class="tex-font-style-tt">aa</span>".</p><p>In the second example "<span class="tex-font-style-tt">abca</span>" < "<span class="tex-font-style-tt">abcd</span>" < "<span class="tex-font-style-tt">abcda</span>" < "<span class="tex-font-style-tt">abda</span>" < "<span class="tex-font-style-tt">acda</span>" < "<span class="tex-font-style-tt">bcda</span>".</p></div>