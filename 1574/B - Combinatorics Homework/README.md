<h2><a href="https://codeforces.com/contest/1574/problem/B" target="_blank" rel="noopener noreferrer">1574B — Combinatorics Homework</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1574B](https://codeforces.com/contest/1574/problem/B) |

## Topics
`combinatorics` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Combinatorics Homework</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given four integer values $$$a$$$, $$$b$$$, $$$c$$$ and $$$m$$$.</p><p>Check if there exists a string that contains: </p><ul> <li> $$$a$$$ letters '<span class="tex-font-style-tt">A</span>'; </li><li> $$$b$$$ letters '<span class="tex-font-style-tt">B</span>'; </li><li> $$$c$$$ letters '<span class="tex-font-style-tt">C</span>'; </li><li> no other letters; </li><li> exactly $$$m$$$ pairs of adjacent equal letters (exactly $$$m$$$ such positions $$$i$$$ that the $$$i$$$-th letter is equal to the $$$(i+1)$$$-th one). </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of testcases.</p><p>Each of the next $$$t$$$ lines contains the description of the testcase — four integers $$$a$$$, $$$b$$$, $$$c$$$ and $$$m$$$ ($$$1 \le a, b, c \le 10^8$$$; $$$0 \le m \le 10^8$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase print "<span class="tex-font-style-tt">YES</span>" if there exists a string that satisfies all the requirements. Print "<span class="tex-font-style-tt">NO</span>" if there are no such strings.</p><p>You may print every letter in any case you want (so, for example, the strings <span class="tex-font-style-tt">yEs</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> and <span class="tex-font-style-tt">YES</span> will all be recognized as positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0006360364862395262" id="id009056366508740477" class="input-output-copier">Copy</div></div><pre id="id0006360364862395262">3
2 2 1 0
1 1 1 1
1 2 3 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005624028703412639" id="id006066266210432193" class="input-output-copier">Copy</div></div><pre id="id005624028703412639">YES
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase strings "<span class="tex-font-style-tt">ABCAB</span>" or "<span class="tex-font-style-tt">BCABA</span>" satisfy the requirements. There exist other possible strings.</p><p>In the second testcase there's no way to put adjacent equal letters if there's no letter that appears at least twice.</p><p>In the third testcase string "<span class="tex-font-style-tt">CABBCC</span>" satisfies the requirements. There exist other possible strings.</p></div>