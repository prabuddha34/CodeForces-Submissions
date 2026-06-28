<h2><a href="https://codeforces.com/contest/1155/problem/C" target="_blank" rel="noopener noreferrer">1155C — Alarm Clocks Everywhere</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1155C](https://codeforces.com/contest/1155/problem/C) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Alarm Clocks Everywhere</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ivan is going to sleep now and wants to set his alarm clock. There will be many necessary events tomorrow, the $$$i$$$-th of them will start during the $$$x_i$$$-th minute. Ivan doesn't want to skip any of the events, so he has to set his alarm clock in such a way that it rings during minutes $$$x_1, x_2, \dots, x_n$$$, so he will be awake during each of these minutes (<span class="tex-font-style-bf">note that it does not matter if his alarm clock will ring during any other minute</span>).</p><p>Ivan can choose two properties for the alarm clock — the first minute it will ring (let's denote it as $$$y$$$) and the interval between two consecutive signals (let's denote it by $$$p$$$). After the clock is set, it will ring during minutes $$$y, y + p, y + 2p, y + 3p$$$ and so on.</p><p>Ivan can choose <span class="tex-font-style-bf">any</span> minute as the first one, but he cannot choose any arbitrary value of $$$p$$$. He has to pick it among the given values $$$p_1, p_2, \dots, p_m$$$ (his phone does not support any other options for this setting).</p><p>So Ivan has to choose the first minute $$$y$$$ when the alarm clock should start ringing and the interval between two consecutive signals $$$p_j$$$ in such a way that it will ring during all given minutes $$$x_1, x_2, \dots, x_n$$$ (and it does not matter if his alarm clock will ring in any other minutes).</p><p>Your task is to tell the first minute $$$y$$$ and the index $$$j$$$ such that if Ivan sets his alarm clock with properties $$$y$$$ and $$$p_j$$$ it will ring during all given minutes $$$x_1, x_2, \dots, x_n$$$ or say that it is impossible to choose such values of the given properties. If there are multiple answers, you can print any.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains two integers $$$n$$$ and $$$m$$$ ($$$2 \le n \le 3 \cdot 10^5, 1 \le m \le 3 \cdot 10^5$$$) — the number of events and the number of possible settings for the interval between signals.</p><p>The second line of the input contains $$$n$$$ integers $$$x_1, x_2, \dots, x_n$$$ ($$$1 \le x_i \le 10^{18}$$$), where $$$x_i$$$ is the minute when $$$i$$$-th event starts. It is guaranteed that all $$$x_i$$$ are given in increasing order (i. e. the condition $$$x_1  \lt  x_2  \lt  \dots  \lt  x_n$$$ holds).</p><p>The third line of the input contains $$$m$$$ integers $$$p_1, p_2, \dots, p_m$$$ ($$$1 \le p_j \le 10^{18}$$$), where $$$p_j$$$ is the $$$j$$$-th option for the interval between two consecutive signals.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If it's impossible to choose such values $$$y$$$ and $$$j$$$ so all constraints are satisfied, print "<span class="tex-font-style-tt">NO</span>" in the first line.</p><p>Otherwise print "<span class="tex-font-style-tt">YES</span>" in the first line. Then print two integers $$$y$$$ ($$$1 \le y \le 10^{18}$$$) and $$$j$$$ ($$$1 \le j \le m$$$) in the second line, where $$$y$$$ is the first minute Ivan's alarm clock should start ringing and $$$j$$$ is the index of the option for the interval between two consecutive signals (options are numbered from $$$1$$$ to $$$m$$$ in the order they are given input). These values should be chosen in such a way that the alarm clock will ring during all given minutes $$$x_1, x_2, \dots, x_n$$$. If there are multiple answers, you can print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008331241283956617" id="id006412011509869083" class="input-output-copier">Copy</div></div><pre id="id008331241283956617">3 5
3 12 18
2 6 5 3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0047772360420952265" id="id004394426877096319" class="input-output-copier">Copy</div></div><pre id="id0047772360420952265">YES
3 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009846870871865068" id="id006509882943178592" class="input-output-copier">Copy</div></div><pre id="id009846870871865068">4 2
1 5 17 19
4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003130495090453369" id="id0008014194153789267" class="input-output-copier">Copy</div></div><pre id="id003130495090453369">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006186951240619191" id="id004431122381659657" class="input-output-copier">Copy</div></div><pre id="id006186951240619191">4 2
1 5 17 19
2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004159756934677642" id="id008358750208539113" class="input-output-copier">Copy</div></div><pre id="id004159756934677642">YES
1 1
</pre></div></div></div>