<h2><a href="https://codeforces.com/contest/1102/problem/B" target="_blank" rel="noopener noreferrer">1102B — Array K-Coloring</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1102B](https://codeforces.com/contest/1102/problem/B) |

## Topics
`greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Array K-Coloring</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ integer numbers.</p><p>You have to color this array in $$$k$$$ colors in such a way that: </p><ul> <li> Each element of the array should be colored in some color; </li><li> For each $$$i$$$ from $$$1$$$ to $$$k$$$ there should be <span class="tex-font-style-bf">at least one</span> element colored in the $$$i$$$-th color in the array; </li><li> For each $$$i$$$ from $$$1$$$ to $$$k$$$ all elements colored in the $$$i$$$-th color should be <span class="tex-font-style-bf">distinct</span>. </li></ul><p>Obviously, such coloring might be impossible. In this case, print "<span class="tex-font-style-tt">NO</span>". Otherwise print "<span class="tex-font-style-tt">YES</span>" and <span class="tex-font-style-bf">any</span> coloring (i.e. numbers $$$c_1, c_2, \dots c_n$$$, where $$$1 \le c_i \le k$$$ and $$$c_i$$$ is the color of the $$$i$$$-th element of the given array) satisfying the conditions above. If there are multiple answers, you can print <span class="tex-font-style-bf">any</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 5000$$$) — the length of the array $$$a$$$ and the number of colors, respectively.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 5000$$$) — elements of the array $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If there is no answer, print "<span class="tex-font-style-tt">NO</span>". Otherwise print "<span class="tex-font-style-tt">YES</span>" and <span class="tex-font-style-bf">any</span> coloring (i.e. numbers $$$c_1, c_2, \dots c_n$$$, where $$$1 \le c_i \le k$$$ and $$$c_i$$$ is the color of the $$$i$$$-th element of the given array) satisfying the conditions described in the problem statement. If there are multiple answers, you can print <span class="tex-font-style-bf">any</span>.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002781212436348588" id="id005646206438846698" class="input-output-copier">Copy</div></div><pre id="id002781212436348588">4 2
1 2 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0043930226966405994" id="id006248522850305339" class="input-output-copier">Copy</div></div><pre id="id0043930226966405994">YES
1 1 2 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006507900638242298" id="id003990440401442893" class="input-output-copier">Copy</div></div><pre id="id006507900638242298">5 2
3 2 1 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004527216520790851" id="id009635106281354727" class="input-output-copier">Copy</div></div><pre id="id004527216520790851">YES
2 1 1 2 1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009885832745535589" id="id0005473008392512402" class="input-output-copier">Copy</div></div><pre id="id009885832745535589">5 2
2 1 1 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006414950410788506" id="id008652308021192795" class="input-output-copier">Copy</div></div><pre id="id006414950410788506">NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example the answer $$$2~ 1~ 2~ 1$$$ is also acceptable.</p><p>In the second example the answer $$$1~ 1~ 1~ 2~ 2$$$ is also acceptable.</p><p>There exist other acceptable answers for both examples.</p></div>