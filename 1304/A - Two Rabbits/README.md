<h2><a href="https://codeforces.com/contest/1304/problem/A" target="_blank" rel="noopener noreferrer">1304A — Two Rabbits</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1304A](https://codeforces.com/contest/1304/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Two Rabbits</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Being tired of participating in too many Codeforces rounds, Gildong decided to take some rest in a park. He sat down on a bench, and soon he found two rabbits hopping around. One of the rabbits was taller than the other.</p><p>He noticed that the two rabbits were hopping <span class="tex-font-style-it">towards each other</span>. The positions of the two rabbits can be represented as integer coordinates on a horizontal line. The taller rabbit is currently on position $$$x$$$, and the shorter rabbit is currently on position $$$y$$$ ($$$x \lt y$$$). Every second, each rabbit hops to another position. The taller rabbit hops to the positive direction by $$$a$$$, and the shorter rabbit hops to the negative direction by $$$b$$$.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/0a4a9d6404e730ec65ebf3676ea4fa2620a5f017.png" style="zoom: 75.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>For example, let's say $$$x=0$$$, $$$y=10$$$, $$$a=2$$$, and $$$b=3$$$. At the $$$1$$$-st second, each rabbit will be at position $$$2$$$ and $$$7$$$. At the $$$2$$$-nd second, both rabbits will be at position $$$4$$$.</p><p>Gildong is now wondering: <span class="tex-font-style-it">Will the two rabbits be at the same position <span class="tex-font-style-bf">at the same moment</span>? If so, how long will it take?</span> Let's find a moment in time (in seconds) after which the rabbits will be at the same point.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains one or more test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$).</p><p>Each test case contains exactly one line. The line consists of four integers $$$x$$$, $$$y$$$, $$$a$$$, $$$b$$$ ($$$0 \le x \lt y \le 10^9$$$, $$$1 \le a,b \le 10^9$$$) — the current position of the taller rabbit, the current position of the shorter rabbit, the hopping distance of the taller rabbit, and the hopping distance of the shorter rabbit, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the single integer: number of seconds the two rabbits will take to be at the same position.</p><p>If the two rabbits will never be at the same position simultaneously, print $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0019134630255448237" id="id005995203762770707" class="input-output-copier">Copy</div></div><pre id="id0019134630255448237">5
0 10 2 3
0 10 3 3
900000000 1000000000 1 9999999
1 2 1 1
1 3 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002874529935825785" id="id0032737308995596404" class="input-output-copier">Copy</div></div><pre id="id002874529935825785">2
-1
10
-1
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first case is explained in the description.</p><p>In the second case, each rabbit will be at position $$$3$$$ and $$$7$$$ respectively at the $$$1$$$-st second. But in the $$$2$$$-nd second they will be at $$$6$$$ and $$$4$$$ respectively, and we can see that they will never be at the same position since the distance between the two rabbits will only increase afterward.</p></div>