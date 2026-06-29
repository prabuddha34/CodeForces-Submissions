<h2><a href="https://codeforces.com/contest/1209/problem/B" target="_blank" rel="noopener noreferrer">1209B — Koala and Lights</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1209B](https://codeforces.com/contest/1209/problem/B) |

## Topics
`implementation` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Koala and Lights</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>It is a holiday season, and Koala is decorating his house with cool lights! He owns $$$n$$$ lights, all of which flash periodically.</p><p>After taking a quick glance at them, Koala realizes that each of his lights can be described with two parameters $$$a_i$$$ and $$$b_i$$$. Light with parameters $$$a_i$$$ and $$$b_i$$$ will toggle (on to off, or off to on) every $$$a_i$$$ seconds starting from the $$$b_i$$$-th second. In other words, it will toggle at the moments $$$b_i$$$, $$$b_i + a_i$$$, $$$b_i + 2 \cdot a_i$$$ and so on.</p><p>You know for each light whether it's initially on or off and its corresponding parameters $$$a_i$$$ and $$$b_i$$$. Koala is wondering what is the maximum number of lights that will ever be on at the same time. So you need to find that out.</p><center> <img class="tex-graphics" height="302px" src="https://espresso.codeforces.com/dd6abac016113099a6ce1ec5d44c9aa65bdf9dc3.png" style="max-width: 100.0%;max-height: 100.0%;" width="643px">   <span class="tex-font-size-small">Here is a graphic for the first example.</span> </center></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 100$$$), the number of lights.</p><p>The next line contains a string $$$s$$$ of $$$n$$$ characters. The $$$i$$$-th character is "<span class="tex-font-style-tt">1</span>", if the $$$i$$$-th lamp is initially on. Otherwise, $$$i$$$-th character is "<span class="tex-font-style-tt">0</span>".</p><p>The $$$i$$$-th of the following $$$n$$$ lines contains two integers $$$a_i$$$ and $$$b_i$$$ ($$$1 \le a_i, b_i \le 5$$$)  — the parameters of the $$$i$$$-th light.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the maximum number of lights that will ever be on at the same time.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0001307199895440403" id="id005606350307439752" class="input-output-copier">Copy</div></div><pre id="id0001307199895440403">3
101
3 3
3 2
3 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0023441787815896453" id="id0018442625053526107" class="input-output-copier">Copy</div></div><pre id="id0023441787815896453">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016439721297158172" id="id0037522004669339104" class="input-output-copier">Copy</div></div><pre id="id0016439721297158172">4
1111
3 4
5 2
3 1
3 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00907098001677979" id="id004465744224895024" class="input-output-copier">Copy</div></div><pre id="id00907098001677979">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0012970847119803153" id="id005352106269556721" class="input-output-copier">Copy</div></div><pre id="id0012970847119803153">6
011100
5 3
5 5
2 4
3 5
4 2
1 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009849668050443929" id="id008646107791208857" class="input-output-copier">Copy</div></div><pre id="id009849668050443929">6
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For first example, the lamps' states are shown in the picture above. The largest number of simultaneously on lamps is $$$2$$$ (e.g. at the moment $$$2$$$).</p><p>In the second example, all lights are initially on. So the answer is $$$4$$$.</p></div>